; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt -S -mtriple=amdgcn-amd-amdhsa < %s -amdgpu-promote-kernel-arguments -infer-address-spaces | FileCheck %s
; RUN: opt -S -mtriple=amdgcn-amd-amdhsa < %s -passes=amdgpu-promote-kernel-arguments,infer-address-spaces | FileCheck %s
; RUN: opt -S -mtriple=amdgcn-amd-amdhsa < %s -amdgpu-promote-kernel-arguments -infer-address-spaces | llc -mtriple=amdgcn-amd-amdhsa -mcpu=gfx900 | FileCheck -check-prefix=GCN %s

; GCN-LABEL: ptr_nest_3:
; GCN-COUNT-2: global_load_dwordx2
; GCN:         global_store_dword
define amdgpu_kernel void @ptr_nest_3(float** addrspace(1)* nocapture readonly %Arg) {
; CHECK-LABEL: @ptr_nest_3(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[P1:%.*]] = getelementptr inbounds float**, float** addrspace(1)* [[ARG:%.*]], i32 [[I]]
; CHECK-NEXT:    [[P2:%.*]] = load float**, float** addrspace(1)* [[P1]], align 8
; CHECK-NEXT:    [[P2_GLOBAL:%.*]] = addrspacecast float** [[P2]] to float* addrspace(1)*
; CHECK-NEXT:    [[P3:%.*]] = load float*, float* addrspace(1)* [[P2_GLOBAL]], align 8
; CHECK-NEXT:    [[P3_GLOBAL:%.*]] = addrspacecast float* [[P3]] to float addrspace(1)*
; CHECK-NEXT:    store float 0.000000e+00, float addrspace(1)* [[P3_GLOBAL]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %p1 = getelementptr inbounds float**, float** addrspace(1)* %Arg, i32 %i
  %p2 = load float**, float** addrspace(1)* %p1, align 8
  %p3 = load float*, float** %p2, align 8
  store float 0.000000e+00, float* %p3, align 4
  ret void
}

; GCN-LABEL: ptr_bitcast:
; GCN: global_load_dwordx2
; GCN: global_store_dword
define amdgpu_kernel void @ptr_bitcast(float** nocapture readonly %Arg) {
; CHECK-LABEL: @ptr_bitcast(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[ARG_GLOBAL:%.*]] = addrspacecast float** [[ARG:%.*]] to float* addrspace(1)*
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[P1:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARG_GLOBAL]], i32 [[I]]
; CHECK-NEXT:    [[P1_CAST:%.*]] = bitcast float* addrspace(1)* [[P1]] to i32* addrspace(1)*
; CHECK-NEXT:    [[P2:%.*]] = load i32*, i32* addrspace(1)* [[P1_CAST]], align 8
; CHECK-NEXT:    [[P2_GLOBAL:%.*]] = addrspacecast i32* [[P2]] to i32 addrspace(1)*
; CHECK-NEXT:    store i32 0, i32 addrspace(1)* [[P2_GLOBAL]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %p1 = getelementptr inbounds float*, float** %Arg, i32 %i
  %p1.cast = bitcast float** %p1 to i32**
  %p2 = load i32*, i32** %p1.cast, align 8
  store i32 0, i32* %p2, align 4
  ret void
}

%struct.S = type { float* }

; GCN-LABEL: ptr_in_struct:
; GCN: s_load_dwordx2
; GCN: global_store_dword
define amdgpu_kernel void @ptr_in_struct(%struct.S addrspace(1)* nocapture readonly %Arg) {
; CHECK-LABEL: @ptr_in_struct(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[P:%.*]] = getelementptr inbounds [[STRUCT_S:%.*]], [[STRUCT_S]] addrspace(1)* [[ARG:%.*]], i64 0, i32 0
; CHECK-NEXT:    [[P1:%.*]] = load float*, float* addrspace(1)* [[P]], align 8
; CHECK-NEXT:    [[P1_GLOBAL:%.*]] = addrspacecast float* [[P1]] to float addrspace(1)*
; CHECK-NEXT:    [[ID:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds float, float addrspace(1)* [[P1_GLOBAL]], i32 [[ID]]
; CHECK-NEXT:    store float 0.000000e+00, float addrspace(1)* [[ARRAYIDX]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %p = getelementptr inbounds %struct.S, %struct.S addrspace(1)* %Arg, i64 0, i32 0
  %p1 = load float*, float* addrspace(1)* %p, align 8
  %id = tail call i32 @llvm.amdgcn.workitem.id.x()
  %arrayidx = getelementptr inbounds float, float* %p1, i32 %id
  store float 0.000000e+00, float* %arrayidx, align 4
  ret void
}

@LDS = internal unnamed_addr addrspace(3) global [4 x float] undef, align 16

; GCN-LABEL: flat_ptr_arg:
; GCN-COUNT-2: global_load_dwordx2
; GCN:         global_load_dwordx4
; GCN:         global_store_dword
define amdgpu_kernel void @flat_ptr_arg(float** nocapture readonly noalias %Arg, float** nocapture noalias %Out, i32 %X) {
; CHECK-LABEL: @flat_ptr_arg(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[OUT_GLOBAL:%.*]] = addrspacecast float** [[OUT:%.*]] to float* addrspace(1)*
; CHECK-NEXT:    [[ARG_GLOBAL:%.*]] = addrspacecast float** [[ARG:%.*]] to float* addrspace(1)*
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[IDXPROM:%.*]] = zext i32 [[I]] to i64
; CHECK-NEXT:    [[ARRAYIDX10:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARG_GLOBAL]], i64 [[IDXPROM]]
; CHECK-NEXT:    [[I1:%.*]] = load float*, float* addrspace(1)* [[ARRAYIDX10]], align 8
; CHECK-NEXT:    [[I1_GLOBAL:%.*]] = addrspacecast float* [[I1]] to float addrspace(1)*
; CHECK-NEXT:    [[I2:%.*]] = load float, float addrspace(1)* [[I1_GLOBAL]], align 4
; CHECK-NEXT:    [[ARRAYIDX512:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[X:%.*]]
; CHECK-NEXT:    store float [[I2]], float addrspace(3)* [[ARRAYIDX512]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_1:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 1
; CHECK-NEXT:    [[I3:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_1]], align 4
; CHECK-NEXT:    [[ADD_1:%.*]] = add nsw i32 [[X]], 1
; CHECK-NEXT:    [[ARRAYIDX512_1:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_1]]
; CHECK-NEXT:    store float [[I3]], float addrspace(3)* [[ARRAYIDX512_1]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_2:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 2
; CHECK-NEXT:    [[I4:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_2]], align 4
; CHECK-NEXT:    [[ADD_2:%.*]] = add nsw i32 [[X]], 2
; CHECK-NEXT:    [[ARRAYIDX512_2:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_2]]
; CHECK-NEXT:    store float [[I4]], float addrspace(3)* [[ARRAYIDX512_2]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_3:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 3
; CHECK-NEXT:    [[I5:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_3]], align 4
; CHECK-NEXT:    [[ADD_3:%.*]] = add nsw i32 [[X]], 3
; CHECK-NEXT:    [[ARRAYIDX512_3:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_3]]
; CHECK-NEXT:    store float [[I5]], float addrspace(3)* [[ARRAYIDX512_3]], align 4
; CHECK-NEXT:    [[SUB:%.*]] = add nsw i32 [[X]], -1
; CHECK-NEXT:    [[ARRAYIDX711:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[SUB]]
; CHECK-NEXT:    [[I6:%.*]] = load float, float addrspace(3)* [[ARRAYIDX711]], align 4
; CHECK-NEXT:    [[ARRAYIDX11:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[OUT_GLOBAL]], i64 [[IDXPROM]]
; CHECK-NEXT:    [[I7:%.*]] = load float*, float* addrspace(1)* [[ARRAYIDX11]], align 8
; CHECK-NEXT:    [[I7_GLOBAL:%.*]] = addrspacecast float* [[I7]] to float addrspace(1)*
; CHECK-NEXT:    [[IDXPROM8:%.*]] = sext i32 [[X]] to i64
; CHECK-NEXT:    [[ARRAYIDX9:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I7_GLOBAL]], i64 [[IDXPROM8]]
; CHECK-NEXT:    store float [[I6]], float addrspace(1)* [[ARRAYIDX9]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %idxprom = zext i32 %i to i64
  %arrayidx10 = getelementptr inbounds float*, float** %Arg, i64 %idxprom
  %i1 = load float*, float** %arrayidx10, align 8
  %i2 = load float, float* %i1, align 4
  %arrayidx512 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %X
  store float %i2, float addrspace(3)* %arrayidx512, align 4
  %arrayidx3.1 = getelementptr inbounds float, float* %i1, i64 1
  %i3 = load float, float* %arrayidx3.1, align 4
  %add.1 = add nsw i32 %X, 1
  %arrayidx512.1 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.1
  store float %i3, float addrspace(3)* %arrayidx512.1, align 4
  %arrayidx3.2 = getelementptr inbounds float, float* %i1, i64 2
  %i4 = load float, float* %arrayidx3.2, align 4
  %add.2 = add nsw i32 %X, 2
  %arrayidx512.2 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.2
  store float %i4, float addrspace(3)* %arrayidx512.2, align 4
  %arrayidx3.3 = getelementptr inbounds float, float* %i1, i64 3
  %i5 = load float, float* %arrayidx3.3, align 4
  %add.3 = add nsw i32 %X, 3
  %arrayidx512.3 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.3
  store float %i5, float addrspace(3)* %arrayidx512.3, align 4
  %sub = add nsw i32 %X, -1
  %arrayidx711 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %sub
  %i6 = load float, float addrspace(3)* %arrayidx711, align 4
  %arrayidx11 = getelementptr inbounds float*, float** %Out, i64 %idxprom
  %i7 = load float*, float** %arrayidx11, align 8
  %idxprom8 = sext i32 %X to i64
  %arrayidx9 = getelementptr inbounds float, float* %i7, i64 %idxprom8
  store float %i6, float* %arrayidx9, align 4
  ret void
}

; GCN-LABEL: global_ptr_arg:
; GCN: global_load_dwordx2
; GCN: global_load_dwordx4
; GCN: global_store_dword
define amdgpu_kernel void @global_ptr_arg(float* addrspace(1)* nocapture readonly %Arg, i32 %X) {
; CHECK-LABEL: @global_ptr_arg(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[IDXPROM:%.*]] = zext i32 [[I]] to i64
; CHECK-NEXT:    [[ARRAYIDX10:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARG:%.*]], i64 [[IDXPROM]]
; CHECK-NEXT:    [[I1:%.*]] = load float*, float* addrspace(1)* [[ARRAYIDX10]], align 8
; CHECK-NEXT:    [[I1_GLOBAL:%.*]] = addrspacecast float* [[I1]] to float addrspace(1)*
; CHECK-NEXT:    [[I2:%.*]] = load float, float addrspace(1)* [[I1_GLOBAL]], align 4
; CHECK-NEXT:    [[ARRAYIDX512:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[X:%.*]]
; CHECK-NEXT:    store float [[I2]], float addrspace(3)* [[ARRAYIDX512]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_1:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 1
; CHECK-NEXT:    [[I3:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_1]], align 4
; CHECK-NEXT:    [[ADD_1:%.*]] = add nsw i32 [[X]], 1
; CHECK-NEXT:    [[ARRAYIDX512_1:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_1]]
; CHECK-NEXT:    store float [[I3]], float addrspace(3)* [[ARRAYIDX512_1]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_2:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 2
; CHECK-NEXT:    [[I4:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_2]], align 4
; CHECK-NEXT:    [[ADD_2:%.*]] = add nsw i32 [[X]], 2
; CHECK-NEXT:    [[ARRAYIDX512_2:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_2]]
; CHECK-NEXT:    store float [[I4]], float addrspace(3)* [[ARRAYIDX512_2]], align 4
; CHECK-NEXT:    [[ARRAYIDX3_3:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 3
; CHECK-NEXT:    [[I5:%.*]] = load float, float addrspace(1)* [[ARRAYIDX3_3]], align 4
; CHECK-NEXT:    [[ADD_3:%.*]] = add nsw i32 [[X]], 3
; CHECK-NEXT:    [[ARRAYIDX512_3:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[ADD_3]]
; CHECK-NEXT:    store float [[I5]], float addrspace(3)* [[ARRAYIDX512_3]], align 4
; CHECK-NEXT:    [[SUB:%.*]] = add nsw i32 [[X]], -1
; CHECK-NEXT:    [[ARRAYIDX711:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[SUB]]
; CHECK-NEXT:    [[I6:%.*]] = load float, float addrspace(3)* [[ARRAYIDX711]], align 4
; CHECK-NEXT:    [[IDXPROM8:%.*]] = sext i32 [[X]] to i64
; CHECK-NEXT:    [[ARRAYIDX9:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 [[IDXPROM8]]
; CHECK-NEXT:    store float [[I6]], float addrspace(1)* [[ARRAYIDX9]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %idxprom = zext i32 %i to i64
  %arrayidx10 = getelementptr inbounds float*, float* addrspace(1)* %Arg, i64 %idxprom
  %i1 = load float*, float* addrspace(1)* %arrayidx10, align 8
  %i2 = load float, float* %i1, align 4
  %arrayidx512 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %X
  store float %i2, float addrspace(3)* %arrayidx512, align 4
  %arrayidx3.1 = getelementptr inbounds float, float* %i1, i64 1
  %i3 = load float, float* %arrayidx3.1, align 4
  %add.1 = add nsw i32 %X, 1
  %arrayidx512.1 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.1
  store float %i3, float addrspace(3)* %arrayidx512.1, align 4
  %arrayidx3.2 = getelementptr inbounds float, float* %i1, i64 2
  %i4 = load float, float* %arrayidx3.2, align 4
  %add.2 = add nsw i32 %X, 2
  %arrayidx512.2 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.2
  store float %i4, float addrspace(3)* %arrayidx512.2, align 4
  %arrayidx3.3 = getelementptr inbounds float, float* %i1, i64 3
  %i5 = load float, float* %arrayidx3.3, align 4
  %add.3 = add nsw i32 %X, 3
  %arrayidx512.3 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %add.3
  store float %i5, float addrspace(3)* %arrayidx512.3, align 4
  %sub = add nsw i32 %X, -1
  %arrayidx711 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %sub
  %i6 = load float, float addrspace(3)* %arrayidx711, align 4
  %idxprom8 = sext i32 %X to i64
  %arrayidx9 = getelementptr inbounds float, float* %i1, i64 %idxprom8
  store float %i6, float* %arrayidx9, align 4
  ret void
}

; GCN-LABEL: global_ptr_arg_clobbered:
; GCN: global_store_dwordx2
; GCN: global_load_dwordx2
; GCN: flat_load_dword
; GCN: flat_store_dword
define amdgpu_kernel void @global_ptr_arg_clobbered(float* addrspace(1)* nocapture readonly %Arg, i32 %X) {
; CHECK-LABEL: @global_ptr_arg_clobbered(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[IDXPROM:%.*]] = zext i32 [[I]] to i64
; CHECK-NEXT:    [[ARRAYIDX10:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARG:%.*]], i64 [[IDXPROM]]
; CHECK-NEXT:    [[ARRAYIDX11:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARRAYIDX10]], i32 [[X:%.*]]
; CHECK-NEXT:    store float* null, float* addrspace(1)* [[ARRAYIDX11]], align 4
; CHECK-NEXT:    [[I1:%.*]] = load float*, float* addrspace(1)* [[ARRAYIDX10]], align 8
; CHECK-NEXT:    [[I2:%.*]] = load float, float* [[I1]], align 4
; CHECK-NEXT:    [[ARRAYIDX512:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[X]]
; CHECK-NEXT:    store float [[I2]], float addrspace(3)* [[ARRAYIDX512]], align 4
; CHECK-NEXT:    [[SUB:%.*]] = add nsw i32 [[X]], -1
; CHECK-NEXT:    [[ARRAYIDX711:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[SUB]]
; CHECK-NEXT:    [[I6:%.*]] = load float, float addrspace(3)* [[ARRAYIDX711]], align 4
; CHECK-NEXT:    [[IDXPROM8:%.*]] = sext i32 [[X]] to i64
; CHECK-NEXT:    [[ARRAYIDX9:%.*]] = getelementptr inbounds float, float* [[I1]], i64 [[IDXPROM8]]
; CHECK-NEXT:    store float [[I6]], float* [[ARRAYIDX9]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %idxprom = zext i32 %i to i64
  %arrayidx10 = getelementptr inbounds float*, float* addrspace(1)* %Arg, i64 %idxprom
  %arrayidx11 = getelementptr inbounds float*, float* addrspace(1)* %arrayidx10, i32 %X
  store float* null, float* addrspace(1)* %arrayidx11, align 4
  %i1 = load float*, float* addrspace(1)* %arrayidx10, align 8
  %i2 = load float, float* %i1, align 4
  %arrayidx512 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %X
  store float %i2, float addrspace(3)* %arrayidx512, align 4
  %sub = add nsw i32 %X, -1
  %arrayidx711 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %sub
  %i6 = load float, float addrspace(3)* %arrayidx711, align 4
  %idxprom8 = sext i32 %X to i64
  %arrayidx9 = getelementptr inbounds float, float* %i1, i64 %idxprom8
  store float %i6, float* %arrayidx9, align 4
  ret void
}

; GCN-LABEL: global_ptr_arg_clobbered_after_load:
; GCN: global_load_dwordx2
; GCN: global_store_dwordx2
; GCN: global_load_dword
; GCN: global_store_dword
define amdgpu_kernel void @global_ptr_arg_clobbered_after_load(float* addrspace(1)* nocapture readonly %Arg, i32 %X) {
; CHECK-LABEL: @global_ptr_arg_clobbered_after_load(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = tail call i32 @llvm.amdgcn.workitem.id.x()
; CHECK-NEXT:    [[IDXPROM:%.*]] = zext i32 [[I]] to i64
; CHECK-NEXT:    [[ARRAYIDX10:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARG:%.*]], i64 [[IDXPROM]]
; CHECK-NEXT:    [[I1:%.*]] = load float*, float* addrspace(1)* [[ARRAYIDX10]], align 8
; CHECK-NEXT:    [[I1_GLOBAL:%.*]] = addrspacecast float* [[I1]] to float addrspace(1)*
; CHECK-NEXT:    [[ARRAYIDX11:%.*]] = getelementptr inbounds float*, float* addrspace(1)* [[ARRAYIDX10]], i32 [[X:%.*]]
; CHECK-NEXT:    store float* null, float* addrspace(1)* [[ARRAYIDX11]], align 4
; CHECK-NEXT:    [[I2:%.*]] = load float, float addrspace(1)* [[I1_GLOBAL]], align 4
; CHECK-NEXT:    [[ARRAYIDX512:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[X]]
; CHECK-NEXT:    store float [[I2]], float addrspace(3)* [[ARRAYIDX512]], align 4
; CHECK-NEXT:    [[SUB:%.*]] = add nsw i32 [[X]], -1
; CHECK-NEXT:    [[ARRAYIDX711:%.*]] = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 [[SUB]]
; CHECK-NEXT:    [[I6:%.*]] = load float, float addrspace(3)* [[ARRAYIDX711]], align 4
; CHECK-NEXT:    [[IDXPROM8:%.*]] = sext i32 [[X]] to i64
; CHECK-NEXT:    [[ARRAYIDX9:%.*]] = getelementptr inbounds float, float addrspace(1)* [[I1_GLOBAL]], i64 [[IDXPROM8]]
; CHECK-NEXT:    store float [[I6]], float addrspace(1)* [[ARRAYIDX9]], align 4
; CHECK-NEXT:    ret void
;
entry:
  %i = tail call i32 @llvm.amdgcn.workitem.id.x()
  %idxprom = zext i32 %i to i64
  %arrayidx10 = getelementptr inbounds float*, float* addrspace(1)* %Arg, i64 %idxprom
  %i1 = load float*, float* addrspace(1)* %arrayidx10, align 8
  %arrayidx11 = getelementptr inbounds float*, float* addrspace(1)* %arrayidx10, i32 %X
  store float* null, float* addrspace(1)* %arrayidx11, align 4
  %i2 = load float, float* %i1, align 4
  %arrayidx512 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %X
  store float %i2, float addrspace(3)* %arrayidx512, align 4
  %sub = add nsw i32 %X, -1
  %arrayidx711 = getelementptr inbounds [4 x float], [4 x float] addrspace(3)* @LDS, i32 0, i32 %sub
  %i6 = load float, float addrspace(3)* %arrayidx711, align 4
  %idxprom8 = sext i32 %X to i64
  %arrayidx9 = getelementptr inbounds float, float* %i1, i64 %idxprom8
  store float %i6, float* %arrayidx9, align 4
  ret void
}

declare i32 @llvm.amdgcn.workitem.id.x()