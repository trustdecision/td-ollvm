/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_atomic_double,
  OCLT_atomic_flag,
  OCLT_atomic_float,
  OCLT_atomic_half,
  OCLT_atomic_int,
  OCLT_atomic_intptr_t,
  OCLT_atomic_long,
  OCLT_atomic_ptrdiff_t,
  OCLT_atomic_size_t,
  OCLT_atomic_uint,
  OCLT_atomic_uintptr_t,
  OCLT_atomic_ulong,
  OCLT_bool,
  OCLT_char,
  OCLT_clk_event_t,
  OCLT_clk_profiling_info,
  OCLT_double,
  OCLT_event_t,
  OCLT_float,
  OCLT_half,
  OCLT_image1d_t,
  OCLT_image1d_array_t,
  OCLT_image1d_buffer_t,
  OCLT_image2d_t,
  OCLT_image2d_array_t,
  OCLT_image2d_array_depth_t,
  OCLT_image2d_array_msaa_t,
  OCLT_image2d_array_msaa_depth_t,
  OCLT_image2d_depth_t,
  OCLT_image2d_msaa_t,
  OCLT_image2d_msaa_depth_t,
  OCLT_image3d_t,
  OCLT_int,
  OCLT_intptr_t,
  OCLT_long,
  OCLT_cl_mem_fence_flags,
  OCLT_memory_order,
  OCLT_memory_scope,
  OCLT_ndrange_t,
  OCLT_ptrdiff_t,
  OCLT_queue_t,
  OCLT_reserve_id_t,
  OCLT_sampler_t,
  OCLT_short,
  OCLT_size_t,
  OCLT_uchar,
  OCLT_uint,
  OCLT_uintptr_t,
  OCLT_ulong,
  OCLT_ushort,
  OCLT_void,
  OCLT_AGenType1,
  OCLT_AGenTypeN,
  OCLT_AGenTypeNNoScalar,
  OCLT_AI2UGenTypeN,
  OCLT_AIGenType1,
  OCLT_AIGenTypeN,
  OCLT_AIGenTypeNNoScalar,
  OCLT_CharShortGenType1,
  OCLT_FGenTypeN,
  OCLT_GenTypeCharVecAndScalar,
  OCLT_GenTypeCharVecNoScalar,
  OCLT_GenTypeDoubleVec1234,
  OCLT_GenTypeDoubleVecAndScalar,
  OCLT_GenTypeDoubleVecNoScalar,
  OCLT_GenTypeFloatVec1234,
  OCLT_GenTypeFloatVecAndScalar,
  OCLT_GenTypeFloatVecNoScalar,
  OCLT_GenTypeHalfVec1234,
  OCLT_GenTypeHalfVecAndScalar,
  OCLT_GenTypeHalfVecNoScalar,
  OCLT_GenTypeIntVecAndScalar,
  OCLT_GenTypeIntVecNoScalar,
  OCLT_GenTypeLongVecAndScalar,
  OCLT_GenTypeLongVecNoScalar,
  OCLT_GenTypeShortVecAndScalar,
  OCLT_GenTypeShortVecNoScalar,
  OCLT_GenTypeUCharVecAndScalar,
  OCLT_GenTypeUCharVecNoScalar,
  OCLT_GenTypeUIntVecAndScalar,
  OCLT_GenTypeUIntVecNoScalar,
  OCLT_GenTypeULongVecAndScalar,
  OCLT_GenTypeULongVecNoScalar,
  OCLT_GenTypeUShortVecAndScalar,
  OCLT_GenTypeUShortVecNoScalar,
  OCLT_IntLongFloatGenType1,
  OCLT_SGenTypeN,
  OCLT_UGenTypeN,
};

// Image access qualifier.
enum OpenCLAccessQual : unsigned char {
  OCLAQ_None,
  OCLAQ_ReadOnly,
  OCLAQ_WriteOnly,
  OCLAQ_ReadWrite
};

// Represents a return type or argument type.
struct OpenCLTypeStruct {
  // A type (e.g. float, int, ...).
  const OpenCLTypeID ID;
  // Vector size (if applicable; 0 for scalars and generic types).
  const unsigned VectorWidth;
  // 0 if the type is not a pointer.
  const bool IsPointer : 1;
  // 0 if the type is not const.
  const bool IsConst : 1;
  // 0 if the type is not volatile.
  const bool IsVolatile : 1;
  // Access qualifier.
  const OpenCLAccessQual AccessQualifier;
  // Address space of the pointer (if applicable).
  const LangAS AS;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinStruct {
  // Index of the signature in the OpenCLTypeStruct table.
  const unsigned SigTableIndex;
  // Entries between index SigTableIndex and (SigTableIndex + NumTypes - 1) in
  // the SignatureTable represent the complete signature.  The first type at
  // index SigTableIndex is the return type.
  const unsigned NumTypes;
  // Function attribute __attribute__((pure))
  const bool IsPure : 1;
  // Function attribute __attribute__((const))
  const bool IsConst : 1;
  // Function attribute __attribute__((convergent))
  const bool IsConv : 1;
  // OpenCL extension(s) required for this overload.
  const unsigned short Extension;
  // OpenCL versions in which this overload is available.
  const unsigned short Versions;
};

static const char *FunctionExtensionTable[] = {
  // 0: ArmIntegerDotProductAccumulateInt16
  "cl_arm_integer_dot_product_accumulate_int16",
  // 1: ArmIntegerDotProductAccumulateInt8
  "cl_arm_integer_dot_product_accumulate_int8",
  // 2: ArmIntegerDotProductAccumulateSaturateInt8
  "cl_arm_integer_dot_product_accumulate_saturate_int8",
  // 3: ArmIntegerDotProductInt8
  "cl_arm_integer_dot_product_int8",
  // 4: FuncExtFloatAtomicsFp16GenericASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_ext_fp16_global_atomic_add",
  // 5: FuncExtFloatAtomicsFp16GenericASLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_ext_fp16_local_atomic_load_store",
  // 6: FuncExtFloatAtomicsFp16GenericASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_ext_fp16_global_atomic_min_max",
  // 7: FuncExtFloatAtomicsFp16GlobalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_add",
  // 8: FuncExtFloatAtomicsFp16GlobalASLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store",
  // 9: FuncExtFloatAtomicsFp16GlobalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_min_max",
  // 10: FuncExtFloatAtomicsFp16LocalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add",
  // 11: FuncExtFloatAtomicsFp16LocalASLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_load_store",
  // 12: FuncExtFloatAtomicsFp16LocalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max",
  // 13: FuncExtFloatAtomicsFp32GenericASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_ext_fp32_global_atomic_add",
  // 14: FuncExtFloatAtomicsFp32GenericASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_ext_fp32_global_atomic_min_max",
  // 15: FuncExtFloatAtomicsFp32GlobalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_add",
  // 16: FuncExtFloatAtomicsFp32GlobalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_min_max",
  // 17: FuncExtFloatAtomicsFp32LocalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add",
  // 18: FuncExtFloatAtomicsFp32LocalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max",
  // 19: FuncExtFloatAtomicsFp64GenericASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_ext_fp64_global_atomic_add",
  // 20: FuncExtFloatAtomicsFp64GenericASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_ext_fp64_global_atomic_min_max",
  // 21: FuncExtFloatAtomicsFp64GlobalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_add",
  // 22: FuncExtFloatAtomicsFp64GlobalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_min_max",
  // 23: FuncExtFloatAtomicsFp64LocalASAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add",
  // 24: FuncExtFloatAtomicsFp64LocalASMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max",
  // 25: FuncExtKhrExtendedBitOps
  "cl_khr_extended_bit_ops",
  // 26: FuncExtKhrGlMsaaSharing
  "cl_khr_gl_msaa_sharing",
  // 27: FuncExtKhrGlMsaaSharingReadWrite
  "cl_khr_gl_msaa_sharing __opencl_c_read_write_images",
  // 28: FuncExtKhrGlobalInt32BaseAtomics
  "cl_khr_global_int32_base_atomics",
  // 29: FuncExtKhrGlobalInt32ExtendedAtomics
  "cl_khr_global_int32_extended_atomics",
  // 30: FuncExtKhrInt64BaseAtomics
  "cl_khr_int64_base_atomics",
  // 31: FuncExtKhrInt64ExtendedAtomics
  "cl_khr_int64_extended_atomics",
  // 32: FuncExtKhrLocalInt32BaseAtomics
  "cl_khr_local_int32_base_atomics",
  // 33: FuncExtKhrLocalInt32ExtendedAtomics
  "cl_khr_local_int32_extended_atomics",
  // 34: FuncExtKhrMipmapImage
  "cl_khr_mipmap_image",
  // 35: FuncExtKhrMipmapImageReadWrite
  "cl_khr_mipmap_image __opencl_c_read_write_images",
  // 36: FuncExtKhrMipmapImageWrites
  "cl_khr_mipmap_image_writes",
  // 37: FuncExtKhrMipmapWritesAndWrite3d
  "cl_khr_mipmap_image_writes cl_khr_3d_image_writes",
  // 38: FuncExtKhrSubgroupBallot
  "cl_khr_subgroup_ballot",
  // 39: FuncExtKhrSubgroupClusteredReduce
  "cl_khr_subgroup_clustered_reduce",
  // 40: FuncExtKhrSubgroupExtendedTypes
  "cl_khr_subgroup_extended_types",
  // 41: FuncExtKhrSubgroupNonUniformArithmetic
  "cl_khr_subgroup_non_uniform_arithmetic",
  // 42: FuncExtKhrSubgroupNonUniformVote
  "cl_khr_subgroup_non_uniform_vote",
  // 43: FuncExtKhrSubgroupShuffle
  "cl_khr_subgroup_shuffle",
  // 44: FuncExtKhrSubgroupShuffleRelative
  "cl_khr_subgroup_shuffle_relative",
  // 45: FuncExtKhrSubgroups
  "cl_khr_subgroups",
  // 46: FuncExtNone
  "",
  // 47: FuncExtOpenCLCGenericAddressSpace
  "__opencl_c_generic_address_space",
  // 48: FuncExtOpenCLCNamedAddressSpaceBuiltins
  "__opencl_c_named_address_space_builtins",
  // 49: FuncExtOpenCLCPipes
  "__opencl_c_pipes",
  // 50: FuncExtOpenCLCReadWriteImages
  "__opencl_c_read_write_images",
  // 51: FuncExtOpenCLCWGCollectiveFunctions
  "__opencl_c_work_group_collective_functions",
  // 52: FuncExtOpenCLCxx
  "__cplusplus",
  // 53: anonymous_10040
  "__opencl_c_integer_dot_product_input_4x8bit",
  // 54: anonymous_10049
  "__opencl_c_integer_dot_product_input_4x8bit_packed",
  // 55: anonymous_8054
  "__opencl_c_generic_address_space __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 56: anonymous_8056
  "__opencl_c_generic_address_space __opencl_c_atomic_scope_device",
  // 57: anonymous_8252
  "__opencl_c_named_address_space_builtins __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 58: anonymous_8254
  "__opencl_c_named_address_space_builtins __opencl_c_atomic_scope_device",
  // 59: anonymous_8811
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 60: anonymous_8814
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_atomic_scope_device",
  // 61: anonymous_8824
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 62: anonymous_8827
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_add __opencl_c_atomic_scope_device",
  // 63: anonymous_8831
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 64: anonymous_8834
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_add __opencl_c_atomic_scope_device",
  // 65: anonymous_8838
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 66: anonymous_8841
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_add __opencl_c_atomic_scope_device",
  // 67: anonymous_8854
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 68: anonymous_8857
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_min_max __opencl_c_atomic_scope_device",
  // 69: anonymous_8861
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 70: anonymous_8864
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_min_max __opencl_c_atomic_scope_device",
  // 71: anonymous_8868
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 72: anonymous_8871
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_min_max __opencl_c_atomic_scope_device",
  // 73: anonymous_8885
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_load_store __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 74: anonymous_8888
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_load_store __opencl_c_atomic_scope_device",
  // 75: anonymous_8898
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 76: anonymous_8901
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_atomic_scope_device",
  // 77: anonymous_8905
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 78: anonymous_8908
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_atomic_scope_device",
  // 79: anonymous_8912
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 80: anonymous_8915
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_atomic_scope_device",
  // 81: anonymous_8928
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 82: anonymous_8931
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_atomic_scope_device",
  // 83: anonymous_8935
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 84: anonymous_8938
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_atomic_scope_device",
  // 85: anonymous_8942
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 86: anonymous_8945
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_atomic_scope_device",
  // 87: anonymous_8959
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_ext_fp16_local_atomic_load_store __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 88: anonymous_8962
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_ext_fp16_local_atomic_load_store __opencl_c_atomic_scope_device",
  // 89: anonymous_8972
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_ext_fp16_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 90: anonymous_8975
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_ext_fp16_global_atomic_add __opencl_c_atomic_scope_device",
  // 91: anonymous_8979
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_ext_fp32_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 92: anonymous_8982
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_ext_fp32_global_atomic_add __opencl_c_atomic_scope_device",
  // 93: anonymous_8986
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_ext_fp64_global_atomic_add __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 94: anonymous_8989
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_ext_fp64_global_atomic_add __opencl_c_atomic_scope_device",
  // 95: anonymous_9002
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_ext_fp16_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 96: anonymous_9005
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_ext_fp16_global_atomic_min_max __opencl_c_atomic_scope_device",
  // 97: anonymous_9009
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_ext_fp32_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 98: anonymous_9012
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_ext_fp32_global_atomic_min_max __opencl_c_atomic_scope_device",
  // 99: anonymous_9016
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_ext_fp64_global_atomic_min_max __opencl_c_atomic_order_seq_cst __opencl_c_atomic_scope_device",
  // 100: anonymous_9019
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_ext_fp64_global_atomic_min_max __opencl_c_atomic_scope_device",
};

static const OpenCLTypeStruct TypeTable[] = {
  // 0
  {OCLT_AGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 1
  {OCLT_AGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 2
  {OCLT_AGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 3
  {OCLT_AI2UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 4
  {OCLT_AIGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 5
  {OCLT_AIGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 6
  {OCLT_AIGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 7
  {OCLT_atomic_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 8
  {OCLT_atomic_flag, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 9
  {OCLT_atomic_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 10
  {OCLT_atomic_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 11
  {OCLT_atomic_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 12
  {OCLT_atomic_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 13
  {OCLT_atomic_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 14
  {OCLT_atomic_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 15
  {OCLT_atomic_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 16
  {OCLT_atomic_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 17
  {OCLT_atomic_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 18
  {OCLT_atomic_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 19
  {OCLT_bool, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 20
  {OCLT_char, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 21
  {OCLT_CharShortGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 22
  {OCLT_clk_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 23
  {OCLT_clk_profiling_info, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 24
  {OCLT_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 25
  {OCLT_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 26
  {OCLT_FGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 27
  {OCLT_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 28
  {OCLT_GenTypeCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 29
  {OCLT_GenTypeCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 30
  {OCLT_GenTypeDoubleVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 31
  {OCLT_GenTypeDoubleVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 32
  {OCLT_GenTypeDoubleVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 33
  {OCLT_GenTypeFloatVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 34
  {OCLT_GenTypeFloatVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 35
  {OCLT_GenTypeFloatVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 36
  {OCLT_GenTypeHalfVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 37
  {OCLT_GenTypeHalfVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 38
  {OCLT_GenTypeHalfVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 39
  {OCLT_GenTypeIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 40
  {OCLT_GenTypeIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 41
  {OCLT_GenTypeLongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 42
  {OCLT_GenTypeLongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 43
  {OCLT_GenTypeShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 44
  {OCLT_GenTypeShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 45
  {OCLT_GenTypeUCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 46
  {OCLT_GenTypeUCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 47
  {OCLT_GenTypeUIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 48
  {OCLT_GenTypeUIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 49
  {OCLT_GenTypeULongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 50
  {OCLT_GenTypeULongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 51
  {OCLT_GenTypeUShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 52
  {OCLT_GenTypeUShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 53
  {OCLT_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 54
  {OCLT_image1d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 55
  {OCLT_image1d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 56
  {OCLT_image1d_buffer_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 57
  {OCLT_image2d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 58
  {OCLT_image2d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 59
  {OCLT_image2d_array_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 60
  {OCLT_image2d_array_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 61
  {OCLT_image2d_array_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 62
  {OCLT_image2d_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 63
  {OCLT_image2d_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 64
  {OCLT_image2d_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 65
  {OCLT_image3d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 66
  {OCLT_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 67
  {OCLT_IntLongFloatGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 68
  {OCLT_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 69
  {OCLT_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 70
  {OCLT_cl_mem_fence_flags, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 71
  {OCLT_memory_order, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 72
  {OCLT_memory_scope, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 73
  {OCLT_ndrange_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 74
  {OCLT_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 75
  {OCLT_queue_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 76
  {OCLT_reserve_id_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 77
  {OCLT_SGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 78
  {OCLT_sampler_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 79
  {OCLT_short, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 80
  {OCLT_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 81
  {OCLT_uchar, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 82
  {OCLT_UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 83
  {OCLT_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 84
  {OCLT_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 85
  {OCLT_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 86
  {OCLT_ushort, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 87
  {OCLT_void, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 88
  {OCLT_double, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 89
  {OCLT_double, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 90
  {OCLT_double, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 91
  {OCLT_double, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 92
  {OCLT_double, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 93
  {OCLT_half, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 94
  {OCLT_half, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 95
  {OCLT_half, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 96
  {OCLT_half, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 97
  {OCLT_half, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 98
  {OCLT_char, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 99
  {OCLT_char, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 100
  {OCLT_char, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 101
  {OCLT_char, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 102
  {OCLT_char, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 103
  {OCLT_uchar, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 104
  {OCLT_uchar, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 105
  {OCLT_uchar, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 106
  {OCLT_uchar, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 107
  {OCLT_uchar, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 108
  {OCLT_short, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 109
  {OCLT_short, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 110
  {OCLT_short, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 111
  {OCLT_short, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 112
  {OCLT_short, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 113
  {OCLT_ushort, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 114
  {OCLT_ushort, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 115
  {OCLT_ushort, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 116
  {OCLT_ushort, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 117
  {OCLT_ushort, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 118
  {OCLT_int, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 119
  {OCLT_int, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 120
  {OCLT_int, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 121
  {OCLT_int, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 122
  {OCLT_int, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 123
  {OCLT_uint, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 124
  {OCLT_uint, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 125
  {OCLT_uint, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 126
  {OCLT_uint, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 127
  {OCLT_uint, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 128
  {OCLT_long, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 129
  {OCLT_long, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 130
  {OCLT_long, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 131
  {OCLT_long, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 132
  {OCLT_long, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 133
  {OCLT_ulong, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 134
  {OCLT_ulong, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 135
  {OCLT_ulong, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 136
  {OCLT_ulong, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 137
  {OCLT_ulong, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 138
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 139
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 140
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 141
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 142
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 143
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 144
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 145
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 146
  {OCLT_float, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 147
  {OCLT_float, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 148
  {OCLT_char, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 149
  {OCLT_uchar, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 150
  {OCLT_short, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 151
  {OCLT_ushort, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 152
  {OCLT_int, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 153
  {OCLT_uint, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 154
  {OCLT_long, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 155
  {OCLT_ulong, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 156
  {OCLT_float, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 157
  {OCLT_double, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 158
  {OCLT_half, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 159
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 160
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 161
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 162
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 163
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 164
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 165
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 166
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 167
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 168
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 169
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 170
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 171
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 172
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 173
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 174
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 175
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 176
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 177
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 178
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 179
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 180
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 181
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 182
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 183
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 184
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 185
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 186
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 187
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 188
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 189
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 190
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 191
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 192
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 193
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 194
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 195
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 196
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 197
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 198
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 199
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 200
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 201
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 202
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 203
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 204
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 205
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 206
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 207
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 208
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 209
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 210
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 211
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 212
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 213
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 214
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 215
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 216
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 217
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 218
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 219
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 220
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 221
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 222
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 223
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 224
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 225
  {OCLT_float, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 226
  {OCLT_float, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 227
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 228
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 229
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 230
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 231
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 232
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 233
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 234
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 235
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 236
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 237
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 238
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 239
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 240
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 241
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 242
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 243
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 244
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 245
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 246
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 247
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 248
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 249
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 250
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 251
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 252
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 253
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 254
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 255
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 256
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 257
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 258
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 259
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 260
  {OCLT_float, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 261
  {OCLT_void, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 262
  {OCLT_void, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 263
  {OCLT_void, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 264
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 265
  {OCLT_AGenTypeN, 0, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 266
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 267
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 268
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 269
  {OCLT_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 270
  {OCLT_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 271
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 272
  {OCLT_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 273
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 274
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 275
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 276
  {OCLT_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 277
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 278
  {OCLT_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 279
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 280
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 281
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 282
  {OCLT_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 283
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 284
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 285
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 286
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 287
  {OCLT_atomic_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 288
  {OCLT_atomic_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 289
  {OCLT_atomic_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 290
  {OCLT_atomic_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 291
  {OCLT_atomic_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 292
  {OCLT_atomic_double, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 293
  {OCLT_atomic_uintptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 294
  {OCLT_atomic_flag, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 295
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 296
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 297
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 298
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 299
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 300
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 301
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 302
  {OCLT_atomic_flag, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 303
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 304
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 305
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 306
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 307
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 308
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 309
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 310
  {OCLT_atomic_flag, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 311
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 312
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 313
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 314
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 315
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 316
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 317
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 318
  {OCLT_atomic_flag, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 319
  {OCLT_atomic_half, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 320
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 321
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 322
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 323
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 324
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 325
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 326
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 327
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 328
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 329
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 330
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 331
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 332
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 333
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 334
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 335
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 336
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 337
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 338
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 339
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 340
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 341
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 342
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 343
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 344
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 345
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 346
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 347
  {OCLT_clk_event_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 348
  {OCLT_clk_event_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 349
  {OCLT_clk_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 350
  {OCLT_void, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 351
  {OCLT_size_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 352
  {OCLT_size_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 353
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 354
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 355
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 356
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 357
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 358
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 359
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 360
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 361
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 362
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 363
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 364
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
};

static const unsigned short SignatureTable[] = {
  // 0
  97, 122, 
  // 2
  0, 0, 
  // 4
  4, 4, 
  // 6
  66, 66, 
  // 8
  53, 66, 
  // 10
  93, 118, 
  // 12
  0, 0, 83, 
  // 15
  4, 4, 83, 
  // 18
  94, 119, 
  // 20
  66, 66, 83, 
  // 23
  5, 5, 5, 83, 83, 
  // 28
  77, 77, 83, 83, 
  // 32
  77, 82, 83, 83, 
  // 36
  82, 77, 83, 83, 
  // 40
  82, 82, 83, 83, 
  // 44
  5, 5, 
  // 46
  95, 120, 
  // 48
  83, 105, 105, 
  // 51
  66, 100, 100, 
  // 54
  66, 105, 100, 
  // 57
  66, 100, 105, 
  // 60
  83, 105, 105, 83, 
  // 64
  66, 100, 100, 66, 
  // 68
  66, 105, 100, 66, 
  // 72
  66, 100, 105, 66, 
  // 76
  96, 121, 
  // 78
  83, 83, 83, 
  // 81
  66, 83, 83, 
  // 84
  83, 83, 83, 83, 
  // 88
  66, 83, 83, 66, 
  // 92
  83, 113, 113, 83, 
  // 96
  66, 108, 108, 66, 
  // 100
  146, 88, 
  // 102
  53, 83, 
  // 104
  93, 123, 
  // 106
  94, 124, 
  // 108
  95, 125, 
  // 110
  96, 126, 
  // 112
  97, 127, 
  // 114
  147, 89, 
  // 116
  53, 69, 
  // 118
  225, 90, 
  // 120
  93, 128, 
  // 122
  94, 129, 
  // 124
  95, 130, 
  // 126
  96, 131, 
  // 128
  97, 132, 
  // 130
  226, 91, 
  // 132
  53, 85, 
  // 134
  93, 133, 
  // 136
  94, 134, 
  // 138
  95, 135, 
  // 140
  96, 136, 
  // 142
  97, 137, 
  // 144
  260, 92, 
  // 146
  27, 24, 
  // 148
  20, 27, 
  // 150
  98, 146, 
  // 152
  99, 147, 
  // 154
  100, 225, 
  // 156
  101, 226, 
  // 158
  102, 260, 
  // 160
  20, 24, 
  // 162
  98, 88, 
  // 164
  99, 89, 
  // 166
  100, 90, 
  // 168
  101, 91, 
  // 170
  102, 92, 
  // 172
  20, 53, 
  // 174
  98, 93, 
  // 176
  99, 94, 
  // 178
  100, 95, 
  // 180
  101, 96, 
  // 182
  102, 97, 
  // 184
  20, 20, 
  // 186
  98, 98, 
  // 188
  99, 99, 
  // 190
  100, 100, 
  // 192
  101, 101, 
  // 194
  102, 102, 
  // 196
  27, 53, 
  // 198
  20, 81, 
  // 200
  98, 103, 
  // 202
  99, 104, 
  // 204
  100, 105, 
  // 206
  101, 106, 
  // 208
  102, 107, 
  // 210
  146, 93, 
  // 212
  147, 94, 
  // 214
  225, 95, 
  // 216
  20, 79, 
  // 218
  98, 108, 
  // 220
  99, 109, 
  // 222
  100, 110, 
  // 224
  101, 111, 
  // 226
  102, 112, 
  // 228
  226, 96, 
  // 230
  260, 97, 
  // 232
  20, 86, 
  // 234
  98, 113, 
  // 236
  99, 114, 
  // 238
  100, 115, 
  // 240
  101, 116, 
  // 242
  102, 117, 
  // 244
  20, 66, 
  // 246
  98, 118, 
  // 248
  99, 119, 
  // 250
  100, 120, 
  // 252
  101, 121, 
  // 254
  102, 122, 
  // 256
  20, 83, 
  // 258
  98, 123, 
  // 260
  99, 124, 
  // 262
  100, 125, 
  // 264
  101, 126, 
  // 266
  102, 127, 
  // 268
  20, 69, 
  // 270
  98, 128, 
  // 272
  99, 129, 
  // 274
  100, 130, 
  // 276
  101, 131, 
  // 278
  102, 132, 
  // 280
  27, 20, 
  // 282
  20, 85, 
  // 284
  146, 98, 
  // 286
  98, 133, 
  // 288
  99, 134, 
  // 290
  100, 135, 
  // 292
  101, 136, 
  // 294
  102, 137, 
  // 296
  147, 99, 
  // 298
  225, 100, 
  // 300
  81, 27, 
  // 302
  226, 101, 
  // 304
  103, 146, 
  // 306
  104, 147, 
  // 308
  105, 225, 
  // 310
  106, 226, 
  // 312
  107, 260, 
  // 314
  260, 102, 
  // 316
  81, 24, 
  // 318
  103, 88, 
  // 320
  104, 89, 
  // 322
  105, 90, 
  // 324
  106, 91, 
  // 326
  107, 92, 
  // 328
  81, 53, 
  // 330
  103, 93, 
  // 332
  104, 94, 
  // 334
  105, 95, 
  // 336
  106, 96, 
  // 338
  107, 97, 
  // 340
  81, 20, 
  // 342
  103, 98, 
  // 344
  104, 99, 
  // 346
  105, 100, 
  // 348
  106, 101, 
  // 350
  107, 102, 
  // 352
  81, 81, 
  // 354
  103, 103, 
  // 356
  104, 104, 
  // 358
  105, 105, 
  // 360
  106, 106, 
  // 362
  107, 107, 
  // 364
  27, 81, 
  // 366
  146, 103, 
  // 368
  81, 79, 
  // 370
  103, 108, 
  // 372
  104, 109, 
  // 374
  105, 110, 
  // 376
  106, 111, 
  // 378
  107, 112, 
  // 380
  147, 104, 
  // 382
  225, 105, 
  // 384
  226, 106, 
  // 386
  81, 86, 
  // 388
  103, 113, 
  // 390
  104, 114, 
  // 392
  105, 115, 
  // 394
  106, 116, 
  // 396
  107, 117, 
  // 398
  260, 107, 
  // 400
  81, 66, 
  // 402
  103, 118, 
  // 404
  104, 119, 
  // 406
  105, 120, 
  // 408
  106, 121, 
  // 410
  107, 122, 
  // 412
  81, 83, 
  // 414
  103, 123, 
  // 416
  104, 124, 
  // 418
  105, 125, 
  // 420
  106, 126, 
  // 422
  107, 127, 
  // 424
  81, 69, 
  // 426
  103, 128, 
  // 428
  104, 129, 
  // 430
  105, 130, 
  // 432
  106, 131, 
  // 434
  107, 132, 
  // 436
  81, 85, 
  // 438
  103, 133, 
  // 440
  104, 134, 
  // 442
  105, 135, 
  // 444
  106, 136, 
  // 446
  107, 137, 
  // 448
  27, 79, 
  // 450
  146, 108, 
  // 452
  79, 27, 
  // 454
  147, 109, 
  // 456
  108, 146, 
  // 458
  109, 147, 
  // 460
  110, 225, 
  // 462
  111, 226, 
  // 464
  112, 260, 
  // 466
  225, 110, 
  // 468
  226, 111, 
  // 470
  79, 24, 
  // 472
  260, 112, 
  // 474
  108, 88, 
  // 476
  109, 89, 
  // 478
  110, 90, 
  // 480
  111, 91, 
  // 482
  112, 92, 
  // 484
  79, 53, 
  // 486
  108, 93, 
  // 488
  109, 94, 
  // 490
  110, 95, 
  // 492
  111, 96, 
  // 494
  112, 97, 
  // 496
  79, 20, 
  // 498
  108, 98, 
  // 500
  109, 99, 
  // 502
  110, 100, 
  // 504
  111, 101, 
  // 506
  112, 102, 
  // 508
  79, 81, 
  // 510
  108, 103, 
  // 512
  109, 104, 
  // 514
  110, 105, 
  // 516
  111, 106, 
  // 518
  112, 107, 
  // 520
  79, 79, 
  // 522
  108, 108, 
  // 524
  109, 109, 
  // 526
  110, 110, 
  // 528
  111, 111, 
  // 530
  112, 112, 
  // 532
  27, 86, 
  // 534
  146, 113, 
  // 536
  147, 114, 
  // 538
  79, 86, 
  // 540
  108, 113, 
  // 542
  109, 114, 
  // 544
  110, 115, 
  // 546
  111, 116, 
  // 548
  112, 117, 
  // 550
  225, 115, 
  // 552
  226, 116, 
  // 554
  260, 117, 
  // 556
  79, 66, 
  // 558
  108, 118, 
  // 560
  109, 119, 
  // 562
  110, 120, 
  // 564
  111, 121, 
  // 566
  112, 122, 
  // 568
  79, 83, 
  // 570
  108, 123, 
  // 572
  109, 124, 
  // 574
  110, 125, 
  // 576
  111, 126, 
  // 578
  112, 127, 
  // 580
  79, 69, 
  // 582
  108, 128, 
  // 584
  109, 129, 
  // 586
  110, 130, 
  // 588
  111, 131, 
  // 590
  112, 132, 
  // 592
  79, 85, 
  // 594
  108, 133, 
  // 596
  109, 134, 
  // 598
  110, 135, 
  // 600
  111, 136, 
  // 602
  112, 137, 
  // 604
  86, 27, 
  // 606
  27, 66, 
  // 608
  113, 146, 
  // 610
  114, 147, 
  // 612
  115, 225, 
  // 614
  116, 226, 
  // 616
  117, 260, 
  // 618
  146, 118, 
  // 620
  147, 119, 
  // 622
  86, 24, 
  // 624
  225, 120, 
  // 626
  113, 88, 
  // 628
  114, 89, 
  // 630
  115, 90, 
  // 632
  116, 91, 
  // 634
  117, 92, 
  // 636
  226, 121, 
  // 638
  260, 122, 
  // 640
  86, 53, 
  // 642
  113, 93, 
  // 644
  114, 94, 
  // 646
  115, 95, 
  // 648
  116, 96, 
  // 650
  117, 97, 
  // 652
  86, 20, 
  // 654
  113, 98, 
  // 656
  114, 99, 
  // 658
  115, 100, 
  // 660
  116, 101, 
  // 662
  117, 102, 
  // 664
  86, 81, 
  // 666
  113, 103, 
  // 668
  114, 104, 
  // 670
  115, 105, 
  // 672
  116, 106, 
  // 674
  117, 107, 
  // 676
  86, 79, 
  // 678
  113, 108, 
  // 680
  114, 109, 
  // 682
  115, 110, 
  // 684
  116, 111, 
  // 686
  117, 112, 
  // 688
  27, 83, 
  // 690
  86, 86, 
  // 692
  113, 113, 
  // 694
  114, 114, 
  // 696
  115, 115, 
  // 698
  116, 116, 
  // 700
  117, 117, 
  // 702
  146, 123, 
  // 704
  147, 124, 
  // 706
  225, 125, 
  // 708
  86, 66, 
  // 710
  113, 118, 
  // 712
  114, 119, 
  // 714
  115, 120, 
  // 716
  116, 121, 
  // 718
  117, 122, 
  // 720
  226, 126, 
  // 722
  260, 127, 
  // 724
  86, 83, 
  // 726
  113, 123, 
  // 728
  114, 124, 
  // 730
  115, 125, 
  // 732
  116, 126, 
  // 734
  117, 127, 
  // 736
  86, 69, 
  // 738
  113, 128, 
  // 740
  114, 129, 
  // 742
  115, 130, 
  // 744
  116, 131, 
  // 746
  117, 132, 
  // 748
  86, 85, 
  // 750
  113, 133, 
  // 752
  114, 134, 
  // 754
  115, 135, 
  // 756
  116, 136, 
  // 758
  117, 137, 
  // 760
  66, 27, 
  // 762
  118, 146, 
  // 764
  119, 147, 
  // 766
  120, 225, 
  // 768
  121, 226, 
  // 770
  122, 260, 
  // 772
  27, 69, 
  // 774
  66, 24, 
  // 776
  146, 128, 
  // 778
  118, 88, 
  // 780
  119, 89, 
  // 782
  120, 90, 
  // 784
  121, 91, 
  // 786
  122, 92, 
  // 788
  147, 129, 
  // 790
  225, 130, 
  // 792
  66, 53, 
  // 794
  226, 131, 
  // 796
  118, 93, 
  // 798
  119, 94, 
  // 800
  120, 95, 
  // 802
  121, 96, 
  // 804
  122, 97, 
  // 806
  260, 132, 
  // 808
  66, 20, 
  // 810
  118, 98, 
  // 812
  119, 99, 
  // 814
  120, 100, 
  // 816
  121, 101, 
  // 818
  122, 102, 
  // 820
  66, 81, 
  // 822
  118, 103, 
  // 824
  119, 104, 
  // 826
  120, 105, 
  // 828
  121, 106, 
  // 830
  122, 107, 
  // 832
  66, 79, 
  // 834
  118, 108, 
  // 836
  119, 109, 
  // 838
  120, 110, 
  // 840
  121, 111, 
  // 842
  122, 112, 
  // 844
  66, 86, 
  // 846
  118, 113, 
  // 848
  119, 114, 
  // 850
  120, 115, 
  // 852
  121, 116, 
  // 854
  122, 117, 
  // 856
  27, 85, 
  // 858
  146, 133, 
  // 860
  118, 118, 
  // 862
  119, 119, 
  // 864
  120, 120, 
  // 866
  121, 121, 
  // 868
  122, 122, 
  // 870
  147, 134, 
  // 872
  225, 135, 
  // 874
  226, 136, 
  // 876
  66, 83, 
  // 878
  118, 123, 
  // 880
  119, 124, 
  // 882
  120, 125, 
  // 884
  121, 126, 
  // 886
  122, 127, 
  // 888
  260, 137, 
  // 890
  66, 69, 
  // 892
  118, 128, 
  // 894
  119, 129, 
  // 896
  120, 130, 
  // 898
  121, 131, 
  // 900
  122, 132, 
  // 902
  66, 85, 
  // 904
  118, 133, 
  // 906
  119, 134, 
  // 908
  120, 135, 
  // 910
  121, 136, 
  // 912
  122, 137, 
  // 914
  83, 27, 
  // 916
  123, 146, 
  // 918
  124, 147, 
  // 920
  125, 225, 
  // 922
  126, 226, 
  // 924
  127, 260, 
  // 926
  83, 24, 
  // 928
  123, 88, 
  // 930
  124, 89, 
  // 932
  125, 90, 
  // 934
  126, 91, 
  // 936
  127, 92, 
  // 938
  24, 27, 
  // 940
  88, 146, 
  // 942
  89, 147, 
  // 944
  90, 225, 
  // 946
  83, 53, 
  // 948
  91, 226, 
  // 950
  123, 93, 
  // 952
  124, 94, 
  // 954
  125, 95, 
  // 956
  126, 96, 
  // 958
  127, 97, 
  // 960
  92, 260, 
  // 962
  83, 20, 
  // 964
  123, 98, 
  // 966
  124, 99, 
  // 968
  125, 100, 
  // 970
  126, 101, 
  // 972
  127, 102, 
  // 974
  83, 81, 
  // 976
  123, 103, 
  // 978
  124, 104, 
  // 980
  125, 105, 
  // 982
  126, 106, 
  // 984
  127, 107, 
  // 986
  83, 79, 
  // 988
  123, 108, 
  // 990
  124, 109, 
  // 992
  125, 110, 
  // 994
  126, 111, 
  // 996
  127, 112, 
  // 998
  83, 86, 
  // 1000
  123, 113, 
  // 1002
  124, 114, 
  // 1004
  125, 115, 
  // 1006
  126, 116, 
  // 1008
  127, 117, 
  // 1010
  24, 24, 
  // 1012
  88, 88, 
  // 1014
  89, 89, 
  // 1016
  90, 90, 
  // 1018
  83, 66, 
  // 1020
  91, 91, 
  // 1022
  123, 118, 
  // 1024
  124, 119, 
  // 1026
  125, 120, 
  // 1028
  126, 121, 
  // 1030
  127, 122, 
  // 1032
  92, 92, 
  // 1034
  83, 83, 
  // 1036
  123, 123, 
  // 1038
  124, 124, 
  // 1040
  125, 125, 
  // 1042
  126, 126, 
  // 1044
  127, 127, 
  // 1046
  83, 69, 
  // 1048
  123, 128, 
  // 1050
  124, 129, 
  // 1052
  125, 130, 
  // 1054
  126, 131, 
  // 1056
  127, 132, 
  // 1058
  83, 85, 
  // 1060
  123, 133, 
  // 1062
  124, 134, 
  // 1064
  125, 135, 
  // 1066
  126, 136, 
  // 1068
  127, 137, 
  // 1070
  69, 27, 
  // 1072
  128, 146, 
  // 1074
  129, 147, 
  // 1076
  130, 225, 
  // 1078
  131, 226, 
  // 1080
  132, 260, 
  // 1082
  24, 53, 
  // 1084
  88, 93, 
  // 1086
  89, 94, 
  // 1088
  90, 95, 
  // 1090
  69, 24, 
  // 1092
  91, 96, 
  // 1094
  128, 88, 
  // 1096
  129, 89, 
  // 1098
  130, 90, 
  // 1100
  131, 91, 
  // 1102
  132, 92, 
  // 1104
  92, 97, 
  // 1106
  69, 53, 
  // 1108
  128, 93, 
  // 1110
  129, 94, 
  // 1112
  130, 95, 
  // 1114
  131, 96, 
  // 1116
  132, 97, 
  // 1118
  69, 20, 
  // 1120
  128, 98, 
  // 1122
  129, 99, 
  // 1124
  130, 100, 
  // 1126
  131, 101, 
  // 1128
  132, 102, 
  // 1130
  69, 81, 
  // 1132
  128, 103, 
  // 1134
  129, 104, 
  // 1136
  130, 105, 
  // 1138
  131, 106, 
  // 1140
  132, 107, 
  // 1142
  69, 79, 
  // 1144
  128, 108, 
  // 1146
  129, 109, 
  // 1148
  130, 110, 
  // 1150
  131, 111, 
  // 1152
  132, 112, 
  // 1154
  24, 20, 
  // 1156
  88, 98, 
  // 1158
  89, 99, 
  // 1160
  90, 100, 
  // 1162
  69, 86, 
  // 1164
  91, 101, 
  // 1166
  128, 113, 
  // 1168
  129, 114, 
  // 1170
  130, 115, 
  // 1172
  131, 116, 
  // 1174
  132, 117, 
  // 1176
  92, 102, 
  // 1178
  69, 66, 
  // 1180
  128, 118, 
  // 1182
  129, 119, 
  // 1184
  130, 120, 
  // 1186
  131, 121, 
  // 1188
  132, 122, 
  // 1190
  69, 83, 
  // 1192
  128, 123, 
  // 1194
  129, 124, 
  // 1196
  130, 125, 
  // 1198
  131, 126, 
  // 1200
  132, 127, 
  // 1202
  69, 69, 
  // 1204
  128, 128, 
  // 1206
  129, 129, 
  // 1208
  130, 130, 
  // 1210
  131, 131, 
  // 1212
  132, 132, 
  // 1214
  69, 85, 
  // 1216
  128, 133, 
  // 1218
  129, 134, 
  // 1220
  130, 135, 
  // 1222
  131, 136, 
  // 1224
  132, 137, 
  // 1226
  24, 81, 
  // 1228
  88, 103, 
  // 1230
  89, 104, 
  // 1232
  90, 105, 
  // 1234
  85, 27, 
  // 1236
  91, 106, 
  // 1238
  133, 146, 
  // 1240
  134, 147, 
  // 1242
  135, 225, 
  // 1244
  136, 226, 
  // 1246
  137, 260, 
  // 1248
  92, 107, 
  // 1250
  85, 24, 
  // 1252
  133, 88, 
  // 1254
  134, 89, 
  // 1256
  135, 90, 
  // 1258
  136, 91, 
  // 1260
  137, 92, 
  // 1262
  85, 53, 
  // 1264
  133, 93, 
  // 1266
  134, 94, 
  // 1268
  135, 95, 
  // 1270
  136, 96, 
  // 1272
  137, 97, 
  // 1274
  85, 20, 
  // 1276
  133, 98, 
  // 1278
  134, 99, 
  // 1280
  135, 100, 
  // 1282
  136, 101, 
  // 1284
  137, 102, 
  // 1286
  85, 81, 
  // 1288
  133, 103, 
  // 1290
  134, 104, 
  // 1292
  135, 105, 
  // 1294
  136, 106, 
  // 1296
  137, 107, 
  // 1298
  24, 79, 
  // 1300
  88, 108, 
  // 1302
  89, 109, 
  // 1304
  90, 110, 
  // 1306
  85, 79, 
  // 1308
  91, 111, 
  // 1310
  133, 108, 
  // 1312
  134, 109, 
  // 1314
  135, 110, 
  // 1316
  136, 111, 
  // 1318
  137, 112, 
  // 1320
  92, 112, 
  // 1322
  85, 86, 
  // 1324
  133, 113, 
  // 1326
  134, 114, 
  // 1328
  135, 115, 
  // 1330
  136, 116, 
  // 1332
  137, 117, 
  // 1334
  85, 66, 
  // 1336
  133, 118, 
  // 1338
  134, 119, 
  // 1340
  135, 120, 
  // 1342
  136, 121, 
  // 1344
  137, 122, 
  // 1346
  85, 83, 
  // 1348
  133, 123, 
  // 1350
  134, 124, 
  // 1352
  135, 125, 
  // 1354
  136, 126, 
  // 1356
  137, 127, 
  // 1358
  85, 69, 
  // 1360
  133, 128, 
  // 1362
  134, 129, 
  // 1364
  135, 130, 
  // 1366
  136, 131, 
  // 1368
  137, 132, 
  // 1370
  24, 86, 
  // 1372
  88, 113, 
  // 1374
  89, 114, 
  // 1376
  90, 115, 
  // 1378
  85, 85, 
  // 1380
  91, 116, 
  // 1382
  133, 133, 
  // 1384
  134, 134, 
  // 1386
  135, 135, 
  // 1388
  136, 136, 
  // 1390
  137, 137, 
  // 1392
  92, 117, 
  // 1394
  83, 
  // 1395
  80, 83, 
  // 1397
  80, 
  // 1398
  27, 27, 
  // 1400
  26, 26, 
  // 1402
  34, 47, 
  // 1404
  31, 49, 
  // 1406
  37, 51, 
  // 1408
  26, 26, 26, 
  // 1411
  35, 35, 27, 
  // 1414
  32, 32, 24, 
  // 1417
  38, 38, 53, 
  // 1420
  39, 34, 
  // 1422
  39, 31, 
  // 1424
  39, 37, 
  // 1426
  34, 34, 39, 
  // 1429
  35, 35, 66, 
  // 1432
  31, 31, 39, 
  // 1435
  32, 32, 66, 
  // 1438
  37, 37, 39, 
  // 1441
  38, 38, 66, 
  // 1444
  26, 26, 26, 26, 
  // 1448
  26, 26, 138, 
  // 1451
  34, 34, 139, 
  // 1454
  34, 34, 34, 139, 
  // 1458
  31, 31, 139, 
  // 1461
  37, 37, 139, 
  // 1464
  31, 31, 31, 139, 
  // 1468
  37, 37, 37, 139, 
  // 1472
  26, 26, 140, 
  // 1475
  146, 146, 
  // 1477
  34, 34, 141, 
  // 1480
  31, 31, 141, 
  // 1483
  37, 37, 141, 
  // 1486
  34, 34, 34, 141, 
  // 1490
  31, 31, 31, 141, 
  // 1494
  37, 37, 37, 141, 
  // 1498
  26, 26, 142, 
  // 1501
  34, 34, 143, 
  // 1504
  31, 31, 143, 
  // 1507
  37, 37, 143, 
  // 1510
  34, 34, 34, 143, 
  // 1514
  31, 31, 31, 143, 
  // 1518
  37, 37, 37, 143, 
  // 1522
  26, 26, 144, 
  // 1525
  34, 34, 145, 
  // 1528
  31, 31, 145, 
  // 1531
  37, 37, 145, 
  // 1534
  34, 34, 34, 145, 
  // 1538
  31, 31, 31, 145, 
  // 1542
  37, 37, 37, 145, 
  // 1546
  34, 34, 
  // 1548
  34, 34, 34, 
  // 1551
  3, 5, 
  // 1553
  3, 5, 5, 
  // 1556
  5, 5, 5, 
  // 1559
  6, 6, 4, 
  // 1562
  43, 28, 45, 
  // 1565
  51, 45, 45, 
  // 1568
  39, 43, 51, 
  // 1571
  47, 51, 51, 
  // 1574
  41, 39, 47, 
  // 1577
  49, 47, 47, 
  // 1580
  5, 5, 5, 5, 
  // 1584
  6, 6, 4, 4, 
  // 1588
  24, 66, 
  // 1590
  39, 39, 39, 39, 
  // 1594
  47, 47, 47, 47, 
  // 1598
  39, 39, 39, 
  // 1601
  47, 47, 47, 
  // 1604
  88, 118, 
  // 1606
  35, 27, 35, 
  // 1609
  32, 24, 32, 
  // 1612
  38, 53, 38, 
  // 1615
  89, 119, 
  // 1617
  35, 35, 27, 27, 
  // 1621
  32, 32, 24, 24, 
  // 1625
  38, 38, 53, 53, 
  // 1629
  35, 35, 35, 27, 
  // 1633
  32, 32, 32, 24, 
  // 1637
  38, 38, 38, 53, 
  // 1641
  35, 27, 27, 35, 
  // 1645
  90, 120, 
  // 1647
  32, 24, 24, 32, 
  // 1651
  38, 53, 53, 38, 
  // 1655
  27, 33, 
  // 1657
  24, 30, 
  // 1659
  53, 36, 
  // 1661
  33, 33, 
  // 1663
  30, 30, 
  // 1665
  36, 36, 
  // 1667
  91, 121, 
  // 1669
  147, 147, 147, 
  // 1672
  89, 89, 89, 
  // 1675
  94, 94, 94, 
  // 1678
  225, 225, 225, 
  // 1681
  90, 90, 90, 
  // 1684
  95, 95, 95, 
  // 1687
  27, 33, 33, 
  // 1690
  24, 30, 30, 
  // 1693
  53, 36, 36, 
  // 1696
  92, 122, 
  // 1698
  42, 32, 
  // 1700
  44, 38, 
  // 1702
  66, 77, 
  // 1704
  39, 34, 34, 
  // 1707
  66, 24, 24, 
  // 1710
  42, 32, 32, 
  // 1713
  66, 53, 53, 
  // 1716
  44, 38, 38, 
  // 1719
  1, 1, 1, 1, 
  // 1723
  77, 77, 77, 77, 
  // 1727
  77, 77, 77, 82, 
  // 1731
  82, 82, 82, 82, 
  // 1735
  82, 82, 82, 77, 
  // 1739
  34, 34, 34, 39, 
  // 1743
  34, 34, 34, 47, 
  // 1747
  31, 31, 31, 41, 
  // 1751
  31, 31, 31, 49, 
  // 1755
  37, 37, 37, 43, 
  // 1759
  37, 37, 37, 51, 
  // 1763
  98, 80, 159, 
  // 1766
  103, 80, 160, 
  // 1769
  108, 80, 161, 
  // 1772
  113, 80, 162, 
  // 1775
  118, 80, 163, 
  // 1778
  123, 80, 164, 
  // 1781
  128, 80, 165, 
  // 1784
  133, 80, 166, 
  // 1787
  146, 80, 167, 
  // 1790
  88, 80, 168, 
  // 1793
  93, 80, 169, 
  // 1796
  87, 98, 80, 170, 
  // 1800
  87, 103, 80, 171, 
  // 1804
  87, 108, 80, 172, 
  // 1808
  87, 113, 80, 173, 
  // 1812
  87, 118, 80, 174, 
  // 1816
  87, 123, 80, 175, 
  // 1820
  87, 128, 80, 176, 
  // 1824
  87, 133, 80, 177, 
  // 1828
  87, 146, 80, 178, 
  // 1832
  87, 88, 80, 179, 
  // 1836
  87, 93, 80, 180, 
  // 1840
  147, 147, 
  // 1842
  99, 80, 159, 
  // 1845
  104, 80, 160, 
  // 1848
  109, 80, 161, 
  // 1851
  114, 80, 162, 
  // 1854
  119, 80, 163, 
  // 1857
  124, 80, 164, 
  // 1860
  129, 80, 165, 
  // 1863
  134, 80, 166, 
  // 1866
  147, 80, 167, 
  // 1869
  89, 80, 168, 
  // 1872
  94, 80, 169, 
  // 1875
  87, 99, 80, 170, 
  // 1879
  87, 104, 80, 171, 
  // 1883
  87, 109, 80, 172, 
  // 1887
  87, 114, 80, 173, 
  // 1891
  87, 119, 80, 174, 
  // 1895
  87, 124, 80, 175, 
  // 1899
  87, 129, 80, 176, 
  // 1903
  87, 134, 80, 177, 
  // 1907
  87, 147, 80, 178, 
  // 1911
  87, 89, 80, 179, 
  // 1915
  87, 94, 80, 180, 
  // 1919
  100, 80, 159, 
  // 1922
  105, 80, 160, 
  // 1925
  110, 80, 161, 
  // 1928
  115, 80, 162, 
  // 1931
  120, 80, 163, 
  // 1934
  125, 80, 164, 
  // 1937
  130, 80, 165, 
  // 1940
  135, 80, 166, 
  // 1943
  225, 80, 167, 
  // 1946
  90, 80, 168, 
  // 1949
  95, 80, 169, 
  // 1952
  87, 100, 80, 170, 
  // 1956
  87, 105, 80, 171, 
  // 1960
  87, 110, 80, 172, 
  // 1964
  87, 115, 80, 173, 
  // 1968
  87, 120, 80, 174, 
  // 1972
  87, 125, 80, 175, 
  // 1976
  87, 130, 80, 176, 
  // 1980
  87, 135, 80, 177, 
  // 1984
  87, 225, 80, 178, 
  // 1988
  87, 90, 80, 179, 
  // 1992
  87, 95, 80, 180, 
  // 1996
  101, 80, 159, 
  // 1999
  106, 80, 160, 
  // 2002
  111, 80, 161, 
  // 2005
  116, 80, 162, 
  // 2008
  121, 80, 163, 
  // 2011
  126, 80, 164, 
  // 2014
  131, 80, 165, 
  // 2017
  136, 80, 166, 
  // 2020
  226, 80, 167, 
  // 2023
  91, 80, 168, 
  // 2026
  96, 80, 169, 
  // 2029
  87, 101, 80, 170, 
  // 2033
  87, 106, 80, 171, 
  // 2037
  87, 111, 80, 172, 
  // 2041
  87, 116, 80, 173, 
  // 2045
  87, 121, 80, 174, 
  // 2049
  87, 126, 80, 175, 
  // 2053
  87, 131, 80, 176, 
  // 2057
  87, 136, 80, 177, 
  // 2061
  87, 226, 80, 178, 
  // 2065
  24, 83, 
  // 2067
  87, 91, 80, 179, 
  // 2071
  87, 96, 80, 180, 
  // 2075
  102, 80, 159, 
  // 2078
  107, 80, 160, 
  // 2081
  112, 80, 161, 
  // 2084
  117, 80, 162, 
  // 2087
  122, 80, 163, 
  // 2090
  127, 80, 164, 
  // 2093
  132, 80, 165, 
  // 2096
  137, 80, 166, 
  // 2099
  88, 123, 
  // 2101
  260, 80, 167, 
  // 2104
  92, 80, 168, 
  // 2107
  97, 80, 169, 
  // 2110
  87, 102, 80, 170, 
  // 2114
  87, 107, 80, 171, 
  // 2118
  87, 112, 80, 172, 
  // 2122
  87, 117, 80, 173, 
  // 2126
  87, 122, 80, 174, 
  // 2130
  87, 127, 80, 175, 
  // 2134
  87, 132, 80, 176, 
  // 2138
  89, 124, 
  // 2140
  87, 137, 80, 177, 
  // 2144
  87, 260, 80, 178, 
  // 2148
  87, 92, 80, 179, 
  // 2152
  87, 97, 80, 180, 
  // 2156
  98, 80, 181, 
  // 2159
  103, 80, 182, 
  // 2162
  108, 80, 183, 
  // 2165
  113, 80, 184, 
  // 2168
  118, 80, 185, 
  // 2171
  123, 80, 186, 
  // 2174
  90, 125, 
  // 2176
  128, 80, 187, 
  // 2179
  133, 80, 188, 
  // 2182
  146, 80, 189, 
  // 2185
  88, 80, 190, 
  // 2188
  93, 80, 191, 
  // 2191
  87, 98, 80, 192, 
  // 2195
  87, 103, 80, 193, 
  // 2199
  87, 108, 80, 194, 
  // 2203
  87, 113, 80, 195, 
  // 2207
  87, 118, 80, 196, 
  // 2211
  91, 126, 
  // 2213
  87, 123, 80, 197, 
  // 2217
  87, 128, 80, 198, 
  // 2221
  87, 133, 80, 199, 
  // 2225
  87, 146, 80, 200, 
  // 2229
  87, 88, 80, 201, 
  // 2233
  87, 93, 80, 202, 
  // 2237
  99, 80, 181, 
  // 2240
  104, 80, 182, 
  // 2243
  109, 80, 183, 
  // 2246
  114, 80, 184, 
  // 2249
  92, 127, 
  // 2251
  119, 80, 185, 
  // 2254
  124, 80, 186, 
  // 2257
  129, 80, 187, 
  // 2260
  134, 80, 188, 
  // 2263
  147, 80, 189, 
  // 2266
  89, 80, 190, 
  // 2269
  94, 80, 191, 
  // 2272
  87, 99, 80, 192, 
  // 2276
  87, 104, 80, 193, 
  // 2280
  87, 109, 80, 194, 
  // 2284
  87, 114, 80, 195, 
  // 2288
  87, 119, 80, 196, 
  // 2292
  87, 124, 80, 197, 
  // 2296
  87, 129, 80, 198, 
  // 2300
  87, 134, 80, 199, 
  // 2304
  87, 147, 80, 200, 
  // 2308
  87, 89, 80, 201, 
  // 2312
  87, 94, 80, 202, 
  // 2316
  100, 80, 181, 
  // 2319
  105, 80, 182, 
  // 2322
  110, 80, 183, 
  // 2325
  115, 80, 184, 
  // 2328
  120, 80, 185, 
  // 2331
  125, 80, 186, 
  // 2334
  130, 80, 187, 
  // 2337
  135, 80, 188, 
  // 2340
  225, 80, 189, 
  // 2343
  90, 80, 190, 
  // 2346
  95, 80, 191, 
  // 2349
  87, 100, 80, 192, 
  // 2353
  87, 105, 80, 193, 
  // 2357
  87, 110, 80, 194, 
  // 2361
  87, 115, 80, 195, 
  // 2365
  87, 120, 80, 196, 
  // 2369
  87, 125, 80, 197, 
  // 2373
  87, 130, 80, 198, 
  // 2377
  87, 135, 80, 199, 
  // 2381
  87, 225, 80, 200, 
  // 2385
  87, 90, 80, 201, 
  // 2389
  87, 95, 80, 202, 
  // 2393
  101, 80, 181, 
  // 2396
  106, 80, 182, 
  // 2399
  111, 80, 183, 
  // 2402
  116, 80, 184, 
  // 2405
  121, 80, 185, 
  // 2408
  126, 80, 186, 
  // 2411
  131, 80, 187, 
  // 2414
  136, 80, 188, 
  // 2417
  226, 80, 189, 
  // 2420
  91, 80, 190, 
  // 2423
  96, 80, 191, 
  // 2426
  87, 101, 80, 192, 
  // 2430
  87, 106, 80, 193, 
  // 2434
  87, 111, 80, 194, 
  // 2438
  87, 116, 80, 195, 
  // 2442
  87, 121, 80, 196, 
  // 2446
  87, 126, 80, 197, 
  // 2450
  87, 131, 80, 198, 
  // 2454
  87, 136, 80, 199, 
  // 2458
  87, 226, 80, 200, 
  // 2462
  225, 225, 
  // 2464
  87, 91, 80, 201, 
  // 2468
  87, 96, 80, 202, 
  // 2472
  102, 80, 181, 
  // 2475
  107, 80, 182, 
  // 2478
  112, 80, 183, 
  // 2481
  117, 80, 184, 
  // 2484
  122, 80, 185, 
  // 2487
  127, 80, 186, 
  // 2490
  132, 80, 187, 
  // 2493
  137, 80, 188, 
  // 2496
  260, 80, 189, 
  // 2499
  92, 80, 190, 
  // 2502
  97, 80, 191, 
  // 2505
  87, 102, 80, 192, 
  // 2509
  87, 107, 80, 193, 
  // 2513
  87, 112, 80, 194, 
  // 2517
  87, 117, 80, 195, 
  // 2521
  87, 122, 80, 196, 
  // 2525
  87, 127, 80, 197, 
  // 2529
  87, 132, 80, 198, 
  // 2533
  87, 137, 80, 199, 
  // 2537
  87, 260, 80, 200, 
  // 2541
  87, 92, 80, 201, 
  // 2545
  87, 97, 80, 202, 
  // 2549
  98, 80, 203, 
  // 2552
  103, 80, 204, 
  // 2555
  108, 80, 205, 
  // 2558
  113, 80, 206, 
  // 2561
  118, 80, 207, 
  // 2564
  123, 80, 208, 
  // 2567
  128, 80, 209, 
  // 2570
  133, 80, 210, 
  // 2573
  146, 80, 211, 
  // 2576
  88, 80, 212, 
  // 2579
  93, 80, 213, 
  // 2582
  87, 98, 80, 214, 
  // 2586
  87, 103, 80, 215, 
  // 2590
  87, 108, 80, 216, 
  // 2594
  87, 113, 80, 217, 
  // 2598
  87, 118, 80, 218, 
  // 2602
  87, 123, 80, 219, 
  // 2606
  87, 128, 80, 220, 
  // 2610
  87, 133, 80, 221, 
  // 2614
  87, 146, 80, 222, 
  // 2618
  87, 88, 80, 223, 
  // 2622
  87, 93, 80, 224, 
  // 2626
  99, 80, 203, 
  // 2629
  104, 80, 204, 
  // 2632
  109, 80, 205, 
  // 2635
  114, 80, 206, 
  // 2638
  119, 80, 207, 
  // 2641
  124, 80, 208, 
  // 2644
  129, 80, 209, 
  // 2647
  134, 80, 210, 
  // 2650
  147, 80, 211, 
  // 2653
  89, 80, 212, 
  // 2656
  94, 80, 213, 
  // 2659
  87, 99, 80, 214, 
  // 2663
  87, 104, 80, 215, 
  // 2667
  87, 109, 80, 216, 
  // 2671
  87, 114, 80, 217, 
  // 2675
  87, 119, 80, 218, 
  // 2679
  87, 124, 80, 219, 
  // 2683
  87, 129, 80, 220, 
  // 2687
  87, 134, 80, 221, 
  // 2691
  87, 147, 80, 222, 
  // 2695
  87, 89, 80, 223, 
  // 2699
  87, 94, 80, 224, 
  // 2703
  100, 80, 203, 
  // 2706
  105, 80, 204, 
  // 2709
  110, 80, 205, 
  // 2712
  115, 80, 206, 
  // 2715
  120, 80, 207, 
  // 2718
  125, 80, 208, 
  // 2721
  130, 80, 209, 
  // 2724
  135, 80, 210, 
  // 2727
  225, 80, 211, 
  // 2730
  90, 80, 212, 
  // 2733
  95, 80, 213, 
  // 2736
  87, 100, 80, 214, 
  // 2740
  87, 105, 80, 215, 
  // 2744
  87, 110, 80, 216, 
  // 2748
  87, 115, 80, 217, 
  // 2752
  87, 120, 80, 218, 
  // 2756
  87, 125, 80, 219, 
  // 2760
  87, 130, 80, 220, 
  // 2764
  87, 135, 80, 221, 
  // 2768
  87, 225, 80, 222, 
  // 2772
  87, 90, 80, 223, 
  // 2776
  87, 95, 80, 224, 
  // 2780
  101, 80, 203, 
  // 2783
  106, 80, 204, 
  // 2786
  111, 80, 205, 
  // 2789
  116, 80, 206, 
  // 2792
  121, 80, 207, 
  // 2795
  126, 80, 208, 
  // 2798
  131, 80, 209, 
  // 2801
  136, 80, 210, 
  // 2804
  226, 80, 211, 
  // 2807
  91, 80, 212, 
  // 2810
  96, 80, 213, 
  // 2813
  87, 101, 80, 214, 
  // 2817
  87, 106, 80, 215, 
  // 2821
  87, 111, 80, 216, 
  // 2825
  87, 116, 80, 217, 
  // 2829
  87, 121, 80, 218, 
  // 2833
  87, 126, 80, 219, 
  // 2837
  87, 131, 80, 220, 
  // 2841
  87, 136, 80, 221, 
  // 2845
  87, 226, 80, 222, 
  // 2849
  87, 91, 80, 223, 
  // 2853
  87, 96, 80, 224, 
  // 2857
  102, 80, 203, 
  // 2860
  107, 80, 204, 
  // 2863
  112, 80, 205, 
  // 2866
  117, 80, 206, 
  // 2869
  122, 80, 207, 
  // 2872
  127, 80, 208, 
  // 2875
  132, 80, 209, 
  // 2878
  137, 80, 210, 
  // 2881
  260, 80, 211, 
  // 2884
  92, 80, 212, 
  // 2887
  97, 80, 213, 
  // 2890
  87, 102, 80, 214, 
  // 2894
  87, 107, 80, 215, 
  // 2898
  87, 112, 80, 216, 
  // 2902
  87, 117, 80, 217, 
  // 2906
  87, 122, 80, 218, 
  // 2910
  87, 127, 80, 219, 
  // 2914
  87, 132, 80, 220, 
  // 2918
  87, 137, 80, 221, 
  // 2922
  87, 260, 80, 222, 
  // 2926
  87, 92, 80, 223, 
  // 2930
  87, 97, 80, 224, 
  // 2934
  98, 80, 227, 
  // 2937
  103, 80, 228, 
  // 2940
  108, 80, 229, 
  // 2943
  113, 80, 230, 
  // 2946
  118, 80, 231, 
  // 2949
  123, 80, 232, 
  // 2952
  128, 80, 233, 
  // 2955
  133, 80, 234, 
  // 2958
  146, 80, 235, 
  // 2961
  88, 80, 236, 
  // 2964
  93, 80, 237, 
  // 2967
  87, 98, 80, 238, 
  // 2971
  87, 103, 80, 239, 
  // 2975
  87, 108, 80, 240, 
  // 2979
  87, 113, 80, 241, 
  // 2983
  87, 118, 80, 242, 
  // 2987
  87, 123, 80, 243, 
  // 2991
  87, 128, 80, 244, 
  // 2995
  87, 133, 80, 245, 
  // 2999
  87, 146, 80, 246, 
  // 3003
  87, 88, 80, 247, 
  // 3007
  87, 93, 80, 248, 
  // 3011
  99, 80, 227, 
  // 3014
  104, 80, 228, 
  // 3017
  109, 80, 229, 
  // 3020
  114, 80, 230, 
  // 3023
  119, 80, 231, 
  // 3026
  124, 80, 232, 
  // 3029
  129, 80, 233, 
  // 3032
  134, 80, 234, 
  // 3035
  147, 80, 235, 
  // 3038
  89, 80, 236, 
  // 3041
  94, 80, 237, 
  // 3044
  24, 69, 
  // 3046
  87, 99, 80, 238, 
  // 3050
  87, 104, 80, 239, 
  // 3054
  87, 109, 80, 240, 
  // 3058
  87, 114, 80, 241, 
  // 3062
  87, 119, 80, 242, 
  // 3066
  87, 124, 80, 243, 
  // 3070
  87, 129, 80, 244, 
  // 3074
  87, 134, 80, 245, 
  // 3078
  87, 147, 80, 246, 
  // 3082
  87, 89, 80, 247, 
  // 3086
  226, 226, 
  // 3088
  88, 128, 
  // 3090
  87, 94, 80, 248, 
  // 3094
  100, 80, 227, 
  // 3097
  105, 80, 228, 
  // 3100
  110, 80, 229, 
  // 3103
  115, 80, 230, 
  // 3106
  120, 80, 231, 
  // 3109
  125, 80, 232, 
  // 3112
  130, 80, 233, 
  // 3115
  135, 80, 234, 
  // 3118
  225, 80, 235, 
  // 3121
  89, 129, 
  // 3123
  90, 80, 236, 
  // 3126
  95, 80, 237, 
  // 3129
  87, 100, 80, 238, 
  // 3133
  87, 105, 80, 239, 
  // 3137
  87, 110, 80, 240, 
  // 3141
  87, 115, 80, 241, 
  // 3145
  87, 120, 80, 242, 
  // 3149
  87, 125, 80, 243, 
  // 3153
  87, 130, 80, 244, 
  // 3157
  87, 135, 80, 245, 
  // 3161
  90, 130, 
  // 3163
  87, 225, 80, 246, 
  // 3167
  87, 90, 80, 247, 
  // 3171
  87, 95, 80, 248, 
  // 3175
  101, 80, 227, 
  // 3178
  106, 80, 228, 
  // 3181
  111, 80, 229, 
  // 3184
  116, 80, 230, 
  // 3187
  121, 80, 231, 
  // 3190
  126, 80, 232, 
  // 3193
  131, 80, 233, 
  // 3196
  91, 131, 
  // 3198
  136, 80, 234, 
  // 3201
  226, 80, 235, 
  // 3204
  91, 80, 236, 
  // 3207
  96, 80, 237, 
  // 3210
  87, 101, 80, 238, 
  // 3214
  87, 106, 80, 239, 
  // 3218
  87, 111, 80, 240, 
  // 3222
  87, 116, 80, 241, 
  // 3226
  87, 121, 80, 242, 
  // 3230
  87, 126, 80, 243, 
  // 3234
  92, 132, 
  // 3236
  87, 131, 80, 244, 
  // 3240
  87, 136, 80, 245, 
  // 3244
  87, 226, 80, 246, 
  // 3248
  87, 91, 80, 247, 
  // 3252
  87, 96, 80, 248, 
  // 3256
  102, 80, 227, 
  // 3259
  107, 80, 228, 
  // 3262
  112, 80, 229, 
  // 3265
  117, 80, 230, 
  // 3268
  122, 80, 231, 
  // 3271
  127, 80, 232, 
  // 3274
  132, 80, 233, 
  // 3277
  137, 80, 234, 
  // 3280
  260, 80, 235, 
  // 3283
  92, 80, 236, 
  // 3286
  97, 80, 237, 
  // 3289
  87, 102, 80, 238, 
  // 3293
  87, 107, 80, 239, 
  // 3297
  87, 112, 80, 240, 
  // 3301
  87, 117, 80, 241, 
  // 3305
  87, 122, 80, 242, 
  // 3309
  87, 127, 80, 243, 
  // 3313
  87, 132, 80, 244, 
  // 3317
  87, 137, 80, 245, 
  // 3321
  87, 260, 80, 246, 
  // 3325
  87, 92, 80, 247, 
  // 3329
  87, 97, 80, 248, 
  // 3333
  98, 80, 249, 
  // 3336
  103, 80, 250, 
  // 3339
  108, 80, 251, 
  // 3342
  113, 80, 252, 
  // 3345
  118, 80, 253, 
  // 3348
  123, 80, 254, 
  // 3351
  128, 80, 255, 
  // 3354
  133, 80, 256, 
  // 3357
  146, 80, 257, 
  // 3360
  88, 80, 258, 
  // 3363
  93, 80, 259, 
  // 3366
  99, 80, 249, 
  // 3369
  104, 80, 250, 
  // 3372
  109, 80, 251, 
  // 3375
  114, 80, 252, 
  // 3378
  119, 80, 253, 
  // 3381
  124, 80, 254, 
  // 3384
  129, 80, 255, 
  // 3387
  134, 80, 256, 
  // 3390
  147, 80, 257, 
  // 3393
  89, 80, 258, 
  // 3396
  94, 80, 259, 
  // 3399
  100, 80, 249, 
  // 3402
  105, 80, 250, 
  // 3405
  110, 80, 251, 
  // 3408
  115, 80, 252, 
  // 3411
  120, 80, 253, 
  // 3414
  125, 80, 254, 
  // 3417
  130, 80, 255, 
  // 3420
  135, 80, 256, 
  // 3423
  225, 80, 257, 
  // 3426
  90, 80, 258, 
  // 3429
  95, 80, 259, 
  // 3432
  101, 80, 249, 
  // 3435
  106, 80, 250, 
  // 3438
  111, 80, 251, 
  // 3441
  116, 80, 252, 
  // 3444
  121, 80, 253, 
  // 3447
  126, 80, 254, 
  // 3450
  131, 80, 255, 
  // 3453
  136, 80, 256, 
  // 3456
  226, 80, 257, 
  // 3459
  91, 80, 258, 
  // 3462
  96, 80, 259, 
  // 3465
  102, 80, 249, 
  // 3468
  107, 80, 250, 
  // 3471
  112, 80, 251, 
  // 3474
  117, 80, 252, 
  // 3477
  122, 80, 253, 
  // 3480
  127, 80, 254, 
  // 3483
  132, 80, 255, 
  // 3486
  137, 80, 256, 
  // 3489
  260, 80, 257, 
  // 3492
  92, 80, 258, 
  // 3495
  97, 80, 259, 
  // 3498
  27, 80, 169, 
  // 3501
  146, 80, 169, 
  // 3504
  87, 27, 80, 180, 
  // 3508
  87, 24, 80, 180, 
  // 3512
  87, 146, 80, 180, 
  // 3516
  87, 88, 80, 180, 
  // 3520
  147, 80, 169, 
  // 3523
  225, 80, 169, 
  // 3526
  226, 80, 169, 
  // 3529
  260, 80, 169, 
  // 3532
  87, 147, 80, 180, 
  // 3536
  87, 89, 80, 180, 
  // 3540
  87, 225, 80, 180, 
  // 3544
  87, 90, 80, 180, 
  // 3548
  87, 226, 80, 180, 
  // 3552
  87, 91, 80, 180, 
  // 3556
  87, 260, 80, 180, 
  // 3560
  87, 92, 80, 180, 
  // 3564
  260, 260, 
  // 3566
  27, 80, 191, 
  // 3569
  146, 80, 191, 
  // 3572
  147, 80, 191, 
  // 3575
  225, 80, 191, 
  // 3578
  226, 80, 191, 
  // 3581
  260, 80, 191, 
  // 3584
  87, 27, 80, 202, 
  // 3588
  87, 24, 80, 202, 
  // 3592
  87, 146, 80, 202, 
  // 3596
  87, 88, 80, 202, 
  // 3600
  87, 147, 80, 202, 
  // 3604
  87, 89, 80, 202, 
  // 3608
  87, 225, 80, 202, 
  // 3612
  87, 90, 80, 202, 
  // 3616
  87, 226, 80, 202, 
  // 3620
  87, 91, 80, 202, 
  // 3624
  87, 260, 80, 202, 
  // 3628
  87, 92, 80, 202, 
  // 3632
  24, 85, 
  // 3634
  88, 133, 
  // 3636
  89, 134, 
  // 3638
  90, 135, 
  // 3640
  91, 136, 
  // 3642
  92, 137, 
  // 3644
  27, 80, 213, 
  // 3647
  146, 80, 213, 
  // 3650
  147, 80, 213, 
  // 3653
  225, 80, 213, 
  // 3656
  226, 80, 213, 
  // 3659
  260, 80, 213, 
  // 3662
  87, 27, 80, 224, 
  // 3666
  87, 24, 80, 224, 
  // 3670
  87, 146, 80, 224, 
  // 3674
  87, 88, 80, 224, 
  // 3678
  87, 147, 80, 224, 
  // 3682
  87, 89, 80, 224, 
  // 3686
  87, 225, 80, 224, 
  // 3690
  87, 90, 80, 224, 
  // 3694
  87, 226, 80, 224, 
  // 3698
  87, 91, 80, 224, 
  // 3702
  87, 260, 80, 224, 
  // 3706
  87, 92, 80, 224, 
  // 3710
  27, 80, 237, 
  // 3713
  146, 80, 237, 
  // 3716
  147, 80, 237, 
  // 3719
  225, 80, 237, 
  // 3722
  226, 80, 237, 
  // 3725
  260, 80, 237, 
  // 3728
  87, 27, 80, 248, 
  // 3732
  87, 24, 80, 248, 
  // 3736
  87, 146, 80, 248, 
  // 3740
  87, 88, 80, 248, 
  // 3744
  87, 147, 80, 248, 
  // 3748
  87, 89, 80, 248, 
  // 3752
  87, 225, 80, 248, 
  // 3756
  87, 90, 80, 248, 
  // 3760
  87, 226, 80, 248, 
  // 3764
  87, 91, 80, 248, 
  // 3768
  87, 260, 80, 248, 
  // 3772
  87, 92, 80, 248, 
  // 3776
  53, 27, 
  // 3778
  93, 146, 
  // 3780
  94, 147, 
  // 3782
  95, 225, 
  // 3784
  27, 80, 259, 
  // 3787
  146, 80, 259, 
  // 3790
  147, 80, 259, 
  // 3793
  225, 80, 259, 
  // 3796
  226, 80, 259, 
  // 3799
  96, 226, 
  // 3801
  260, 80, 259, 
  // 3804
  87, 70, 
  // 3806
  87, 70, 72, 
  // 3809
  70, 261, 
  // 3811
  97, 260, 
  // 3813
  70, 263, 
  // 3815
  25, 264, 266, 80, 25, 
  // 3820
  25, 267, 268, 80, 25, 
  // 3825
  25, 264, 266, 80, 80, 25, 
  // 3831
  25, 267, 268, 80, 80, 25, 
  // 3837
  87, 66, 269, 
  // 3840
  87, 266, 80, 
  // 3843
  66, 271, 66, 
  // 3846
  66, 271, 
  // 3848
  66, 271, 66, 66, 
  // 3852
  83, 273, 83, 
  // 3855
  83, 273, 
  // 3857
  83, 273, 83, 83, 
  // 3861
  66, 274, 66, 
  // 3864
  66, 274, 
  // 3866
  66, 274, 66, 66, 
  // 3870
  83, 275, 83, 
  // 3873
  83, 275, 
  // 3875
  83, 275, 83, 83, 
  // 3879
  69, 277, 69, 
  // 3882
  69, 277, 
  // 3884
  69, 277, 69, 69, 
  // 3888
  85, 279, 85, 
  // 3891
  85, 279, 
  // 3893
  85, 279, 85, 85, 
  // 3897
  69, 280, 69, 
  // 3900
  69, 280, 
  // 3902
  69, 280, 69, 69, 
  // 3906
  85, 281, 85, 
  // 3909
  85, 281, 
  // 3911
  85, 281, 85, 85, 
  // 3915
  27, 283, 27, 
  // 3918
  27, 284, 27, 
  // 3921
  66, 285, 66, 
  // 3924
  66, 285, 
  // 3926
  66, 285, 66, 66, 
  // 3930
  83, 286, 83, 
  // 3933
  83, 286, 
  // 3935
  83, 286, 83, 83, 
  // 3939
  87, 295, 66, 
  // 3942
  87, 295, 66, 71, 
  // 3946
  87, 295, 66, 71, 72, 
  // 3951
  19, 295, 242, 66, 
  // 3955
  19, 295, 242, 66, 71, 71, 
  // 3961
  19, 295, 242, 66, 71, 71, 72, 
  // 3968
  87, 70, 71, 72, 
  // 3972
  66, 295, 
  // 3974
  66, 295, 71, 
  // 3977
  66, 295, 71, 72, 
  // 3981
  66, 295, 66, 
  // 3984
  66, 295, 66, 71, 
  // 3988
  66, 295, 66, 71, 72, 
  // 3993
  87, 296, 83, 
  // 3996
  87, 296, 83, 71, 
  // 4000
  87, 296, 83, 71, 72, 
  // 4005
  83, 296, 
  // 4007
  83, 296, 71, 
  // 4010
  83, 296, 71, 72, 
  // 4014
  83, 296, 83, 
  // 4017
  83, 296, 83, 71, 
  // 4021
  83, 296, 83, 71, 72, 
  // 4026
  19, 296, 243, 83, 
  // 4030
  19, 296, 243, 83, 71, 71, 
  // 4036
  19, 296, 243, 83, 71, 71, 72, 
  // 4043
  87, 297, 69, 
  // 4046
  53, 24, 
  // 4048
  87, 297, 69, 71, 
  // 4052
  87, 297, 69, 71, 72, 
  // 4057
  69, 297, 
  // 4059
  69, 297, 71, 
  // 4062
  69, 297, 71, 72, 
  // 4066
  69, 297, 69, 
  // 4069
  69, 297, 69, 71, 
  // 4073
  69, 297, 69, 71, 72, 
  // 4078
  19, 297, 244, 69, 
  // 4082
  93, 88, 
  // 4084
  19, 297, 244, 69, 71, 71, 
  // 4090
  19, 297, 244, 69, 71, 71, 72, 
  // 4097
  87, 298, 85, 
  // 4100
  87, 298, 85, 71, 
  // 4104
  87, 298, 85, 71, 72, 
  // 4109
  85, 298, 
  // 4111
  94, 89, 
  // 4113
  85, 298, 71, 
  // 4116
  85, 298, 71, 72, 
  // 4120
  85, 298, 85, 
  // 4123
  85, 298, 85, 71, 
  // 4127
  85, 298, 85, 71, 72, 
  // 4132
  19, 298, 245, 85, 
  // 4136
  19, 298, 245, 85, 71, 71, 
  // 4142
  19, 298, 245, 85, 71, 71, 72, 
  // 4149
  95, 90, 
  // 4151
  87, 299, 27, 
  // 4154
  87, 299, 27, 71, 
  // 4158
  87, 299, 27, 71, 72, 
  // 4163
  27, 299, 
  // 4165
  27, 299, 71, 
  // 4168
  27, 299, 71, 72, 
  // 4172
  27, 299, 27, 
  // 4175
  27, 299, 27, 71, 
  // 4179
  96, 91, 
  // 4181
  27, 299, 27, 71, 72, 
  // 4186
  19, 299, 246, 27, 
  // 4190
  19, 299, 246, 27, 71, 71, 
  // 4196
  19, 299, 246, 27, 71, 71, 72, 
  // 4203
  87, 300, 24, 
  // 4206
  87, 300, 24, 71, 
  // 4210
  97, 92, 
  // 4212
  87, 300, 24, 71, 72, 
  // 4217
  24, 300, 
  // 4219
  24, 300, 71, 
  // 4222
  24, 300, 71, 72, 
  // 4226
  24, 300, 24, 
  // 4229
  24, 300, 24, 71, 
  // 4233
  24, 300, 24, 71, 72, 
  // 4238
  19, 300, 247, 24, 
  // 4242
  19, 300, 247, 24, 71, 71, 
  // 4248
  19, 300, 247, 24, 71, 71, 72, 
  // 4255
  84, 301, 74, 
  // 4258
  84, 301, 74, 71, 
  // 4262
  84, 301, 74, 71, 72, 
  // 4267
  87, 302, 
  // 4269
  87, 302, 71, 
  // 4272
  87, 302, 71, 72, 
  // 4276
  19, 302, 
  // 4278
  19, 302, 71, 
  // 4281
  19, 302, 71, 72, 
  // 4285
  87, 303, 66, 
  // 4288
  87, 303, 66, 71, 
  // 4292
  87, 303, 66, 71, 72, 
  // 4297
  66, 303, 
  // 4299
  66, 303, 71, 
  // 4302
  66, 303, 71, 72, 
  // 4306
  66, 303, 66, 
  // 4309
  66, 303, 66, 71, 
  // 4313
  66, 303, 66, 71, 72, 
  // 4318
  19, 303, 174, 66, 
  // 4322
  19, 303, 174, 66, 71, 71, 
  // 4328
  19, 303, 174, 66, 71, 71, 72, 
  // 4335
  19, 303, 196, 66, 
  // 4339
  19, 303, 196, 66, 71, 71, 
  // 4345
  19, 303, 196, 66, 71, 71, 72, 
  // 4352
  19, 303, 218, 66, 
  // 4356
  19, 303, 218, 66, 71, 71, 
  // 4362
  19, 303, 218, 66, 71, 71, 72, 
  // 4369
  87, 304, 83, 
  // 4372
  87, 304, 83, 71, 
  // 4376
  87, 304, 83, 71, 72, 
  // 4381
  83, 304, 
  // 4383
  83, 304, 71, 
  // 4386
  83, 304, 71, 72, 
  // 4390
  83, 304, 83, 
  // 4393
  83, 304, 83, 71, 
  // 4397
  83, 304, 83, 71, 72, 
  // 4402
  19, 304, 175, 83, 
  // 4406
  19, 304, 175, 83, 71, 71, 
  // 4412
  19, 304, 175, 83, 71, 71, 72, 
  // 4419
  19, 304, 197, 83, 
  // 4423
  19, 304, 197, 83, 71, 71, 
  // 4429
  19, 304, 197, 83, 71, 71, 72, 
  // 4436
  19, 304, 219, 83, 
  // 4440
  19, 304, 219, 83, 71, 71, 
  // 4446
  19, 304, 219, 83, 71, 71, 72, 
  // 4453
  87, 305, 69, 
  // 4456
  87, 305, 69, 71, 
  // 4460
  87, 305, 69, 71, 72, 
  // 4465
  69, 305, 
  // 4467
  69, 305, 71, 
  // 4470
  69, 305, 71, 72, 
  // 4474
  69, 305, 69, 
  // 4477
  69, 305, 69, 71, 
  // 4481
  69, 305, 69, 71, 72, 
  // 4486
  19, 305, 176, 69, 
  // 4490
  19, 305, 176, 69, 71, 71, 
  // 4496
  19, 305, 176, 69, 71, 71, 72, 
  // 4503
  19, 305, 198, 69, 
  // 4507
  19, 305, 198, 69, 71, 71, 
  // 4513
  19, 305, 198, 69, 71, 71, 72, 
  // 4520
  19, 305, 220, 69, 
  // 4524
  19, 305, 220, 69, 71, 71, 
  // 4530
  19, 305, 220, 69, 71, 71, 72, 
  // 4537
  87, 306, 85, 
  // 4540
  87, 306, 85, 71, 
  // 4544
  87, 306, 85, 71, 72, 
  // 4549
  85, 306, 
  // 4551
  85, 306, 71, 
  // 4554
  85, 306, 71, 72, 
  // 4558
  85, 306, 85, 
  // 4561
  85, 306, 85, 71, 
  // 4565
  85, 306, 85, 71, 72, 
  // 4570
  19, 306, 177, 85, 
  // 4574
  19, 306, 177, 85, 71, 71, 
  // 4580
  19, 306, 177, 85, 71, 71, 72, 
  // 4587
  19, 306, 199, 85, 
  // 4591
  19, 306, 199, 85, 71, 71, 
  // 4597
  19, 306, 199, 85, 71, 71, 72, 
  // 4604
  19, 306, 221, 85, 
  // 4608
  19, 306, 221, 85, 71, 71, 
  // 4614
  19, 306, 221, 85, 71, 71, 72, 
  // 4621
  87, 307, 27, 
  // 4624
  87, 307, 27, 71, 
  // 4628
  87, 307, 27, 71, 72, 
  // 4633
  27, 307, 
  // 4635
  27, 307, 71, 
  // 4638
  27, 307, 71, 72, 
  // 4642
  27, 307, 27, 
  // 4645
  27, 307, 27, 71, 
  // 4649
  27, 307, 27, 71, 72, 
  // 4654
  19, 307, 178, 27, 
  // 4658
  19, 307, 178, 27, 71, 71, 
  // 4664
  19, 307, 178, 27, 71, 71, 72, 
  // 4671
  19, 307, 200, 27, 
  // 4675
  19, 307, 200, 27, 71, 71, 
  // 4681
  19, 307, 200, 27, 71, 71, 72, 
  // 4688
  53, 53, 
  // 4690
  19, 307, 222, 27, 
  // 4694
  19, 307, 222, 27, 71, 71, 
  // 4700
  19, 307, 222, 27, 71, 71, 72, 
  // 4707
  93, 93, 
  // 4709
  87, 308, 24, 
  // 4712
  87, 308, 24, 71, 
  // 4716
  87, 308, 24, 71, 72, 
  // 4721
  24, 308, 
  // 4723
  24, 308, 71, 
  // 4726
  24, 308, 71, 72, 
  // 4730
  24, 308, 24, 
  // 4733
  94, 94, 
  // 4735
  24, 308, 24, 71, 
  // 4739
  24, 308, 24, 71, 72, 
  // 4744
  19, 308, 179, 24, 
  // 4748
  19, 308, 179, 24, 71, 71, 
  // 4754
  19, 308, 179, 24, 71, 71, 72, 
  // 4761
  19, 308, 201, 24, 
  // 4765
  19, 308, 201, 24, 71, 71, 
  // 4771
  19, 308, 201, 24, 71, 71, 72, 
  // 4778
  19, 308, 223, 24, 
  // 4782
  19, 308, 223, 24, 71, 71, 
  // 4788
  95, 95, 
  // 4790
  19, 308, 223, 24, 71, 71, 72, 
  // 4797
  96, 96, 
  // 4799
  97, 97, 
  // 4801
  84, 309, 74, 
  // 4804
  84, 309, 74, 71, 
  // 4808
  84, 309, 74, 71, 72, 
  // 4813
  87, 310, 
  // 4815
  87, 310, 71, 
  // 4818
  87, 310, 71, 72, 
  // 4822
  19, 310, 
  // 4824
  19, 310, 71, 
  // 4827
  19, 310, 71, 72, 
  // 4831
  87, 311, 66, 
  // 4834
  87, 311, 66, 71, 
  // 4838
  87, 311, 66, 71, 72, 
  // 4843
  66, 311, 
  // 4845
  66, 311, 71, 
  // 4848
  66, 311, 71, 72, 
  // 4852
  66, 311, 66, 
  // 4855
  66, 311, 66, 71, 
  // 4859
  66, 311, 66, 71, 72, 
  // 4864
  19, 311, 174, 66, 
  // 4868
  19, 311, 174, 66, 71, 71, 
  // 4874
  19, 311, 174, 66, 71, 71, 72, 
  // 4881
  19, 311, 196, 66, 
  // 4885
  19, 311, 196, 66, 71, 71, 
  // 4891
  19, 311, 196, 66, 71, 71, 72, 
  // 4898
  19, 311, 218, 66, 
  // 4902
  19, 311, 218, 66, 71, 71, 
  // 4908
  19, 311, 218, 66, 71, 71, 72, 
  // 4915
  87, 312, 83, 
  // 4918
  87, 312, 83, 71, 
  // 4922
  87, 312, 83, 71, 72, 
  // 4927
  83, 312, 
  // 4929
  83, 312, 71, 
  // 4932
  83, 312, 71, 72, 
  // 4936
  83, 312, 83, 
  // 4939
  83, 312, 83, 71, 
  // 4943
  83, 312, 83, 71, 72, 
  // 4948
  19, 312, 175, 83, 
  // 4952
  19, 312, 175, 83, 71, 71, 
  // 4958
  19, 312, 175, 83, 71, 71, 72, 
  // 4965
  19, 312, 197, 83, 
  // 4969
  19, 312, 197, 83, 71, 71, 
  // 4975
  19, 312, 197, 83, 71, 71, 72, 
  // 4982
  19, 312, 219, 83, 
  // 4986
  19, 312, 219, 83, 71, 71, 
  // 4992
  19, 312, 219, 83, 71, 71, 72, 
  // 4999
  87, 313, 69, 
  // 5002
  87, 313, 69, 71, 
  // 5006
  87, 313, 69, 71, 72, 
  // 5011
  69, 313, 
  // 5013
  69, 313, 71, 
  // 5016
  69, 313, 71, 72, 
  // 5020
  69, 313, 69, 
  // 5023
  69, 313, 69, 71, 
  // 5027
  69, 313, 69, 71, 72, 
  // 5032
  19, 313, 176, 69, 
  // 5036
  19, 313, 176, 69, 71, 71, 
  // 5042
  19, 313, 176, 69, 71, 71, 72, 
  // 5049
  19, 313, 198, 69, 
  // 5053
  19, 313, 198, 69, 71, 71, 
  // 5059
  19, 313, 198, 69, 71, 71, 72, 
  // 5066
  19, 313, 220, 69, 
  // 5070
  19, 313, 220, 69, 71, 71, 
  // 5076
  19, 313, 220, 69, 71, 71, 72, 
  // 5083
  87, 314, 85, 
  // 5086
  87, 314, 85, 71, 
  // 5090
  87, 314, 85, 71, 72, 
  // 5095
  85, 314, 
  // 5097
  85, 314, 71, 
  // 5100
  85, 314, 71, 72, 
  // 5104
  85, 314, 85, 
  // 5107
  85, 314, 85, 71, 
  // 5111
  85, 314, 85, 71, 72, 
  // 5116
  19, 314, 177, 85, 
  // 5120
  19, 314, 177, 85, 71, 71, 
  // 5126
  19, 314, 177, 85, 71, 71, 72, 
  // 5133
  19, 314, 199, 85, 
  // 5137
  19, 314, 199, 85, 71, 71, 
  // 5143
  19, 314, 199, 85, 71, 71, 72, 
  // 5150
  19, 314, 221, 85, 
  // 5154
  19, 314, 221, 85, 71, 71, 
  // 5160
  19, 314, 221, 85, 71, 71, 72, 
  // 5167
  87, 315, 27, 
  // 5170
  87, 315, 27, 71, 
  // 5174
  87, 315, 27, 71, 72, 
  // 5179
  27, 315, 
  // 5181
  27, 315, 71, 
  // 5184
  27, 315, 71, 72, 
  // 5188
  27, 315, 27, 
  // 5191
  27, 315, 27, 71, 
  // 5195
  27, 315, 27, 71, 72, 
  // 5200
  19, 315, 178, 27, 
  // 5204
  19, 315, 178, 27, 71, 71, 
  // 5210
  19, 315, 178, 27, 71, 71, 72, 
  // 5217
  19, 315, 200, 27, 
  // 5221
  19, 315, 200, 27, 71, 71, 
  // 5227
  19, 315, 200, 27, 71, 71, 72, 
  // 5234
  19, 315, 222, 27, 
  // 5238
  19, 315, 222, 27, 71, 71, 
  // 5244
  19, 315, 222, 27, 71, 71, 72, 
  // 5251
  87, 316, 24, 
  // 5254
  87, 316, 24, 71, 
  // 5258
  87, 316, 24, 71, 72, 
  // 5263
  24, 316, 
  // 5265
  24, 316, 71, 
  // 5268
  24, 316, 71, 72, 
  // 5272
  24, 316, 24, 
  // 5275
  24, 316, 24, 71, 
  // 5279
  24, 316, 24, 71, 72, 
  // 5284
  19, 316, 179, 24, 
  // 5288
  19, 316, 179, 24, 71, 71, 
  // 5294
  19, 316, 179, 24, 71, 71, 72, 
  // 5301
  19, 316, 201, 24, 
  // 5305
  19, 316, 201, 24, 71, 71, 
  // 5311
  53, 20, 
  // 5313
  19, 316, 201, 24, 71, 71, 72, 
  // 5320
  19, 316, 223, 24, 
  // 5324
  19, 316, 223, 24, 71, 71, 
  // 5330
  19, 316, 223, 24, 71, 71, 72, 
  // 5337
  93, 98, 
  // 5339
  94, 99, 
  // 5341
  95, 100, 
  // 5343
  84, 317, 74, 
  // 5346
  84, 317, 74, 71, 
  // 5350
  84, 317, 74, 71, 72, 
  // 5355
  96, 101, 
  // 5357
  97, 102, 
  // 5359
  87, 318, 
  // 5361
  87, 318, 71, 
  // 5364
  87, 318, 71, 72, 
  // 5368
  19, 318, 
  // 5370
  19, 318, 71, 
  // 5373
  19, 318, 71, 72, 
  // 5377
  87, 320, 10, 
  // 5380
  87, 320, 10, 71, 
  // 5384
  87, 320, 10, 71, 72, 
  // 5389
  53, 320, 
  // 5391
  53, 320, 71, 
  // 5394
  53, 320, 71, 72, 
  // 5398
  53, 320, 53, 
  // 5401
  53, 320, 53, 71, 
  // 5405
  53, 320, 53, 71, 72, 
  // 5410
  53, 307, 53, 
  // 5413
  53, 307, 53, 71, 
  // 5417
  53, 307, 53, 71, 72, 
  // 5422
  87, 321, 10, 
  // 5425
  87, 321, 10, 71, 
  // 5429
  87, 321, 10, 71, 72, 
  // 5434
  53, 321, 
  // 5436
  53, 321, 71, 
  // 5439
  53, 321, 71, 72, 
  // 5443
  53, 321, 53, 
  // 5446
  53, 321, 53, 71, 
  // 5450
  53, 321, 53, 71, 72, 
  // 5455
  53, 315, 53, 
  // 5458
  53, 315, 53, 71, 
  // 5462
  53, 315, 53, 71, 72, 
  // 5467
  87, 322, 10, 
  // 5470
  87, 322, 10, 71, 
  // 5474
  87, 322, 10, 71, 72, 
  // 5479
  53, 322, 
  // 5481
  53, 322, 71, 
  // 5484
  53, 322, 71, 72, 
  // 5488
  53, 322, 53, 
  // 5491
  53, 322, 53, 71, 
  // 5495
  53, 322, 53, 71, 72, 
  // 5500
  53, 299, 53, 
  // 5503
  53, 299, 53, 71, 
  // 5507
  53, 299, 53, 71, 72, 
  // 5512
  53, 81, 
  // 5514
  93, 103, 
  // 5516
  94, 104, 
  // 5518
  95, 105, 
  // 5520
  96, 106, 
  // 5522
  98, 98, 103, 
  // 5525
  103, 103, 103, 
  // 5528
  108, 108, 113, 
  // 5531
  113, 113, 113, 
  // 5534
  118, 118, 123, 
  // 5537
  123, 123, 123, 
  // 5540
  128, 128, 133, 
  // 5543
  133, 133, 133, 
  // 5546
  146, 146, 123, 
  // 5549
  97, 107, 
  // 5551
  88, 88, 133, 
  // 5554
  93, 93, 113, 
  // 5557
  98, 100, 103, 
  // 5560
  103, 105, 103, 
  // 5563
  108, 110, 113, 
  // 5566
  113, 115, 113, 
  // 5569
  118, 120, 123, 
  // 5572
  123, 125, 123, 
  // 5575
  128, 130, 133, 
  // 5578
  133, 135, 133, 
  // 5581
  146, 225, 123, 
  // 5584
  88, 90, 133, 
  // 5587
  93, 95, 113, 
  // 5590
  98, 101, 103, 
  // 5593
  103, 106, 103, 
  // 5596
  108, 111, 113, 
  // 5599
  113, 116, 113, 
  // 5602
  118, 121, 123, 
  // 5605
  123, 126, 123, 
  // 5608
  128, 131, 133, 
  // 5611
  133, 136, 133, 
  // 5614
  146, 226, 123, 
  // 5617
  88, 91, 133, 
  // 5620
  93, 96, 113, 
  // 5623
  98, 102, 103, 
  // 5626
  103, 107, 103, 
  // 5629
  108, 112, 113, 
  // 5632
  113, 117, 113, 
  // 5635
  118, 122, 123, 
  // 5638
  123, 127, 123, 
  // 5641
  128, 132, 133, 
  // 5644
  133, 137, 133, 
  // 5647
  146, 260, 123, 
  // 5650
  88, 92, 133, 
  // 5653
  93, 97, 113, 
  // 5656
  100, 98, 105, 
  // 5659
  105, 103, 105, 
  // 5662
  110, 108, 115, 
  // 5665
  115, 113, 115, 
  // 5668
  120, 118, 125, 
  // 5671
  125, 123, 125, 
  // 5674
  130, 128, 135, 
  // 5677
  135, 133, 135, 
  // 5680
  225, 146, 125, 
  // 5683
  90, 88, 135, 
  // 5686
  95, 93, 115, 
  // 5689
  100, 100, 105, 
  // 5692
  105, 105, 105, 
  // 5695
  110, 110, 115, 
  // 5698
  115, 115, 115, 
  // 5701
  120, 120, 125, 
  // 5704
  125, 125, 125, 
  // 5707
  130, 130, 135, 
  // 5710
  135, 135, 135, 
  // 5713
  225, 225, 125, 
  // 5716
  90, 90, 135, 
  // 5719
  95, 95, 115, 
  // 5722
  100, 101, 105, 
  // 5725
  105, 106, 105, 
  // 5728
  110, 111, 115, 
  // 5731
  115, 116, 115, 
  // 5734
  120, 121, 125, 
  // 5737
  125, 126, 125, 
  // 5740
  130, 131, 135, 
  // 5743
  135, 136, 135, 
  // 5746
  225, 226, 125, 
  // 5749
  90, 91, 135, 
  // 5752
  95, 96, 115, 
  // 5755
  100, 102, 105, 
  // 5758
  105, 107, 105, 
  // 5761
  110, 112, 115, 
  // 5764
  115, 117, 115, 
  // 5767
  120, 122, 125, 
  // 5770
  125, 127, 125, 
  // 5773
  130, 132, 135, 
  // 5776
  135, 137, 135, 
  // 5779
  225, 260, 125, 
  // 5782
  90, 92, 135, 
  // 5785
  95, 97, 115, 
  // 5788
  101, 98, 106, 
  // 5791
  106, 103, 106, 
  // 5794
  111, 108, 116, 
  // 5797
  116, 113, 116, 
  // 5800
  121, 118, 126, 
  // 5803
  126, 123, 126, 
  // 5806
  131, 128, 136, 
  // 5809
  136, 133, 136, 
  // 5812
  226, 146, 126, 
  // 5815
  91, 88, 136, 
  // 5818
  96, 93, 116, 
  // 5821
  101, 100, 106, 
  // 5824
  106, 105, 106, 
  // 5827
  111, 110, 116, 
  // 5830
  116, 115, 116, 
  // 5833
  121, 120, 126, 
  // 5836
  126, 125, 126, 
  // 5839
  131, 130, 136, 
  // 5842
  136, 135, 136, 
  // 5845
  226, 225, 126, 
  // 5848
  91, 90, 136, 
  // 5851
  96, 95, 116, 
  // 5854
  101, 101, 106, 
  // 5857
  106, 106, 106, 
  // 5860
  111, 111, 116, 
  // 5863
  116, 116, 116, 
  // 5866
  121, 121, 126, 
  // 5869
  126, 126, 126, 
  // 5872
  131, 131, 136, 
  // 5875
  136, 136, 136, 
  // 5878
  226, 226, 126, 
  // 5881
  91, 91, 136, 
  // 5884
  96, 96, 116, 
  // 5887
  101, 102, 106, 
  // 5890
  106, 107, 106, 
  // 5893
  111, 112, 116, 
  // 5896
  116, 117, 116, 
  // 5899
  121, 122, 126, 
  // 5902
  126, 127, 126, 
  // 5905
  131, 132, 136, 
  // 5908
  136, 137, 136, 
  // 5911
  226, 260, 126, 
  // 5914
  91, 92, 136, 
  // 5917
  96, 97, 116, 
  // 5920
  102, 98, 107, 
  // 5923
  107, 103, 107, 
  // 5926
  112, 108, 117, 
  // 5929
  117, 113, 117, 
  // 5932
  122, 118, 127, 
  // 5935
  127, 123, 127, 
  // 5938
  132, 128, 137, 
  // 5941
  137, 133, 137, 
  // 5944
  260, 146, 127, 
  // 5947
  92, 88, 137, 
  // 5950
  97, 93, 117, 
  // 5953
  102, 100, 107, 
  // 5956
  107, 105, 107, 
  // 5959
  112, 110, 117, 
  // 5962
  117, 115, 117, 
  // 5965
  122, 120, 127, 
  // 5968
  127, 125, 127, 
  // 5971
  132, 130, 137, 
  // 5974
  137, 135, 137, 
  // 5977
  260, 225, 127, 
  // 5980
  92, 90, 137, 
  // 5983
  97, 95, 117, 
  // 5986
  102, 101, 107, 
  // 5989
  107, 106, 107, 
  // 5992
  112, 111, 117, 
  // 5995
  117, 116, 117, 
  // 5998
  122, 121, 127, 
  // 6001
  127, 126, 127, 
  // 6004
  132, 131, 137, 
  // 6007
  137, 136, 137, 
  // 6010
  260, 226, 127, 
  // 6013
  92, 91, 137, 
  // 6016
  97, 96, 117, 
  // 6019
  102, 102, 107, 
  // 6022
  107, 107, 107, 
  // 6025
  112, 112, 117, 
  // 6028
  117, 117, 117, 
  // 6031
  122, 122, 127, 
  // 6034
  127, 127, 127, 
  // 6037
  132, 132, 137, 
  // 6040
  137, 137, 137, 
  // 6043
  260, 260, 127, 
  // 6046
  92, 92, 137, 
  // 6049
  97, 97, 117, 
  // 6052
  98, 98, 98, 103, 
  // 6056
  103, 103, 103, 103, 
  // 6060
  108, 108, 108, 113, 
  // 6064
  113, 113, 113, 113, 
  // 6068
  118, 118, 118, 123, 
  // 6072
  123, 123, 123, 123, 
  // 6076
  128, 128, 128, 133, 
  // 6080
  133, 133, 133, 133, 
  // 6084
  146, 146, 146, 123, 
  // 6088
  88, 88, 88, 133, 
  // 6092
  93, 93, 93, 113, 
  // 6096
  98, 100, 100, 103, 
  // 6100
  103, 105, 105, 103, 
  // 6104
  108, 110, 110, 113, 
  // 6108
  113, 115, 115, 113, 
  // 6112
  118, 120, 120, 123, 
  // 6116
  123, 125, 125, 123, 
  // 6120
  128, 130, 130, 133, 
  // 6124
  133, 135, 135, 133, 
  // 6128
  146, 225, 225, 123, 
  // 6132
  88, 90, 90, 133, 
  // 6136
  93, 95, 95, 113, 
  // 6140
  98, 101, 101, 103, 
  // 6144
  103, 106, 106, 103, 
  // 6148
  108, 111, 111, 113, 
  // 6152
  113, 116, 116, 113, 
  // 6156
  118, 121, 121, 123, 
  // 6160
  123, 126, 126, 123, 
  // 6164
  128, 131, 131, 133, 
  // 6168
  133, 136, 136, 133, 
  // 6172
  146, 226, 226, 123, 
  // 6176
  88, 91, 91, 133, 
  // 6180
  93, 96, 96, 113, 
  // 6184
  98, 102, 102, 103, 
  // 6188
  103, 107, 107, 103, 
  // 6192
  108, 112, 112, 113, 
  // 6196
  113, 117, 117, 113, 
  // 6200
  118, 122, 122, 123, 
  // 6204
  123, 127, 127, 123, 
  // 6208
  128, 132, 132, 133, 
  // 6212
  133, 137, 137, 133, 
  // 6216
  146, 260, 260, 123, 
  // 6220
  88, 92, 92, 133, 
  // 6224
  93, 97, 97, 113, 
  // 6228
  100, 98, 98, 105, 
  // 6232
  105, 103, 103, 105, 
  // 6236
  110, 108, 108, 115, 
  // 6240
  115, 113, 113, 115, 
  // 6244
  120, 118, 118, 125, 
  // 6248
  125, 123, 123, 125, 
  // 6252
  130, 128, 128, 135, 
  // 6256
  135, 133, 133, 135, 
  // 6260
  225, 146, 146, 125, 
  // 6264
  90, 88, 88, 135, 
  // 6268
  95, 93, 93, 115, 
  // 6272
  100, 100, 100, 105, 
  // 6276
  105, 105, 105, 105, 
  // 6280
  110, 110, 110, 115, 
  // 6284
  115, 115, 115, 115, 
  // 6288
  120, 120, 120, 125, 
  // 6292
  125, 125, 125, 125, 
  // 6296
  130, 130, 130, 135, 
  // 6300
  135, 135, 135, 135, 
  // 6304
  225, 225, 225, 125, 
  // 6308
  90, 90, 90, 135, 
  // 6312
  95, 95, 95, 115, 
  // 6316
  100, 101, 101, 105, 
  // 6320
  105, 106, 106, 105, 
  // 6324
  110, 111, 111, 115, 
  // 6328
  115, 116, 116, 115, 
  // 6332
  120, 121, 121, 125, 
  // 6336
  125, 126, 126, 125, 
  // 6340
  130, 131, 131, 135, 
  // 6344
  135, 136, 136, 135, 
  // 6348
  225, 226, 226, 125, 
  // 6352
  90, 91, 91, 135, 
  // 6356
  95, 96, 96, 115, 
  // 6360
  100, 102, 102, 105, 
  // 6364
  105, 107, 107, 105, 
  // 6368
  110, 112, 112, 115, 
  // 6372
  115, 117, 117, 115, 
  // 6376
  120, 122, 122, 125, 
  // 6380
  125, 127, 127, 125, 
  // 6384
  53, 79, 
  // 6386
  130, 132, 132, 135, 
  // 6390
  135, 137, 137, 135, 
  // 6394
  225, 260, 260, 125, 
  // 6398
  90, 92, 92, 135, 
  // 6402
  95, 97, 97, 115, 
  // 6406
  101, 98, 98, 106, 
  // 6410
  106, 103, 103, 106, 
  // 6414
  111, 108, 108, 116, 
  // 6418
  116, 113, 113, 116, 
  // 6422
  121, 118, 118, 126, 
  // 6426
  93, 108, 
  // 6428
  126, 123, 123, 126, 
  // 6432
  131, 128, 128, 136, 
  // 6436
  136, 133, 133, 136, 
  // 6440
  226, 146, 146, 126, 
  // 6444
  91, 88, 88, 136, 
  // 6448
  96, 93, 93, 116, 
  // 6452
  101, 100, 100, 106, 
  // 6456
  106, 105, 105, 106, 
  // 6460
  111, 110, 110, 116, 
  // 6464
  116, 115, 115, 116, 
  // 6468
  94, 109, 
  // 6470
  121, 120, 120, 126, 
  // 6474
  126, 125, 125, 126, 
  // 6478
  131, 130, 130, 136, 
  // 6482
  136, 135, 135, 136, 
  // 6486
  226, 225, 225, 126, 
  // 6490
  91, 90, 90, 136, 
  // 6494
  96, 95, 95, 116, 
  // 6498
  101, 101, 101, 106, 
  // 6502
  106, 106, 106, 106, 
  // 6506
  111, 111, 111, 116, 
  // 6510
  95, 110, 
  // 6512
  116, 116, 116, 116, 
  // 6516
  121, 121, 121, 126, 
  // 6520
  126, 126, 126, 126, 
  // 6524
  131, 131, 131, 136, 
  // 6528
  136, 136, 136, 136, 
  // 6532
  226, 226, 226, 126, 
  // 6536
  91, 91, 91, 136, 
  // 6540
  96, 96, 96, 116, 
  // 6544
  101, 102, 102, 106, 
  // 6548
  106, 107, 107, 106, 
  // 6552
  96, 111, 
  // 6554
  111, 112, 112, 116, 
  // 6558
  116, 117, 117, 116, 
  // 6562
  121, 122, 122, 126, 
  // 6566
  126, 127, 127, 126, 
  // 6570
  131, 132, 132, 136, 
  // 6574
  136, 137, 137, 136, 
  // 6578
  226, 260, 260, 126, 
  // 6582
  91, 92, 92, 136, 
  // 6586
  96, 97, 97, 116, 
  // 6590
  102, 98, 98, 107, 
  // 6594
  97, 112, 
  // 6596
  107, 103, 103, 107, 
  // 6600
  112, 108, 108, 117, 
  // 6604
  117, 113, 113, 117, 
  // 6608
  122, 118, 118, 127, 
  // 6612
  127, 123, 123, 127, 
  // 6616
  132, 128, 128, 137, 
  // 6620
  137, 133, 133, 137, 
  // 6624
  260, 146, 146, 127, 
  // 6628
  92, 88, 88, 137, 
  // 6632
  97, 93, 93, 117, 
  // 6636
  102, 100, 100, 107, 
  // 6640
  107, 105, 105, 107, 
  // 6644
  112, 110, 110, 117, 
  // 6648
  117, 115, 115, 117, 
  // 6652
  122, 120, 120, 127, 
  // 6656
  127, 125, 125, 127, 
  // 6660
  132, 130, 130, 137, 
  // 6664
  137, 135, 135, 137, 
  // 6668
  260, 225, 225, 127, 
  // 6672
  92, 90, 90, 137, 
  // 6676
  97, 95, 95, 117, 
  // 6680
  102, 101, 101, 107, 
  // 6684
  107, 106, 106, 107, 
  // 6688
  112, 111, 111, 117, 
  // 6692
  117, 116, 116, 117, 
  // 6696
  122, 121, 121, 127, 
  // 6700
  127, 126, 126, 127, 
  // 6704
  132, 131, 131, 137, 
  // 6708
  137, 136, 136, 137, 
  // 6712
  260, 226, 226, 127, 
  // 6716
  92, 91, 91, 137, 
  // 6720
  97, 96, 96, 117, 
  // 6724
  102, 102, 102, 107, 
  // 6728
  107, 107, 107, 107, 
  // 6732
  112, 112, 112, 117, 
  // 6736
  117, 117, 117, 117, 
  // 6740
  122, 122, 122, 127, 
  // 6744
  127, 127, 127, 127, 
  // 6748
  132, 132, 132, 137, 
  // 6752
  137, 137, 137, 137, 
  // 6756
  260, 260, 260, 127, 
  // 6760
  92, 92, 92, 137, 
  // 6764
  97, 97, 97, 117, 
  // 6768
  225, 323, 78, 66, 
  // 6772
  120, 323, 78, 66, 
  // 6776
  125, 323, 78, 66, 
  // 6780
  225, 323, 78, 27, 
  // 6784
  120, 323, 78, 27, 
  // 6788
  125, 323, 78, 27, 
  // 6792
  225, 324, 78, 118, 
  // 6796
  120, 324, 78, 118, 
  // 6800
  125, 324, 78, 118, 
  // 6804
  225, 324, 78, 146, 
  // 6808
  120, 324, 78, 146, 
  // 6812
  125, 324, 78, 146, 
  // 6816
  225, 325, 78, 118, 
  // 6820
  120, 325, 78, 118, 
  // 6824
  125, 325, 78, 118, 
  // 6828
  225, 325, 78, 146, 
  // 6832
  120, 325, 78, 146, 
  // 6836
  125, 325, 78, 146, 
  // 6840
  225, 326, 78, 120, 
  // 6844
  120, 326, 78, 120, 
  // 6848
  125, 326, 78, 120, 
  // 6852
  225, 326, 78, 225, 
  // 6856
  120, 326, 78, 225, 
  // 6860
  125, 326, 78, 225, 
  // 6864
  225, 327, 78, 120, 
  // 6868
  120, 327, 78, 120, 
  // 6872
  125, 327, 78, 120, 
  // 6876
  225, 327, 78, 225, 
  // 6880
  120, 327, 78, 225, 
  // 6884
  125, 327, 78, 225, 
  // 6888
  27, 328, 78, 118, 
  // 6892
  27, 329, 78, 120, 
  // 6896
  27, 328, 78, 146, 
  // 6900
  27, 329, 78, 225, 
  // 6904
  225, 324, 118, 
  // 6907
  120, 324, 118, 
  // 6910
  125, 324, 118, 
  // 6913
  225, 326, 120, 
  // 6916
  120, 326, 120, 
  // 6919
  125, 326, 120, 
  // 6922
  225, 323, 66, 
  // 6925
  120, 323, 66, 
  // 6928
  125, 323, 66, 
  // 6931
  27, 328, 118, 
  // 6934
  27, 329, 120, 
  // 6937
  225, 325, 118, 
  // 6940
  120, 325, 118, 
  // 6943
  125, 325, 118, 
  // 6946
  225, 327, 120, 
  // 6949
  120, 327, 120, 
  // 6952
  125, 327, 120, 
  // 6955
  225, 330, 66, 
  // 6958
  120, 330, 66, 
  // 6961
  125, 330, 66, 
  // 6964
  225, 331, 118, 
  // 6967
  120, 331, 118, 
  // 6970
  125, 331, 118, 
  // 6973
  225, 332, 118, 
  // 6976
  120, 332, 118, 
  // 6979
  125, 332, 118, 
  // 6982
  225, 333, 120, 
  // 6985
  120, 333, 120, 
  // 6988
  125, 333, 120, 
  // 6991
  225, 334, 120, 
  // 6994
  120, 334, 120, 
  // 6997
  125, 334, 120, 
  // 7000
  225, 335, 66, 
  // 7003
  120, 335, 66, 
  // 7006
  125, 335, 66, 
  // 7009
  225, 336, 66, 
  // 7012
  120, 336, 66, 
  // 7015
  125, 336, 66, 
  // 7018
  27, 337, 118, 
  // 7021
  27, 338, 120, 
  // 7024
  87, 339, 118, 225, 
  // 7028
  87, 339, 118, 120, 
  // 7032
  87, 339, 118, 125, 
  // 7036
  87, 340, 120, 225, 
  // 7040
  87, 340, 120, 120, 
  // 7044
  87, 340, 120, 125, 
  // 7048
  87, 341, 66, 225, 
  // 7052
  87, 341, 66, 120, 
  // 7056
  87, 341, 66, 125, 
  // 7060
  87, 343, 118, 225, 
  // 7064
  87, 343, 118, 120, 
  // 7068
  87, 343, 118, 125, 
  // 7072
  87, 344, 120, 225, 
  // 7076
  87, 344, 120, 120, 
  // 7080
  87, 344, 120, 125, 
  // 7084
  87, 345, 118, 27, 
  // 7088
  87, 346, 120, 27, 
  // 7092
  87, 342, 66, 225, 
  // 7096
  87, 342, 66, 120, 
  // 7100
  87, 342, 66, 125, 
  // 7104
  87, 331, 118, 225, 
  // 7108
  87, 331, 118, 120, 
  // 7112
  87, 331, 118, 125, 
  // 7116
  87, 334, 120, 225, 
  // 7120
  87, 334, 120, 120, 
  // 7124
  87, 334, 120, 125, 
  // 7128
  87, 335, 66, 225, 
  // 7132
  87, 335, 66, 120, 
  // 7136
  87, 335, 66, 125, 
  // 7140
  87, 336, 66, 225, 
  // 7144
  87, 336, 66, 120, 
  // 7148
  87, 336, 66, 125, 
  // 7152
  87, 332, 118, 225, 
  // 7156
  87, 332, 118, 120, 
  // 7160
  87, 332, 118, 125, 
  // 7164
  87, 333, 120, 225, 
  // 7168
  87, 333, 120, 120, 
  // 7172
  87, 333, 120, 125, 
  // 7176
  87, 337, 118, 27, 
  // 7180
  87, 338, 120, 27, 
  // 7184
  66, 323, 
  // 7186
  66, 324, 
  // 7188
  66, 326, 
  // 7190
  118, 324, 
  // 7192
  120, 326, 
  // 7194
  80, 325, 
  // 7196
  66, 330, 
  // 7198
  66, 325, 
  // 7200
  66, 327, 
  // 7202
  66, 328, 
  // 7204
  66, 329, 
  // 7206
  118, 327, 
  // 7208
  118, 328, 
  // 7210
  118, 329, 
  // 7212
  80, 327, 
  // 7214
  80, 329, 
  // 7216
  66, 341, 
  // 7218
  53, 86, 
  // 7220
  66, 342, 
  // 7222
  66, 339, 
  // 7224
  66, 344, 
  // 7226
  93, 113, 
  // 7228
  66, 343, 
  // 7230
  66, 340, 
  // 7232
  66, 345, 
  // 7234
  94, 114, 
  // 7236
  66, 346, 
  // 7238
  118, 339, 
  // 7240
  95, 115, 
  // 7242
  118, 340, 
  // 7244
  118, 345, 
  // 7246
  118, 346, 
  // 7248
  120, 344, 
  // 7250
  80, 343, 
  // 7252
  80, 340, 
  // 7254
  80, 346, 
  // 7256
  66, 335, 
  // 7258
  96, 116, 
  // 7260
  66, 336, 
  // 7262
  66, 331, 
  // 7264
  66, 333, 
  // 7266
  97, 117, 
  // 7268
  66, 332, 
  // 7270
  66, 334, 
  // 7272
  66, 337, 
  // 7274
  66, 338, 
  // 7276
  118, 331, 
  // 7278
  118, 334, 
  // 7280
  118, 337, 
  // 7282
  118, 338, 
  // 7284
  120, 333, 
  // 7286
  80, 332, 
  // 7288
  80, 334, 
  // 7290
  80, 338, 
  // 7292
  95, 324, 78, 118, 
  // 7296
  95, 326, 78, 120, 
  // 7300
  95, 323, 78, 66, 
  // 7304
  95, 325, 78, 118, 
  // 7308
  95, 327, 78, 120, 
  // 7312
  95, 324, 78, 146, 
  // 7316
  95, 325, 78, 146, 
  // 7320
  95, 326, 78, 225, 
  // 7324
  95, 327, 78, 225, 
  // 7328
  95, 323, 78, 27, 
  // 7332
  95, 324, 118, 
  // 7335
  95, 326, 120, 
  // 7338
  95, 323, 66, 
  // 7341
  95, 325, 118, 
  // 7344
  95, 327, 120, 
  // 7347
  95, 330, 66, 
  // 7350
  95, 331, 118, 
  // 7353
  95, 332, 118, 
  // 7356
  95, 333, 120, 
  // 7359
  95, 334, 120, 
  // 7362
  95, 335, 66, 
  // 7365
  95, 336, 66, 
  // 7368
  87, 339, 118, 95, 
  // 7372
  87, 340, 120, 95, 
  // 7376
  87, 341, 66, 95, 
  // 7380
  87, 342, 66, 95, 
  // 7384
  87, 343, 118, 95, 
  // 7388
  87, 344, 120, 95, 
  // 7392
  87, 331, 118, 95, 
  // 7396
  87, 334, 120, 95, 
  // 7400
  87, 335, 66, 95, 
  // 7404
  87, 336, 66, 95, 
  // 7408
  87, 332, 118, 95, 
  // 7412
  87, 333, 120, 95, 
  // 7416
  67, 67, 80, 
  // 7419
  67, 67, 80, 80, 
  // 7423
  67, 67, 80, 80, 80, 
  // 7428
  67, 67, 
  // 7430
  19, 76, 
  // 7432
  66, 75, 83, 348, 349, 
  // 7437
  87, 22, 
  // 7439
  22, 
  // 7440
  19, 22, 
  // 7442
  87, 22, 66, 
  // 7445
  87, 22, 23, 350, 
  // 7449
  75, 
  // 7450
  73, 80, 
  // 7452
  73, 80, 80, 
  // 7455
  73, 80, 80, 80, 
  // 7459
  73, 352, 
  // 7461
  73, 352, 352, 
  // 7464
  73, 352, 352, 352, 
  // 7468
  225, 324, 78, 146, 27, 
  // 7473
  225, 324, 78, 146, 146, 146, 
  // 7479
  120, 324, 78, 146, 27, 
  // 7484
  120, 324, 78, 146, 146, 146, 
  // 7490
  125, 324, 78, 146, 27, 
  // 7495
  125, 324, 78, 146, 146, 146, 
  // 7501
  27, 328, 78, 146, 27, 
  // 7506
  27, 328, 78, 146, 146, 146, 
  // 7512
  225, 323, 78, 27, 27, 
  // 7517
  225, 323, 78, 27, 27, 27, 
  // 7523
  120, 323, 78, 27, 27, 
  // 7528
  120, 323, 78, 27, 27, 27, 
  // 7534
  125, 323, 78, 27, 27, 
  // 7539
  125, 323, 78, 27, 27, 27, 
  // 7545
  225, 326, 78, 225, 225, 225, 
  // 7551
  225, 326, 78, 225, 27, 
  // 7556
  120, 326, 78, 225, 225, 225, 
  // 7562
  120, 326, 78, 225, 27, 
  // 7567
  125, 326, 78, 225, 225, 225, 
  // 7573
  125, 326, 78, 225, 27, 
  // 7578
  225, 325, 78, 146, 27, 
  // 7583
  225, 325, 78, 146, 27, 27, 
  // 7589
  120, 325, 78, 146, 27, 
  // 7594
  120, 325, 78, 146, 27, 27, 
  // 7600
  125, 325, 78, 146, 27, 
  // 7605
  125, 325, 78, 146, 27, 27, 
  // 7611
  225, 327, 78, 225, 27, 
  // 7616
  225, 327, 78, 225, 146, 146, 
  // 7622
  120, 327, 78, 225, 27, 
  // 7627
  120, 327, 78, 225, 146, 146, 
  // 7633
  125, 327, 78, 225, 27, 
  // 7638
  125, 327, 78, 225, 146, 146, 
  // 7644
  27, 329, 78, 225, 27, 
  // 7649
  27, 329, 78, 225, 146, 146, 
  // 7655
  87, 339, 118, 66, 225, 
  // 7660
  87, 339, 118, 66, 120, 
  // 7665
  87, 339, 118, 66, 125, 
  // 7670
  87, 345, 118, 66, 27, 
  // 7675
  87, 341, 66, 66, 225, 
  // 7680
  87, 341, 66, 66, 120, 
  // 7685
  87, 341, 66, 66, 125, 
  // 7690
  87, 343, 118, 66, 225, 
  // 7695
  87, 343, 118, 66, 120, 
  // 7700
  87, 343, 118, 66, 125, 
  // 7705
  87, 340, 120, 66, 225, 
  // 7710
  87, 340, 120, 66, 120, 
  // 7715
  87, 340, 120, 66, 125, 
  // 7720
  87, 346, 120, 66, 27, 
  // 7725
  87, 344, 120, 66, 225, 
  // 7730
  87, 344, 120, 66, 120, 
  // 7735
  87, 344, 120, 66, 125, 
  // 7740
  225, 353, 118, 66, 
  // 7744
  120, 353, 118, 66, 
  // 7748
  125, 353, 118, 66, 
  // 7752
  225, 354, 120, 66, 
  // 7756
  120, 354, 120, 66, 
  // 7760
  125, 354, 120, 66, 
  // 7764
  27, 355, 118, 66, 
  // 7768
  27, 356, 120, 66, 
  // 7772
  66, 353, 
  // 7774
  118, 353, 
  // 7776
  80, 354, 
  // 7778
  66, 354, 
  // 7780
  118, 354, 
  // 7782
  66, 355, 
  // 7784
  118, 355, 
  // 7786
  66, 356, 
  // 7788
  118, 356, 
  // 7790
  80, 356, 
  // 7792
  66, 357, 
  // 7794
  118, 357, 
  // 7796
  66, 358, 
  // 7798
  118, 358, 
  // 7800
  66, 359, 
  // 7802
  118, 359, 
  // 7804
  66, 360, 
  // 7806
  118, 360, 
  // 7808
  80, 358, 
  // 7810
  80, 360, 
  // 7812
  225, 361, 118, 66, 
  // 7816
  120, 361, 118, 66, 
  // 7820
  125, 361, 118, 66, 
  // 7824
  225, 362, 120, 66, 
  // 7828
  120, 362, 120, 66, 
  // 7832
  125, 362, 120, 66, 
  // 7836
  27, 363, 118, 66, 
  // 7840
  27, 364, 120, 66, 
  // 7844
  66, 361, 
  // 7846
  118, 361, 
  // 7848
  66, 362, 
  // 7850
  118, 362, 
  // 7852
  66, 363, 
  // 7854
  118, 363, 
  // 7856
  66, 364, 
  // 7858
  118, 364, 
  // 7860
  80, 362, 
  // 7862
  80, 364, 
  // 7864
  67, 67, 83, 
  // 7867
  21, 21, 83, 
  // 7870
  2, 2, 83, 
  // 7873
  21, 21, 
  // 7875
  66, 
  // 7876
  66, 0, 
  // 7878
  1, 1, 83, 
  // 7881
  125, 66, 
  // 7883
  66, 125, 
  // 7885
  66, 125, 83, 
  // 7888
  83, 125, 
  // 7890
  125, 
};

static const OpenCLBuiltinStruct BuiltinTable[] = {
  // 1: convert_half16_rte, convert_half16_rtn, convert_half16_rtp, convert_half16_rtz, convert_half16, 
  { 0, 2, 0, 1, 0, 46, 31 },
  { 112, 2, 0, 1, 0, 46, 31 },
  { 128, 2, 0, 1, 0, 46, 31 },
  { 142, 2, 0, 1, 0, 46, 31 },
  { 3811, 2, 0, 1, 0, 46, 31 },
  { 4210, 2, 0, 1, 0, 46, 31 },
  { 4799, 2, 0, 1, 0, 46, 31 },
  { 5357, 2, 0, 1, 0, 46, 31 },
  { 5549, 2, 0, 1, 0, 46, 31 },
  { 6594, 2, 0, 1, 0, 46, 31 },
  { 7266, 2, 0, 1, 0, 46, 31 },
  // 12: sub_group_non_uniform_scan_exclusive_add, sub_group_non_uniform_scan_exclusive_min, sub_group_non_uniform_scan_exclusive_max, sub_group_non_uniform_scan_exclusive_mul, sub_group_non_uniform_scan_inclusive_add, sub_group_non_uniform_scan_inclusive_min, sub_group_non_uniform_scan_inclusive_max, sub_group_non_uniform_scan_inclusive_mul, sub_group_non_uniform_reduce_add, sub_group_non_uniform_reduce_min, sub_group_non_uniform_reduce_max, sub_group_non_uniform_reduce_mul, 
  { 2, 2, 0, 0, 0, 41, 31 },
  // 13: sub_group_non_uniform_scan_exclusive_and, sub_group_non_uniform_scan_exclusive_or, sub_group_non_uniform_scan_exclusive_xor, sub_group_non_uniform_scan_inclusive_and, sub_group_non_uniform_scan_inclusive_or, sub_group_non_uniform_scan_inclusive_xor, sub_group_non_uniform_reduce_and, sub_group_non_uniform_reduce_or, sub_group_non_uniform_reduce_xor, 
  { 4, 2, 0, 0, 0, 41, 31 },
  // 14: sub_group_non_uniform_scan_exclusive_logical_and, sub_group_non_uniform_scan_exclusive_logical_or, sub_group_non_uniform_scan_exclusive_logical_xor, sub_group_non_uniform_scan_inclusive_logical_and, sub_group_non_uniform_scan_inclusive_logical_or, sub_group_non_uniform_scan_inclusive_logical_xor, sub_group_non_uniform_reduce_logical_and, sub_group_non_uniform_reduce_logical_or, sub_group_non_uniform_reduce_logical_xor, 
  { 6, 2, 0, 0, 0, 41, 31 },
  // 15: convert_half_rtn, convert_half_rtp, convert_half_rtz, convert_half, convert_half_rte, 
  { 8, 2, 0, 1, 0, 46, 31 },
  { 102, 2, 0, 1, 0, 46, 31 },
  { 116, 2, 0, 1, 0, 46, 31 },
  { 132, 2, 0, 1, 0, 46, 31 },
  { 3776, 2, 0, 1, 0, 46, 31 },
  { 4046, 2, 0, 1, 0, 46, 31 },
  { 4688, 2, 0, 1, 0, 46, 31 },
  { 5311, 2, 0, 1, 0, 46, 31 },
  { 5512, 2, 0, 1, 0, 46, 31 },
  { 6384, 2, 0, 1, 0, 46, 31 },
  { 7218, 2, 0, 1, 0, 46, 31 },
  // 26: convert_half2_rtn, convert_half2_rtp, convert_half2_rtz, convert_half2, convert_half2_rte, 
  { 10, 2, 0, 1, 0, 46, 31 },
  { 104, 2, 0, 1, 0, 46, 31 },
  { 120, 2, 0, 1, 0, 46, 31 },
  { 134, 2, 0, 1, 0, 46, 31 },
  { 3778, 2, 0, 1, 0, 46, 31 },
  { 4082, 2, 0, 1, 0, 46, 31 },
  { 4707, 2, 0, 1, 0, 46, 31 },
  { 5337, 2, 0, 1, 0, 46, 31 },
  { 5514, 2, 0, 1, 0, 46, 31 },
  { 6426, 2, 0, 1, 0, 46, 31 },
  { 7226, 2, 0, 1, 0, 46, 31 },
  // 37: sub_group_shuffle, sub_group_shuffle_xor, 
  { 12, 3, 0, 0, 0, 43, 31 },
  // 38: sub_group_shuffle_up, sub_group_shuffle_down, 
  { 12, 3, 0, 0, 0, 44, 31 },
  // 39: sub_group_clustered_reduce_add, sub_group_clustered_reduce_min, sub_group_clustered_reduce_max, sub_group_clustered_reduce_mul, 
  { 12, 3, 0, 0, 0, 39, 31 },
  // 40: sub_group_clustered_reduce_and, sub_group_clustered_reduce_or, sub_group_clustered_reduce_xor, 
  { 15, 3, 0, 0, 0, 39, 31 },
  // 41: convert_half3_rtn, convert_half3_rtp, convert_half3_rtz, convert_half3, convert_half3_rte, 
  { 18, 2, 0, 1, 0, 46, 31 },
  { 106, 2, 0, 1, 0, 46, 31 },
  { 122, 2, 0, 1, 0, 46, 31 },
  { 136, 2, 0, 1, 0, 46, 31 },
  { 3780, 2, 0, 1, 0, 46, 31 },
  { 4111, 2, 0, 1, 0, 46, 31 },
  { 4733, 2, 0, 1, 0, 46, 31 },
  { 5339, 2, 0, 1, 0, 46, 31 },
  { 5516, 2, 0, 1, 0, 46, 31 },
  { 6468, 2, 0, 1, 0, 46, 31 },
  { 7234, 2, 0, 1, 0, 46, 31 },
  // 52: sub_group_clustered_reduce_logical_and, sub_group_clustered_reduce_logical_or, sub_group_clustered_reduce_logical_xor, 
  { 20, 3, 0, 0, 0, 39, 31 },
  // 53: bitfield_insert, 
  { 23, 5, 0, 1, 0, 25, 31 },
  // 54: bitfield_extract_signed, 
  { 28, 4, 0, 1, 0, 25, 31 },
  { 32, 4, 0, 1, 0, 25, 31 },
  // 56: bitfield_extract_unsigned, 
  { 36, 4, 0, 1, 0, 25, 31 },
  { 40, 4, 0, 1, 0, 25, 31 },
  // 58: bit_reverse, 
  { 44, 2, 0, 1, 0, 25, 31 },
  // 59: convert_half4_rtn, convert_half4_rtp, convert_half4_rtz, convert_half4, convert_half4_rte, 
  { 46, 2, 0, 1, 0, 46, 31 },
  { 108, 2, 0, 1, 0, 46, 31 },
  { 124, 2, 0, 1, 0, 46, 31 },
  { 138, 2, 0, 1, 0, 46, 31 },
  { 3782, 2, 0, 1, 0, 46, 31 },
  { 4149, 2, 0, 1, 0, 46, 31 },
  { 4788, 2, 0, 1, 0, 46, 31 },
  { 5341, 2, 0, 1, 0, 46, 31 },
  { 5518, 2, 0, 1, 0, 46, 31 },
  { 6510, 2, 0, 1, 0, 46, 31 },
  { 7240, 2, 0, 1, 0, 46, 31 },
  // 70: dot, 
  { 48, 3, 0, 1, 0, 53, 31 },
  { 51, 3, 0, 1, 0, 53, 31 },
  { 54, 3, 0, 1, 0, 53, 31 },
  { 57, 3, 0, 1, 0, 53, 31 },
  { 1687, 3, 0, 1, 0, 46, 31 },
  { 1690, 3, 0, 1, 0, 46, 31 },
  { 1693, 3, 0, 1, 0, 46, 31 },
  // 77: dot_acc_sat, 
  { 60, 4, 0, 1, 0, 53, 31 },
  { 64, 4, 0, 1, 0, 53, 31 },
  { 68, 4, 0, 1, 0, 53, 31 },
  { 72, 4, 0, 1, 0, 53, 31 },
  // 81: convert_half8_rtn, convert_half8_rtp, convert_half8_rtz, convert_half8, convert_half8_rte, 
  { 76, 2, 0, 1, 0, 46, 31 },
  { 110, 2, 0, 1, 0, 46, 31 },
  { 126, 2, 0, 1, 0, 46, 31 },
  { 140, 2, 0, 1, 0, 46, 31 },
  { 3799, 2, 0, 1, 0, 46, 31 },
  { 4179, 2, 0, 1, 0, 46, 31 },
  { 4797, 2, 0, 1, 0, 46, 31 },
  { 5355, 2, 0, 1, 0, 46, 31 },
  { 5520, 2, 0, 1, 0, 46, 31 },
  { 6552, 2, 0, 1, 0, 46, 31 },
  { 7258, 2, 0, 1, 0, 46, 31 },
  // 92: dot_4x8packed_uu_uint, 
  { 78, 3, 0, 1, 0, 54, 31 },
  // 93: dot_4x8packed_ss_int, dot_4x8packed_us_int, dot_4x8packed_su_int, 
  { 81, 3, 0, 1, 0, 54, 31 },
  // 94: dot_acc_sat_4x8packed_uu_uint, 
  { 84, 4, 0, 1, 0, 54, 31 },
  // 95: dot_acc_sat_4x8packed_ss_int, dot_acc_sat_4x8packed_us_int, dot_acc_sat_4x8packed_su_int, 
  { 88, 4, 0, 1, 0, 54, 31 },
  // 96: arm_dot, 
  { 48, 3, 0, 0, 0, 3, 31 },
  { 51, 3, 0, 0, 0, 3, 31 },
  // 98: arm_dot_acc, 
  { 60, 4, 0, 0, 0, 1, 31 },
  { 64, 4, 0, 0, 0, 1, 31 },
  { 92, 4, 0, 0, 0, 0, 31 },
  { 96, 4, 0, 0, 0, 0, 31 },
  // 102: arm_dot_acc_sat, 
  { 60, 4, 0, 0, 0, 2, 31 },
  { 64, 4, 0, 0, 0, 2, 31 },
  // 104: convert_float2, convert_float2_rte, convert_float2_rtn, convert_float2_rtp, convert_float2_rtz, 
  { 100, 2, 0, 1, 0, 46, 31 },
  { 210, 2, 0, 1, 0, 46, 31 },
  { 284, 2, 0, 1, 0, 46, 31 },
  { 366, 2, 0, 1, 0, 46, 31 },
  { 450, 2, 0, 1, 0, 46, 31 },
  { 534, 2, 0, 1, 0, 46, 31 },
  { 618, 2, 0, 1, 0, 46, 31 },
  { 702, 2, 0, 1, 0, 46, 31 },
  { 776, 2, 0, 1, 0, 46, 31 },
  { 858, 2, 0, 1, 0, 46, 31 },
  { 1475, 2, 0, 1, 0, 46, 31 },
  // 115: convert_float3, convert_float3_rte, convert_float3_rtn, convert_float3_rtp, convert_float3_rtz, 
  { 114, 2, 0, 1, 0, 46, 31 },
  { 212, 2, 0, 1, 0, 46, 31 },
  { 296, 2, 0, 1, 0, 46, 31 },
  { 380, 2, 0, 1, 0, 46, 31 },
  { 454, 2, 0, 1, 0, 46, 31 },
  { 536, 2, 0, 1, 0, 46, 31 },
  { 620, 2, 0, 1, 0, 46, 31 },
  { 704, 2, 0, 1, 0, 46, 31 },
  { 788, 2, 0, 1, 0, 46, 31 },
  { 870, 2, 0, 1, 0, 46, 31 },
  { 1840, 2, 0, 1, 0, 46, 31 },
  // 126: convert_float4, convert_float4_rte, convert_float4_rtn, convert_float4_rtp, convert_float4_rtz, 
  { 118, 2, 0, 1, 0, 46, 31 },
  { 214, 2, 0, 1, 0, 46, 31 },
  { 298, 2, 0, 1, 0, 46, 31 },
  { 382, 2, 0, 1, 0, 46, 31 },
  { 466, 2, 0, 1, 0, 46, 31 },
  { 550, 2, 0, 1, 0, 46, 31 },
  { 624, 2, 0, 1, 0, 46, 31 },
  { 706, 2, 0, 1, 0, 46, 31 },
  { 790, 2, 0, 1, 0, 46, 31 },
  { 872, 2, 0, 1, 0, 46, 31 },
  { 2462, 2, 0, 1, 0, 46, 31 },
  // 137: convert_float8, convert_float8_rte, convert_float8_rtn, convert_float8_rtp, convert_float8_rtz, 
  { 130, 2, 0, 1, 0, 46, 31 },
  { 228, 2, 0, 1, 0, 46, 31 },
  { 302, 2, 0, 1, 0, 46, 31 },
  { 384, 2, 0, 1, 0, 46, 31 },
  { 468, 2, 0, 1, 0, 46, 31 },
  { 552, 2, 0, 1, 0, 46, 31 },
  { 636, 2, 0, 1, 0, 46, 31 },
  { 720, 2, 0, 1, 0, 46, 31 },
  { 794, 2, 0, 1, 0, 46, 31 },
  { 874, 2, 0, 1, 0, 46, 31 },
  { 3086, 2, 0, 1, 0, 46, 31 },
  // 148: convert_float16, convert_float16_rte, convert_float16_rtn, convert_float16_rtp, convert_float16_rtz, 
  { 144, 2, 0, 1, 0, 46, 31 },
  { 230, 2, 0, 1, 0, 46, 31 },
  { 314, 2, 0, 1, 0, 46, 31 },
  { 398, 2, 0, 1, 0, 46, 31 },
  { 472, 2, 0, 1, 0, 46, 31 },
  { 554, 2, 0, 1, 0, 46, 31 },
  { 638, 2, 0, 1, 0, 46, 31 },
  { 722, 2, 0, 1, 0, 46, 31 },
  { 806, 2, 0, 1, 0, 46, 31 },
  { 888, 2, 0, 1, 0, 46, 31 },
  { 3564, 2, 0, 1, 0, 46, 31 },
  // 159: convert_float_rte, convert_float_rtn, convert_float_rtp, convert_float_rtz, convert_float, 
  { 146, 2, 0, 1, 0, 46, 31 },
  { 196, 2, 0, 1, 0, 46, 31 },
  { 280, 2, 0, 1, 0, 46, 31 },
  { 364, 2, 0, 1, 0, 46, 31 },
  { 448, 2, 0, 1, 0, 46, 31 },
  { 532, 2, 0, 1, 0, 46, 31 },
  { 606, 2, 0, 1, 0, 46, 31 },
  { 688, 2, 0, 1, 0, 46, 31 },
  { 772, 2, 0, 1, 0, 46, 31 },
  { 856, 2, 0, 1, 0, 46, 31 },
  { 1398, 2, 0, 1, 0, 46, 31 },
  // 170: convert_char, convert_char_rte, convert_char_rtn, convert_char_rtp, convert_char_rtz, convert_char_sat, convert_char_sat_rte, convert_char_sat_rtn, convert_char_sat_rtp, convert_char_sat_rtz, 
  { 148, 2, 0, 1, 0, 46, 31 },
  { 160, 2, 0, 1, 0, 46, 31 },
  { 172, 2, 0, 1, 0, 46, 31 },
  { 184, 2, 0, 1, 0, 46, 31 },
  { 198, 2, 0, 1, 0, 46, 31 },
  { 216, 2, 0, 1, 0, 46, 31 },
  { 232, 2, 0, 1, 0, 46, 31 },
  { 244, 2, 0, 1, 0, 46, 31 },
  { 256, 2, 0, 1, 0, 46, 31 },
  { 268, 2, 0, 1, 0, 46, 31 },
  { 282, 2, 0, 1, 0, 46, 31 },
  // 181: convert_char2, convert_char2_rte, convert_char2_rtn, convert_char2_rtp, convert_char2_rtz, convert_char2_sat, convert_char2_sat_rte, convert_char2_sat_rtn, convert_char2_sat_rtp, convert_char2_sat_rtz, 
  { 150, 2, 0, 1, 0, 46, 31 },
  { 162, 2, 0, 1, 0, 46, 31 },
  { 174, 2, 0, 1, 0, 46, 31 },
  { 186, 2, 0, 1, 0, 46, 31 },
  { 200, 2, 0, 1, 0, 46, 31 },
  { 218, 2, 0, 1, 0, 46, 31 },
  { 234, 2, 0, 1, 0, 46, 31 },
  { 246, 2, 0, 1, 0, 46, 31 },
  { 258, 2, 0, 1, 0, 46, 31 },
  { 270, 2, 0, 1, 0, 46, 31 },
  { 286, 2, 0, 1, 0, 46, 31 },
  // 192: convert_char3, convert_char3_rte, convert_char3_rtn, convert_char3_rtp, convert_char3_rtz, convert_char3_sat, convert_char3_sat_rte, convert_char3_sat_rtn, convert_char3_sat_rtp, convert_char3_sat_rtz, 
  { 152, 2, 0, 1, 0, 46, 31 },
  { 164, 2, 0, 1, 0, 46, 31 },
  { 176, 2, 0, 1, 0, 46, 31 },
  { 188, 2, 0, 1, 0, 46, 31 },
  { 202, 2, 0, 1, 0, 46, 31 },
  { 220, 2, 0, 1, 0, 46, 31 },
  { 236, 2, 0, 1, 0, 46, 31 },
  { 248, 2, 0, 1, 0, 46, 31 },
  { 260, 2, 0, 1, 0, 46, 31 },
  { 272, 2, 0, 1, 0, 46, 31 },
  { 288, 2, 0, 1, 0, 46, 31 },
  // 203: convert_char4, convert_char4_rte, convert_char4_rtn, convert_char4_rtp, convert_char4_rtz, convert_char4_sat, convert_char4_sat_rte, convert_char4_sat_rtn, convert_char4_sat_rtp, convert_char4_sat_rtz, 
  { 154, 2, 0, 1, 0, 46, 31 },
  { 166, 2, 0, 1, 0, 46, 31 },
  { 178, 2, 0, 1, 0, 46, 31 },
  { 190, 2, 0, 1, 0, 46, 31 },
  { 204, 2, 0, 1, 0, 46, 31 },
  { 222, 2, 0, 1, 0, 46, 31 },
  { 238, 2, 0, 1, 0, 46, 31 },
  { 250, 2, 0, 1, 0, 46, 31 },
  { 262, 2, 0, 1, 0, 46, 31 },
  { 274, 2, 0, 1, 0, 46, 31 },
  { 290, 2, 0, 1, 0, 46, 31 },
  // 214: convert_char8, convert_char8_rte, convert_char8_rtn, convert_char8_rtp, convert_char8_rtz, convert_char8_sat, convert_char8_sat_rte, convert_char8_sat_rtn, convert_char8_sat_rtp, convert_char8_sat_rtz, 
  { 156, 2, 0, 1, 0, 46, 31 },
  { 168, 2, 0, 1, 0, 46, 31 },
  { 180, 2, 0, 1, 0, 46, 31 },
  { 192, 2, 0, 1, 0, 46, 31 },
  { 206, 2, 0, 1, 0, 46, 31 },
  { 224, 2, 0, 1, 0, 46, 31 },
  { 240, 2, 0, 1, 0, 46, 31 },
  { 252, 2, 0, 1, 0, 46, 31 },
  { 264, 2, 0, 1, 0, 46, 31 },
  { 276, 2, 0, 1, 0, 46, 31 },
  { 292, 2, 0, 1, 0, 46, 31 },
  // 225: convert_char16, convert_char16_rte, convert_char16_rtn, convert_char16_rtp, convert_char16_rtz, convert_char16_sat, convert_char16_sat_rte, convert_char16_sat_rtn, convert_char16_sat_rtp, convert_char16_sat_rtz, 
  { 158, 2, 0, 1, 0, 46, 31 },
  { 170, 2, 0, 1, 0, 46, 31 },
  { 182, 2, 0, 1, 0, 46, 31 },
  { 194, 2, 0, 1, 0, 46, 31 },
  { 208, 2, 0, 1, 0, 46, 31 },
  { 226, 2, 0, 1, 0, 46, 31 },
  { 242, 2, 0, 1, 0, 46, 31 },
  { 254, 2, 0, 1, 0, 46, 31 },
  { 266, 2, 0, 1, 0, 46, 31 },
  { 278, 2, 0, 1, 0, 46, 31 },
  { 294, 2, 0, 1, 0, 46, 31 },
  // 236: convert_uchar, convert_uchar_rte, convert_uchar_rtn, convert_uchar_rtp, convert_uchar_rtz, convert_uchar_sat, convert_uchar_sat_rte, convert_uchar_sat_rtn, convert_uchar_sat_rtp, convert_uchar_sat_rtz, 
  { 300, 2, 0, 1, 0, 46, 31 },
  { 316, 2, 0, 1, 0, 46, 31 },
  { 328, 2, 0, 1, 0, 46, 31 },
  { 340, 2, 0, 1, 0, 46, 31 },
  { 352, 2, 0, 1, 0, 46, 31 },
  { 368, 2, 0, 1, 0, 46, 31 },
  { 386, 2, 0, 1, 0, 46, 31 },
  { 400, 2, 0, 1, 0, 46, 31 },
  { 412, 2, 0, 1, 0, 46, 31 },
  { 424, 2, 0, 1, 0, 46, 31 },
  { 436, 2, 0, 1, 0, 46, 31 },
  // 247: convert_uchar2, convert_uchar2_rte, convert_uchar2_rtn, convert_uchar2_rtp, convert_uchar2_rtz, convert_uchar2_sat, convert_uchar2_sat_rte, convert_uchar2_sat_rtn, convert_uchar2_sat_rtp, convert_uchar2_sat_rtz, 
  { 304, 2, 0, 1, 0, 46, 31 },
  { 318, 2, 0, 1, 0, 46, 31 },
  { 330, 2, 0, 1, 0, 46, 31 },
  { 342, 2, 0, 1, 0, 46, 31 },
  { 354, 2, 0, 1, 0, 46, 31 },
  { 370, 2, 0, 1, 0, 46, 31 },
  { 388, 2, 0, 1, 0, 46, 31 },
  { 402, 2, 0, 1, 0, 46, 31 },
  { 414, 2, 0, 1, 0, 46, 31 },
  { 426, 2, 0, 1, 0, 46, 31 },
  { 438, 2, 0, 1, 0, 46, 31 },
  // 258: convert_uchar3, convert_uchar3_rte, convert_uchar3_rtn, convert_uchar3_rtp, convert_uchar3_rtz, convert_uchar3_sat, convert_uchar3_sat_rte, convert_uchar3_sat_rtn, convert_uchar3_sat_rtp, convert_uchar3_sat_rtz, 
  { 306, 2, 0, 1, 0, 46, 31 },
  { 320, 2, 0, 1, 0, 46, 31 },
  { 332, 2, 0, 1, 0, 46, 31 },
  { 344, 2, 0, 1, 0, 46, 31 },
  { 356, 2, 0, 1, 0, 46, 31 },
  { 372, 2, 0, 1, 0, 46, 31 },
  { 390, 2, 0, 1, 0, 46, 31 },
  { 404, 2, 0, 1, 0, 46, 31 },
  { 416, 2, 0, 1, 0, 46, 31 },
  { 428, 2, 0, 1, 0, 46, 31 },
  { 440, 2, 0, 1, 0, 46, 31 },
  // 269: convert_uchar4, convert_uchar4_rte, convert_uchar4_rtn, convert_uchar4_rtp, convert_uchar4_rtz, convert_uchar4_sat, convert_uchar4_sat_rte, convert_uchar4_sat_rtn, convert_uchar4_sat_rtp, convert_uchar4_sat_rtz, 
  { 308, 2, 0, 1, 0, 46, 31 },
  { 322, 2, 0, 1, 0, 46, 31 },
  { 334, 2, 0, 1, 0, 46, 31 },
  { 346, 2, 0, 1, 0, 46, 31 },
  { 358, 2, 0, 1, 0, 46, 31 },
  { 374, 2, 0, 1, 0, 46, 31 },
  { 392, 2, 0, 1, 0, 46, 31 },
  { 406, 2, 0, 1, 0, 46, 31 },
  { 418, 2, 0, 1, 0, 46, 31 },
  { 430, 2, 0, 1, 0, 46, 31 },
  { 442, 2, 0, 1, 0, 46, 31 },
  // 280: convert_uchar8, convert_uchar8_rte, convert_uchar8_rtn, convert_uchar8_rtp, convert_uchar8_rtz, convert_uchar8_sat, convert_uchar8_sat_rte, convert_uchar8_sat_rtn, convert_uchar8_sat_rtp, convert_uchar8_sat_rtz, 
  { 310, 2, 0, 1, 0, 46, 31 },
  { 324, 2, 0, 1, 0, 46, 31 },
  { 336, 2, 0, 1, 0, 46, 31 },
  { 348, 2, 0, 1, 0, 46, 31 },
  { 360, 2, 0, 1, 0, 46, 31 },
  { 376, 2, 0, 1, 0, 46, 31 },
  { 394, 2, 0, 1, 0, 46, 31 },
  { 408, 2, 0, 1, 0, 46, 31 },
  { 420, 2, 0, 1, 0, 46, 31 },
  { 432, 2, 0, 1, 0, 46, 31 },
  { 444, 2, 0, 1, 0, 46, 31 },
  // 291: convert_uchar16, convert_uchar16_rte, convert_uchar16_rtn, convert_uchar16_rtp, convert_uchar16_rtz, convert_uchar16_sat, convert_uchar16_sat_rte, convert_uchar16_sat_rtn, convert_uchar16_sat_rtp, convert_uchar16_sat_rtz, 
  { 312, 2, 0, 1, 0, 46, 31 },
  { 326, 2, 0, 1, 0, 46, 31 },
  { 338, 2, 0, 1, 0, 46, 31 },
  { 350, 2, 0, 1, 0, 46, 31 },
  { 362, 2, 0, 1, 0, 46, 31 },
  { 378, 2, 0, 1, 0, 46, 31 },
  { 396, 2, 0, 1, 0, 46, 31 },
  { 410, 2, 0, 1, 0, 46, 31 },
  { 422, 2, 0, 1, 0, 46, 31 },
  { 434, 2, 0, 1, 0, 46, 31 },
  { 446, 2, 0, 1, 0, 46, 31 },
  // 302: convert_short, convert_short_rte, convert_short_rtn, convert_short_rtp, convert_short_rtz, convert_short_sat, convert_short_sat_rte, convert_short_sat_rtn, convert_short_sat_rtp, convert_short_sat_rtz, 
  { 452, 2, 0, 1, 0, 46, 31 },
  { 470, 2, 0, 1, 0, 46, 31 },
  { 484, 2, 0, 1, 0, 46, 31 },
  { 496, 2, 0, 1, 0, 46, 31 },
  { 508, 2, 0, 1, 0, 46, 31 },
  { 520, 2, 0, 1, 0, 46, 31 },
  { 538, 2, 0, 1, 0, 46, 31 },
  { 556, 2, 0, 1, 0, 46, 31 },
  { 568, 2, 0, 1, 0, 46, 31 },
  { 580, 2, 0, 1, 0, 46, 31 },
  { 592, 2, 0, 1, 0, 46, 31 },
  // 313: convert_short2, convert_short2_rte, convert_short2_rtn, convert_short2_rtp, convert_short2_rtz, convert_short2_sat, convert_short2_sat_rte, convert_short2_sat_rtn, convert_short2_sat_rtp, convert_short2_sat_rtz, 
  { 456, 2, 0, 1, 0, 46, 31 },
  { 474, 2, 0, 1, 0, 46, 31 },
  { 486, 2, 0, 1, 0, 46, 31 },
  { 498, 2, 0, 1, 0, 46, 31 },
  { 510, 2, 0, 1, 0, 46, 31 },
  { 522, 2, 0, 1, 0, 46, 31 },
  { 540, 2, 0, 1, 0, 46, 31 },
  { 558, 2, 0, 1, 0, 46, 31 },
  { 570, 2, 0, 1, 0, 46, 31 },
  { 582, 2, 0, 1, 0, 46, 31 },
  { 594, 2, 0, 1, 0, 46, 31 },
  // 324: convert_short3, convert_short3_rte, convert_short3_rtn, convert_short3_rtp, convert_short3_rtz, convert_short3_sat, convert_short3_sat_rte, convert_short3_sat_rtn, convert_short3_sat_rtp, convert_short3_sat_rtz, 
  { 458, 2, 0, 1, 0, 46, 31 },
  { 476, 2, 0, 1, 0, 46, 31 },
  { 488, 2, 0, 1, 0, 46, 31 },
  { 500, 2, 0, 1, 0, 46, 31 },
  { 512, 2, 0, 1, 0, 46, 31 },
  { 524, 2, 0, 1, 0, 46, 31 },
  { 542, 2, 0, 1, 0, 46, 31 },
  { 560, 2, 0, 1, 0, 46, 31 },
  { 572, 2, 0, 1, 0, 46, 31 },
  { 584, 2, 0, 1, 0, 46, 31 },
  { 596, 2, 0, 1, 0, 46, 31 },
  // 335: convert_short4, convert_short4_rte, convert_short4_rtn, convert_short4_rtp, convert_short4_rtz, convert_short4_sat, convert_short4_sat_rte, convert_short4_sat_rtn, convert_short4_sat_rtp, convert_short4_sat_rtz, 
  { 460, 2, 0, 1, 0, 46, 31 },
  { 478, 2, 0, 1, 0, 46, 31 },
  { 490, 2, 0, 1, 0, 46, 31 },
  { 502, 2, 0, 1, 0, 46, 31 },
  { 514, 2, 0, 1, 0, 46, 31 },
  { 526, 2, 0, 1, 0, 46, 31 },
  { 544, 2, 0, 1, 0, 46, 31 },
  { 562, 2, 0, 1, 0, 46, 31 },
  { 574, 2, 0, 1, 0, 46, 31 },
  { 586, 2, 0, 1, 0, 46, 31 },
  { 598, 2, 0, 1, 0, 46, 31 },
  // 346: convert_short8, convert_short8_rte, convert_short8_rtn, convert_short8_rtp, convert_short8_rtz, convert_short8_sat, convert_short8_sat_rte, convert_short8_sat_rtn, convert_short8_sat_rtp, convert_short8_sat_rtz, 
  { 462, 2, 0, 1, 0, 46, 31 },
  { 480, 2, 0, 1, 0, 46, 31 },
  { 492, 2, 0, 1, 0, 46, 31 },
  { 504, 2, 0, 1, 0, 46, 31 },
  { 516, 2, 0, 1, 0, 46, 31 },
  { 528, 2, 0, 1, 0, 46, 31 },
  { 546, 2, 0, 1, 0, 46, 31 },
  { 564, 2, 0, 1, 0, 46, 31 },
  { 576, 2, 0, 1, 0, 46, 31 },
  { 588, 2, 0, 1, 0, 46, 31 },
  { 600, 2, 0, 1, 0, 46, 31 },
  // 357: convert_short16, convert_short16_rte, convert_short16_rtn, convert_short16_rtp, convert_short16_rtz, convert_short16_sat, convert_short16_sat_rte, convert_short16_sat_rtn, convert_short16_sat_rtp, convert_short16_sat_rtz, 
  { 464, 2, 0, 1, 0, 46, 31 },
  { 482, 2, 0, 1, 0, 46, 31 },
  { 494, 2, 0, 1, 0, 46, 31 },
  { 506, 2, 0, 1, 0, 46, 31 },
  { 518, 2, 0, 1, 0, 46, 31 },
  { 530, 2, 0, 1, 0, 46, 31 },
  { 548, 2, 0, 1, 0, 46, 31 },
  { 566, 2, 0, 1, 0, 46, 31 },
  { 578, 2, 0, 1, 0, 46, 31 },
  { 590, 2, 0, 1, 0, 46, 31 },
  { 602, 2, 0, 1, 0, 46, 31 },
  // 368: convert_ushort, convert_ushort_rte, convert_ushort_rtn, convert_ushort_rtp, convert_ushort_rtz, convert_ushort_sat, convert_ushort_sat_rte, convert_ushort_sat_rtn, convert_ushort_sat_rtp, convert_ushort_sat_rtz, 
  { 604, 2, 0, 1, 0, 46, 31 },
  { 622, 2, 0, 1, 0, 46, 31 },
  { 640, 2, 0, 1, 0, 46, 31 },
  { 652, 2, 0, 1, 0, 46, 31 },
  { 664, 2, 0, 1, 0, 46, 31 },
  { 676, 2, 0, 1, 0, 46, 31 },
  { 690, 2, 0, 1, 0, 46, 31 },
  { 708, 2, 0, 1, 0, 46, 31 },
  { 724, 2, 0, 1, 0, 46, 31 },
  { 736, 2, 0, 1, 0, 46, 31 },
  { 748, 2, 0, 1, 0, 46, 31 },
  // 379: convert_ushort2, convert_ushort2_rte, convert_ushort2_rtn, convert_ushort2_rtp, convert_ushort2_rtz, convert_ushort2_sat, convert_ushort2_sat_rte, convert_ushort2_sat_rtn, convert_ushort2_sat_rtp, convert_ushort2_sat_rtz, 
  { 608, 2, 0, 1, 0, 46, 31 },
  { 626, 2, 0, 1, 0, 46, 31 },
  { 642, 2, 0, 1, 0, 46, 31 },
  { 654, 2, 0, 1, 0, 46, 31 },
  { 666, 2, 0, 1, 0, 46, 31 },
  { 678, 2, 0, 1, 0, 46, 31 },
  { 692, 2, 0, 1, 0, 46, 31 },
  { 710, 2, 0, 1, 0, 46, 31 },
  { 726, 2, 0, 1, 0, 46, 31 },
  { 738, 2, 0, 1, 0, 46, 31 },
  { 750, 2, 0, 1, 0, 46, 31 },
  // 390: convert_ushort3, convert_ushort3_rte, convert_ushort3_rtn, convert_ushort3_rtp, convert_ushort3_rtz, convert_ushort3_sat, convert_ushort3_sat_rte, convert_ushort3_sat_rtn, convert_ushort3_sat_rtp, convert_ushort3_sat_rtz, 
  { 610, 2, 0, 1, 0, 46, 31 },
  { 628, 2, 0, 1, 0, 46, 31 },
  { 644, 2, 0, 1, 0, 46, 31 },
  { 656, 2, 0, 1, 0, 46, 31 },
  { 668, 2, 0, 1, 0, 46, 31 },
  { 680, 2, 0, 1, 0, 46, 31 },
  { 694, 2, 0, 1, 0, 46, 31 },
  { 712, 2, 0, 1, 0, 46, 31 },
  { 728, 2, 0, 1, 0, 46, 31 },
  { 740, 2, 0, 1, 0, 46, 31 },
  { 752, 2, 0, 1, 0, 46, 31 },
  // 401: convert_ushort4, convert_ushort4_rte, convert_ushort4_rtn, convert_ushort4_rtp, convert_ushort4_rtz, convert_ushort4_sat, convert_ushort4_sat_rte, convert_ushort4_sat_rtn, convert_ushort4_sat_rtp, convert_ushort4_sat_rtz, 
  { 612, 2, 0, 1, 0, 46, 31 },
  { 630, 2, 0, 1, 0, 46, 31 },
  { 646, 2, 0, 1, 0, 46, 31 },
  { 658, 2, 0, 1, 0, 46, 31 },
  { 670, 2, 0, 1, 0, 46, 31 },
  { 682, 2, 0, 1, 0, 46, 31 },
  { 696, 2, 0, 1, 0, 46, 31 },
  { 714, 2, 0, 1, 0, 46, 31 },
  { 730, 2, 0, 1, 0, 46, 31 },
  { 742, 2, 0, 1, 0, 46, 31 },
  { 754, 2, 0, 1, 0, 46, 31 },
  // 412: convert_ushort8, convert_ushort8_rte, convert_ushort8_rtn, convert_ushort8_rtp, convert_ushort8_rtz, convert_ushort8_sat, convert_ushort8_sat_rte, convert_ushort8_sat_rtn, convert_ushort8_sat_rtp, convert_ushort8_sat_rtz, 
  { 614, 2, 0, 1, 0, 46, 31 },
  { 632, 2, 0, 1, 0, 46, 31 },
  { 648, 2, 0, 1, 0, 46, 31 },
  { 660, 2, 0, 1, 0, 46, 31 },
  { 672, 2, 0, 1, 0, 46, 31 },
  { 684, 2, 0, 1, 0, 46, 31 },
  { 698, 2, 0, 1, 0, 46, 31 },
  { 716, 2, 0, 1, 0, 46, 31 },
  { 732, 2, 0, 1, 0, 46, 31 },
  { 744, 2, 0, 1, 0, 46, 31 },
  { 756, 2, 0, 1, 0, 46, 31 },
  // 423: convert_ushort16, convert_ushort16_rte, convert_ushort16_rtn, convert_ushort16_rtp, convert_ushort16_rtz, convert_ushort16_sat, convert_ushort16_sat_rte, convert_ushort16_sat_rtn, convert_ushort16_sat_rtp, convert_ushort16_sat_rtz, 
  { 616, 2, 0, 1, 0, 46, 31 },
  { 634, 2, 0, 1, 0, 46, 31 },
  { 650, 2, 0, 1, 0, 46, 31 },
  { 662, 2, 0, 1, 0, 46, 31 },
  { 674, 2, 0, 1, 0, 46, 31 },
  { 686, 2, 0, 1, 0, 46, 31 },
  { 700, 2, 0, 1, 0, 46, 31 },
  { 718, 2, 0, 1, 0, 46, 31 },
  { 734, 2, 0, 1, 0, 46, 31 },
  { 746, 2, 0, 1, 0, 46, 31 },
  { 758, 2, 0, 1, 0, 46, 31 },
  // 434: convert_int, convert_int_rte, convert_int_rtn, convert_int_rtp, convert_int_rtz, convert_int_sat, convert_int_sat_rte, convert_int_sat_rtn, convert_int_sat_rtp, convert_int_sat_rtz, 
  { 760, 2, 0, 1, 0, 46, 31 },
  { 774, 2, 0, 1, 0, 46, 31 },
  { 792, 2, 0, 1, 0, 46, 31 },
  { 808, 2, 0, 1, 0, 46, 31 },
  { 820, 2, 0, 1, 0, 46, 31 },
  { 832, 2, 0, 1, 0, 46, 31 },
  { 844, 2, 0, 1, 0, 46, 31 },
  { 6, 2, 0, 1, 0, 46, 31 },
  { 876, 2, 0, 1, 0, 46, 31 },
  { 890, 2, 0, 1, 0, 46, 31 },
  { 902, 2, 0, 1, 0, 46, 31 },
  // 445: convert_int2, convert_int2_rte, convert_int2_rtn, convert_int2_rtp, convert_int2_rtz, convert_int2_sat, convert_int2_sat_rte, convert_int2_sat_rtn, convert_int2_sat_rtp, convert_int2_sat_rtz, 
  { 762, 2, 0, 1, 0, 46, 31 },
  { 778, 2, 0, 1, 0, 46, 31 },
  { 796, 2, 0, 1, 0, 46, 31 },
  { 810, 2, 0, 1, 0, 46, 31 },
  { 822, 2, 0, 1, 0, 46, 31 },
  { 834, 2, 0, 1, 0, 46, 31 },
  { 846, 2, 0, 1, 0, 46, 31 },
  { 860, 2, 0, 1, 0, 46, 31 },
  { 878, 2, 0, 1, 0, 46, 31 },
  { 892, 2, 0, 1, 0, 46, 31 },
  { 904, 2, 0, 1, 0, 46, 31 },
  // 456: convert_int3, convert_int3_rte, convert_int3_rtn, convert_int3_rtp, convert_int3_rtz, convert_int3_sat, convert_int3_sat_rte, convert_int3_sat_rtn, convert_int3_sat_rtp, convert_int3_sat_rtz, 
  { 764, 2, 0, 1, 0, 46, 31 },
  { 780, 2, 0, 1, 0, 46, 31 },
  { 798, 2, 0, 1, 0, 46, 31 },
  { 812, 2, 0, 1, 0, 46, 31 },
  { 824, 2, 0, 1, 0, 46, 31 },
  { 836, 2, 0, 1, 0, 46, 31 },
  { 848, 2, 0, 1, 0, 46, 31 },
  { 862, 2, 0, 1, 0, 46, 31 },
  { 880, 2, 0, 1, 0, 46, 31 },
  { 894, 2, 0, 1, 0, 46, 31 },
  { 906, 2, 0, 1, 0, 46, 31 },
  // 467: convert_int4, convert_int4_rte, convert_int4_rtn, convert_int4_rtp, convert_int4_rtz, convert_int4_sat, convert_int4_sat_rte, convert_int4_sat_rtn, convert_int4_sat_rtp, convert_int4_sat_rtz, 
  { 766, 2, 0, 1, 0, 46, 31 },
  { 782, 2, 0, 1, 0, 46, 31 },
  { 800, 2, 0, 1, 0, 46, 31 },
  { 814, 2, 0, 1, 0, 46, 31 },
  { 826, 2, 0, 1, 0, 46, 31 },
  { 838, 2, 0, 1, 0, 46, 31 },
  { 850, 2, 0, 1, 0, 46, 31 },
  { 864, 2, 0, 1, 0, 46, 31 },
  { 882, 2, 0, 1, 0, 46, 31 },
  { 896, 2, 0, 1, 0, 46, 31 },
  { 908, 2, 0, 1, 0, 46, 31 },
  // 478: convert_int8, convert_int8_rte, convert_int8_rtn, convert_int8_rtp, convert_int8_rtz, convert_int8_sat, convert_int8_sat_rte, convert_int8_sat_rtn, convert_int8_sat_rtp, convert_int8_sat_rtz, 
  { 768, 2, 0, 1, 0, 46, 31 },
  { 784, 2, 0, 1, 0, 46, 31 },
  { 802, 2, 0, 1, 0, 46, 31 },
  { 816, 2, 0, 1, 0, 46, 31 },
  { 828, 2, 0, 1, 0, 46, 31 },
  { 840, 2, 0, 1, 0, 46, 31 },
  { 852, 2, 0, 1, 0, 46, 31 },
  { 866, 2, 0, 1, 0, 46, 31 },
  { 884, 2, 0, 1, 0, 46, 31 },
  { 898, 2, 0, 1, 0, 46, 31 },
  { 910, 2, 0, 1, 0, 46, 31 },
  // 489: convert_int16, convert_int16_rte, convert_int16_rtn, convert_int16_rtp, convert_int16_rtz, convert_int16_sat, convert_int16_sat_rte, convert_int16_sat_rtn, convert_int16_sat_rtp, convert_int16_sat_rtz, 
  { 770, 2, 0, 1, 0, 46, 31 },
  { 786, 2, 0, 1, 0, 46, 31 },
  { 804, 2, 0, 1, 0, 46, 31 },
  { 818, 2, 0, 1, 0, 46, 31 },
  { 830, 2, 0, 1, 0, 46, 31 },
  { 842, 2, 0, 1, 0, 46, 31 },
  { 854, 2, 0, 1, 0, 46, 31 },
  { 868, 2, 0, 1, 0, 46, 31 },
  { 886, 2, 0, 1, 0, 46, 31 },
  { 900, 2, 0, 1, 0, 46, 31 },
  { 912, 2, 0, 1, 0, 46, 31 },
  // 500: convert_uint, convert_uint_rte, convert_uint_rtn, convert_uint_rtp, convert_uint_rtz, convert_uint_sat, convert_uint_sat_rte, convert_uint_sat_rtn, convert_uint_sat_rtp, convert_uint_sat_rtz, 
  { 914, 2, 0, 1, 0, 46, 31 },
  { 926, 2, 0, 1, 0, 46, 31 },
  { 946, 2, 0, 1, 0, 46, 31 },
  { 962, 2, 0, 1, 0, 46, 31 },
  { 974, 2, 0, 1, 0, 46, 31 },
  { 986, 2, 0, 1, 0, 46, 31 },
  { 998, 2, 0, 1, 0, 46, 31 },
  { 1018, 2, 0, 1, 0, 46, 31 },
  { 1034, 2, 0, 1, 0, 46, 31 },
  { 1046, 2, 0, 1, 0, 46, 31 },
  { 1058, 2, 0, 1, 0, 46, 31 },
  // 511: convert_uint2, convert_uint2_rte, convert_uint2_rtn, convert_uint2_rtp, convert_uint2_rtz, convert_uint2_sat, convert_uint2_sat_rte, convert_uint2_sat_rtn, convert_uint2_sat_rtp, convert_uint2_sat_rtz, 
  { 916, 2, 0, 1, 0, 46, 31 },
  { 928, 2, 0, 1, 0, 46, 31 },
  { 950, 2, 0, 1, 0, 46, 31 },
  { 964, 2, 0, 1, 0, 46, 31 },
  { 976, 2, 0, 1, 0, 46, 31 },
  { 988, 2, 0, 1, 0, 46, 31 },
  { 1000, 2, 0, 1, 0, 46, 31 },
  { 1022, 2, 0, 1, 0, 46, 31 },
  { 1036, 2, 0, 1, 0, 46, 31 },
  { 1048, 2, 0, 1, 0, 46, 31 },
  { 1060, 2, 0, 1, 0, 46, 31 },
  // 522: convert_uint3, convert_uint3_rte, convert_uint3_rtn, convert_uint3_rtp, convert_uint3_rtz, convert_uint3_sat, convert_uint3_sat_rte, convert_uint3_sat_rtn, convert_uint3_sat_rtp, convert_uint3_sat_rtz, 
  { 918, 2, 0, 1, 0, 46, 31 },
  { 930, 2, 0, 1, 0, 46, 31 },
  { 952, 2, 0, 1, 0, 46, 31 },
  { 966, 2, 0, 1, 0, 46, 31 },
  { 978, 2, 0, 1, 0, 46, 31 },
  { 990, 2, 0, 1, 0, 46, 31 },
  { 1002, 2, 0, 1, 0, 46, 31 },
  { 1024, 2, 0, 1, 0, 46, 31 },
  { 1038, 2, 0, 1, 0, 46, 31 },
  { 1050, 2, 0, 1, 0, 46, 31 },
  { 1062, 2, 0, 1, 0, 46, 31 },
  // 533: convert_uint4, convert_uint4_rte, convert_uint4_rtn, convert_uint4_rtp, convert_uint4_rtz, convert_uint4_sat, convert_uint4_sat_rte, convert_uint4_sat_rtn, convert_uint4_sat_rtp, convert_uint4_sat_rtz, 
  { 920, 2, 0, 1, 0, 46, 31 },
  { 932, 2, 0, 1, 0, 46, 31 },
  { 954, 2, 0, 1, 0, 46, 31 },
  { 968, 2, 0, 1, 0, 46, 31 },
  { 980, 2, 0, 1, 0, 46, 31 },
  { 992, 2, 0, 1, 0, 46, 31 },
  { 1004, 2, 0, 1, 0, 46, 31 },
  { 1026, 2, 0, 1, 0, 46, 31 },
  { 1040, 2, 0, 1, 0, 46, 31 },
  { 1052, 2, 0, 1, 0, 46, 31 },
  { 1064, 2, 0, 1, 0, 46, 31 },
  // 544: convert_uint8, convert_uint8_rte, convert_uint8_rtn, convert_uint8_rtp, convert_uint8_rtz, convert_uint8_sat, convert_uint8_sat_rte, convert_uint8_sat_rtn, convert_uint8_sat_rtp, convert_uint8_sat_rtz, 
  { 922, 2, 0, 1, 0, 46, 31 },
  { 934, 2, 0, 1, 0, 46, 31 },
  { 956, 2, 0, 1, 0, 46, 31 },
  { 970, 2, 0, 1, 0, 46, 31 },
  { 982, 2, 0, 1, 0, 46, 31 },
  { 994, 2, 0, 1, 0, 46, 31 },
  { 1006, 2, 0, 1, 0, 46, 31 },
  { 1028, 2, 0, 1, 0, 46, 31 },
  { 1042, 2, 0, 1, 0, 46, 31 },
  { 1054, 2, 0, 1, 0, 46, 31 },
  { 1066, 2, 0, 1, 0, 46, 31 },
  // 555: convert_uint16, convert_uint16_rte, convert_uint16_rtn, convert_uint16_rtp, convert_uint16_rtz, convert_uint16_sat, convert_uint16_sat_rte, convert_uint16_sat_rtn, convert_uint16_sat_rtp, convert_uint16_sat_rtz, 
  { 924, 2, 0, 1, 0, 46, 31 },
  { 936, 2, 0, 1, 0, 46, 31 },
  { 958, 2, 0, 1, 0, 46, 31 },
  { 972, 2, 0, 1, 0, 46, 31 },
  { 984, 2, 0, 1, 0, 46, 31 },
  { 996, 2, 0, 1, 0, 46, 31 },
  { 1008, 2, 0, 1, 0, 46, 31 },
  { 1030, 2, 0, 1, 0, 46, 31 },
  { 1044, 2, 0, 1, 0, 46, 31 },
  { 1056, 2, 0, 1, 0, 46, 31 },
  { 1068, 2, 0, 1, 0, 46, 31 },
  // 566: convert_double, convert_double_rte, convert_double_rtn, convert_double_rtp, convert_double_rtz, 
  { 938, 2, 0, 1, 0, 46, 31 },
  { 1010, 2, 0, 1, 0, 46, 31 },
  { 1082, 2, 0, 1, 0, 46, 31 },
  { 1154, 2, 0, 1, 0, 46, 31 },
  { 1226, 2, 0, 1, 0, 46, 31 },
  { 1298, 2, 0, 1, 0, 46, 31 },
  { 1370, 2, 0, 1, 0, 46, 31 },
  { 1588, 2, 0, 1, 0, 46, 31 },
  { 2065, 2, 0, 1, 0, 46, 31 },
  { 3044, 2, 0, 1, 0, 46, 31 },
  { 3632, 2, 0, 1, 0, 46, 31 },
  // 577: convert_double2, convert_double2_rte, convert_double2_rtn, convert_double2_rtp, convert_double2_rtz, 
  { 940, 2, 0, 1, 0, 46, 31 },
  { 1012, 2, 0, 1, 0, 46, 31 },
  { 1084, 2, 0, 1, 0, 46, 31 },
  { 1156, 2, 0, 1, 0, 46, 31 },
  { 1228, 2, 0, 1, 0, 46, 31 },
  { 1300, 2, 0, 1, 0, 46, 31 },
  { 1372, 2, 0, 1, 0, 46, 31 },
  { 1604, 2, 0, 1, 0, 46, 31 },
  { 2099, 2, 0, 1, 0, 46, 31 },
  { 3088, 2, 0, 1, 0, 46, 31 },
  { 3634, 2, 0, 1, 0, 46, 31 },
  // 588: convert_double3, convert_double3_rte, convert_double3_rtn, convert_double3_rtp, convert_double3_rtz, 
  { 942, 2, 0, 1, 0, 46, 31 },
  { 1014, 2, 0, 1, 0, 46, 31 },
  { 1086, 2, 0, 1, 0, 46, 31 },
  { 1158, 2, 0, 1, 0, 46, 31 },
  { 1230, 2, 0, 1, 0, 46, 31 },
  { 1302, 2, 0, 1, 0, 46, 31 },
  { 1374, 2, 0, 1, 0, 46, 31 },
  { 1615, 2, 0, 1, 0, 46, 31 },
  { 2138, 2, 0, 1, 0, 46, 31 },
  { 3121, 2, 0, 1, 0, 46, 31 },
  { 3636, 2, 0, 1, 0, 46, 31 },
  // 599: convert_double4, convert_double4_rte, convert_double4_rtn, convert_double4_rtp, convert_double4_rtz, 
  { 944, 2, 0, 1, 0, 46, 31 },
  { 1016, 2, 0, 1, 0, 46, 31 },
  { 1088, 2, 0, 1, 0, 46, 31 },
  { 1160, 2, 0, 1, 0, 46, 31 },
  { 1232, 2, 0, 1, 0, 46, 31 },
  { 1304, 2, 0, 1, 0, 46, 31 },
  { 1376, 2, 0, 1, 0, 46, 31 },
  { 1645, 2, 0, 1, 0, 46, 31 },
  { 2174, 2, 0, 1, 0, 46, 31 },
  { 3161, 2, 0, 1, 0, 46, 31 },
  { 3638, 2, 0, 1, 0, 46, 31 },
  // 610: convert_double8, convert_double8_rte, convert_double8_rtn, convert_double8_rtp, convert_double8_rtz, 
  { 948, 2, 0, 1, 0, 46, 31 },
  { 1020, 2, 0, 1, 0, 46, 31 },
  { 1092, 2, 0, 1, 0, 46, 31 },
  { 1164, 2, 0, 1, 0, 46, 31 },
  { 1236, 2, 0, 1, 0, 46, 31 },
  { 1308, 2, 0, 1, 0, 46, 31 },
  { 1380, 2, 0, 1, 0, 46, 31 },
  { 1667, 2, 0, 1, 0, 46, 31 },
  { 2211, 2, 0, 1, 0, 46, 31 },
  { 3196, 2, 0, 1, 0, 46, 31 },
  { 3640, 2, 0, 1, 0, 46, 31 },
  // 621: convert_double16, convert_double16_rte, convert_double16_rtn, convert_double16_rtp, convert_double16_rtz, 
  { 960, 2, 0, 1, 0, 46, 31 },
  { 1032, 2, 0, 1, 0, 46, 31 },
  { 1104, 2, 0, 1, 0, 46, 31 },
  { 1176, 2, 0, 1, 0, 46, 31 },
  { 1248, 2, 0, 1, 0, 46, 31 },
  { 1320, 2, 0, 1, 0, 46, 31 },
  { 1392, 2, 0, 1, 0, 46, 31 },
  { 1696, 2, 0, 1, 0, 46, 31 },
  { 2249, 2, 0, 1, 0, 46, 31 },
  { 3234, 2, 0, 1, 0, 46, 31 },
  { 3642, 2, 0, 1, 0, 46, 31 },
  // 632: convert_long, convert_long_rte, convert_long_rtn, convert_long_rtp, convert_long_rtz, convert_long_sat, convert_long_sat_rte, convert_long_sat_rtn, convert_long_sat_rtp, convert_long_sat_rtz, 
  { 1070, 2, 0, 1, 0, 46, 31 },
  { 1090, 2, 0, 1, 0, 46, 31 },
  { 1106, 2, 0, 1, 0, 46, 31 },
  { 1118, 2, 0, 1, 0, 46, 31 },
  { 1130, 2, 0, 1, 0, 46, 31 },
  { 1142, 2, 0, 1, 0, 46, 31 },
  { 1162, 2, 0, 1, 0, 46, 31 },
  { 1178, 2, 0, 1, 0, 46, 31 },
  { 1190, 2, 0, 1, 0, 46, 31 },
  { 1202, 2, 0, 1, 0, 46, 31 },
  { 1214, 2, 0, 1, 0, 46, 31 },
  // 643: convert_long2, convert_long2_rte, convert_long2_rtn, convert_long2_rtp, convert_long2_rtz, convert_long2_sat, convert_long2_sat_rte, convert_long2_sat_rtn, convert_long2_sat_rtp, convert_long2_sat_rtz, 
  { 1072, 2, 0, 1, 0, 46, 31 },
  { 1094, 2, 0, 1, 0, 46, 31 },
  { 1108, 2, 0, 1, 0, 46, 31 },
  { 1120, 2, 0, 1, 0, 46, 31 },
  { 1132, 2, 0, 1, 0, 46, 31 },
  { 1144, 2, 0, 1, 0, 46, 31 },
  { 1166, 2, 0, 1, 0, 46, 31 },
  { 1180, 2, 0, 1, 0, 46, 31 },
  { 1192, 2, 0, 1, 0, 46, 31 },
  { 1204, 2, 0, 1, 0, 46, 31 },
  { 1216, 2, 0, 1, 0, 46, 31 },
  // 654: convert_long3, convert_long3_rte, convert_long3_rtn, convert_long3_rtp, convert_long3_rtz, convert_long3_sat, convert_long3_sat_rte, convert_long3_sat_rtn, convert_long3_sat_rtp, convert_long3_sat_rtz, 
  { 1074, 2, 0, 1, 0, 46, 31 },
  { 1096, 2, 0, 1, 0, 46, 31 },
  { 1110, 2, 0, 1, 0, 46, 31 },
  { 1122, 2, 0, 1, 0, 46, 31 },
  { 1134, 2, 0, 1, 0, 46, 31 },
  { 1146, 2, 0, 1, 0, 46, 31 },
  { 1168, 2, 0, 1, 0, 46, 31 },
  { 1182, 2, 0, 1, 0, 46, 31 },
  { 1194, 2, 0, 1, 0, 46, 31 },
  { 1206, 2, 0, 1, 0, 46, 31 },
  { 1218, 2, 0, 1, 0, 46, 31 },
  // 665: convert_long4, convert_long4_rte, convert_long4_rtn, convert_long4_rtp, convert_long4_rtz, convert_long4_sat, convert_long4_sat_rte, convert_long4_sat_rtn, convert_long4_sat_rtp, convert_long4_sat_rtz, 
  { 1076, 2, 0, 1, 0, 46, 31 },
  { 1098, 2, 0, 1, 0, 46, 31 },
  { 1112, 2, 0, 1, 0, 46, 31 },
  { 1124, 2, 0, 1, 0, 46, 31 },
  { 1136, 2, 0, 1, 0, 46, 31 },
  { 1148, 2, 0, 1, 0, 46, 31 },
  { 1170, 2, 0, 1, 0, 46, 31 },
  { 1184, 2, 0, 1, 0, 46, 31 },
  { 1196, 2, 0, 1, 0, 46, 31 },
  { 1208, 2, 0, 1, 0, 46, 31 },
  { 1220, 2, 0, 1, 0, 46, 31 },
  // 676: convert_long8, convert_long8_rte, convert_long8_rtn, convert_long8_rtp, convert_long8_rtz, convert_long8_sat, convert_long8_sat_rte, convert_long8_sat_rtn, convert_long8_sat_rtp, convert_long8_sat_rtz, 
  { 1078, 2, 0, 1, 0, 46, 31 },
  { 1100, 2, 0, 1, 0, 46, 31 },
  { 1114, 2, 0, 1, 0, 46, 31 },
  { 1126, 2, 0, 1, 0, 46, 31 },
  { 1138, 2, 0, 1, 0, 46, 31 },
  { 1150, 2, 0, 1, 0, 46, 31 },
  { 1172, 2, 0, 1, 0, 46, 31 },
  { 1186, 2, 0, 1, 0, 46, 31 },
  { 1198, 2, 0, 1, 0, 46, 31 },
  { 1210, 2, 0, 1, 0, 46, 31 },
  { 1222, 2, 0, 1, 0, 46, 31 },
  // 687: convert_long16, convert_long16_rte, convert_long16_rtn, convert_long16_rtp, convert_long16_rtz, convert_long16_sat, convert_long16_sat_rte, convert_long16_sat_rtn, convert_long16_sat_rtp, convert_long16_sat_rtz, 
  { 1080, 2, 0, 1, 0, 46, 31 },
  { 1102, 2, 0, 1, 0, 46, 31 },
  { 1116, 2, 0, 1, 0, 46, 31 },
  { 1128, 2, 0, 1, 0, 46, 31 },
  { 1140, 2, 0, 1, 0, 46, 31 },
  { 1152, 2, 0, 1, 0, 46, 31 },
  { 1174, 2, 0, 1, 0, 46, 31 },
  { 1188, 2, 0, 1, 0, 46, 31 },
  { 1200, 2, 0, 1, 0, 46, 31 },
  { 1212, 2, 0, 1, 0, 46, 31 },
  { 1224, 2, 0, 1, 0, 46, 31 },
  // 698: convert_ulong, convert_ulong_rte, convert_ulong_rtn, convert_ulong_rtp, convert_ulong_rtz, convert_ulong_sat, convert_ulong_sat_rte, convert_ulong_sat_rtn, convert_ulong_sat_rtp, convert_ulong_sat_rtz, 
  { 1234, 2, 0, 1, 0, 46, 31 },
  { 1250, 2, 0, 1, 0, 46, 31 },
  { 1262, 2, 0, 1, 0, 46, 31 },
  { 1274, 2, 0, 1, 0, 46, 31 },
  { 1286, 2, 0, 1, 0, 46, 31 },
  { 1306, 2, 0, 1, 0, 46, 31 },
  { 1322, 2, 0, 1, 0, 46, 31 },
  { 1334, 2, 0, 1, 0, 46, 31 },
  { 1346, 2, 0, 1, 0, 46, 31 },
  { 1358, 2, 0, 1, 0, 46, 31 },
  { 1378, 2, 0, 1, 0, 46, 31 },
  // 709: convert_ulong2, convert_ulong2_rte, convert_ulong2_rtn, convert_ulong2_rtp, convert_ulong2_rtz, convert_ulong2_sat, convert_ulong2_sat_rte, convert_ulong2_sat_rtn, convert_ulong2_sat_rtp, convert_ulong2_sat_rtz, 
  { 1238, 2, 0, 1, 0, 46, 31 },
  { 1252, 2, 0, 1, 0, 46, 31 },
  { 1264, 2, 0, 1, 0, 46, 31 },
  { 1276, 2, 0, 1, 0, 46, 31 },
  { 1288, 2, 0, 1, 0, 46, 31 },
  { 1310, 2, 0, 1, 0, 46, 31 },
  { 1324, 2, 0, 1, 0, 46, 31 },
  { 1336, 2, 0, 1, 0, 46, 31 },
  { 1348, 2, 0, 1, 0, 46, 31 },
  { 1360, 2, 0, 1, 0, 46, 31 },
  { 1382, 2, 0, 1, 0, 46, 31 },
  // 720: convert_ulong3, convert_ulong3_rte, convert_ulong3_rtn, convert_ulong3_rtp, convert_ulong3_rtz, convert_ulong3_sat, convert_ulong3_sat_rte, convert_ulong3_sat_rtn, convert_ulong3_sat_rtp, convert_ulong3_sat_rtz, 
  { 1240, 2, 0, 1, 0, 46, 31 },
  { 1254, 2, 0, 1, 0, 46, 31 },
  { 1266, 2, 0, 1, 0, 46, 31 },
  { 1278, 2, 0, 1, 0, 46, 31 },
  { 1290, 2, 0, 1, 0, 46, 31 },
  { 1312, 2, 0, 1, 0, 46, 31 },
  { 1326, 2, 0, 1, 0, 46, 31 },
  { 1338, 2, 0, 1, 0, 46, 31 },
  { 1350, 2, 0, 1, 0, 46, 31 },
  { 1362, 2, 0, 1, 0, 46, 31 },
  { 1384, 2, 0, 1, 0, 46, 31 },
  // 731: convert_ulong4, convert_ulong4_rte, convert_ulong4_rtn, convert_ulong4_rtp, convert_ulong4_rtz, convert_ulong4_sat, convert_ulong4_sat_rte, convert_ulong4_sat_rtn, convert_ulong4_sat_rtp, convert_ulong4_sat_rtz, 
  { 1242, 2, 0, 1, 0, 46, 31 },
  { 1256, 2, 0, 1, 0, 46, 31 },
  { 1268, 2, 0, 1, 0, 46, 31 },
  { 1280, 2, 0, 1, 0, 46, 31 },
  { 1292, 2, 0, 1, 0, 46, 31 },
  { 1314, 2, 0, 1, 0, 46, 31 },
  { 1328, 2, 0, 1, 0, 46, 31 },
  { 1340, 2, 0, 1, 0, 46, 31 },
  { 1352, 2, 0, 1, 0, 46, 31 },
  { 1364, 2, 0, 1, 0, 46, 31 },
  { 1386, 2, 0, 1, 0, 46, 31 },
  // 742: convert_ulong8, convert_ulong8_rte, convert_ulong8_rtn, convert_ulong8_rtp, convert_ulong8_rtz, convert_ulong8_sat, convert_ulong8_sat_rte, convert_ulong8_sat_rtn, convert_ulong8_sat_rtp, convert_ulong8_sat_rtz, 
  { 1244, 2, 0, 1, 0, 46, 31 },
  { 1258, 2, 0, 1, 0, 46, 31 },
  { 1270, 2, 0, 1, 0, 46, 31 },
  { 1282, 2, 0, 1, 0, 46, 31 },
  { 1294, 2, 0, 1, 0, 46, 31 },
  { 1316, 2, 0, 1, 0, 46, 31 },
  { 1330, 2, 0, 1, 0, 46, 31 },
  { 1342, 2, 0, 1, 0, 46, 31 },
  { 1354, 2, 0, 1, 0, 46, 31 },
  { 1366, 2, 0, 1, 0, 46, 31 },
  { 1388, 2, 0, 1, 0, 46, 31 },
  // 753: convert_ulong16, convert_ulong16_rte, convert_ulong16_rtn, convert_ulong16_rtp, convert_ulong16_rtz, convert_ulong16_sat, convert_ulong16_sat_rte, convert_ulong16_sat_rtn, convert_ulong16_sat_rtp, convert_ulong16_sat_rtz, 
  { 1246, 2, 0, 1, 0, 46, 31 },
  { 1260, 2, 0, 1, 0, 46, 31 },
  { 1272, 2, 0, 1, 0, 46, 31 },
  { 1284, 2, 0, 1, 0, 46, 31 },
  { 1296, 2, 0, 1, 0, 46, 31 },
  { 1318, 2, 0, 1, 0, 46, 31 },
  { 1332, 2, 0, 1, 0, 46, 31 },
  { 1344, 2, 0, 1, 0, 46, 31 },
  { 1356, 2, 0, 1, 0, 46, 31 },
  { 1368, 2, 0, 1, 0, 46, 31 },
  { 1390, 2, 0, 1, 0, 46, 31 },
  // 764: get_work_dim, 
  { 1394, 1, 0, 1, 0, 46, 31 },
  // 765: get_global_size, get_global_id, get_local_size, get_local_id, get_num_groups, get_group_id, get_global_offset, 
  { 1395, 2, 0, 1, 0, 46, 31 },
  // 766: get_enqueued_local_size, 
  { 1395, 2, 0, 0, 0, 46, 24 },
  // 767: get_global_linear_id, get_local_linear_id, 
  { 1397, 1, 0, 0, 0, 46, 24 },
  // 768: acos, acosh, acospi, asin, asinh, asinpi, atan, atanh, atanpi, cbrt, ceil, cos, cosh, cospi, erfc, erf, exp, exp2, exp10, expm1, fabs, floor, log, log2, log10, log1p, logb, rint, round, rsqrt, sin, sinh, sinpi, sqrt, tan, tanh, tanpi, tgamma, trunc, lgamma, degrees, radians, sign, 
  { 1400, 2, 0, 1, 0, 46, 31 },
  // 769: nan, 
  { 1402, 2, 0, 1, 0, 46, 31 },
  { 1404, 2, 0, 1, 0, 46, 31 },
  { 1406, 2, 0, 1, 0, 46, 31 },
  // 772: atan2, atan2pi, copysign, fdim, fmod, hypot, maxmag, minmag, nextafter, pow, powr, remainder, 
  { 1408, 3, 0, 1, 0, 46, 31 },
  // 773: fmax, fmin, 
  { 1408, 3, 0, 1, 0, 46, 31 },
  { 1411, 3, 0, 1, 0, 46, 31 },
  { 1414, 3, 0, 1, 0, 46, 31 },
  { 1417, 3, 0, 1, 0, 46, 31 },
  // 777: ilogb, 
  { 1420, 2, 0, 1, 0, 46, 31 },
  { 1422, 2, 0, 1, 0, 46, 31 },
  { 1424, 2, 0, 1, 0, 46, 31 },
  // 780: ldexp, 
  { 1426, 3, 0, 1, 0, 46, 31 },
  { 1429, 3, 0, 1, 0, 46, 31 },
  { 1432, 3, 0, 1, 0, 46, 31 },
  { 1435, 3, 0, 1, 0, 46, 31 },
  { 1438, 3, 0, 1, 0, 46, 31 },
  { 1441, 3, 0, 1, 0, 46, 31 },
  // 786: pown, rootn, 
  { 1426, 3, 0, 1, 0, 46, 31 },
  { 1432, 3, 0, 1, 0, 46, 31 },
  { 1438, 3, 0, 1, 0, 46, 31 },
  // 789: fma, mad, 
  { 1444, 4, 0, 1, 0, 46, 31 },
  // 790: fract, modf, sincos, 
  { 1448, 3, 0, 0, 0, 48, 31 },
  { 1472, 3, 0, 0, 0, 48, 31 },
  { 1498, 3, 0, 0, 0, 48, 31 },
  { 1522, 3, 0, 0, 0, 47, 31 },
  // 794: frexp, lgamma_r, 
  { 1451, 3, 0, 0, 0, 48, 31 },
  { 1458, 3, 0, 0, 0, 48, 31 },
  { 1461, 3, 0, 0, 0, 48, 31 },
  { 1477, 3, 0, 0, 0, 48, 31 },
  { 1480, 3, 0, 0, 0, 48, 31 },
  { 1483, 3, 0, 0, 0, 48, 31 },
  { 1501, 3, 0, 0, 0, 48, 31 },
  { 1504, 3, 0, 0, 0, 48, 31 },
  { 1507, 3, 0, 0, 0, 48, 31 },
  { 1525, 3, 0, 0, 0, 47, 31 },
  { 1528, 3, 0, 0, 0, 47, 31 },
  { 1531, 3, 0, 0, 0, 47, 31 },
  // 806: remquo, 
  { 1454, 4, 0, 0, 0, 48, 31 },
  { 1464, 4, 0, 0, 0, 48, 31 },
  { 1468, 4, 0, 0, 0, 48, 31 },
  { 1486, 4, 0, 0, 0, 48, 31 },
  { 1490, 4, 0, 0, 0, 48, 31 },
  { 1494, 4, 0, 0, 0, 48, 31 },
  { 1510, 4, 0, 0, 0, 48, 31 },
  { 1514, 4, 0, 0, 0, 48, 31 },
  { 1518, 4, 0, 0, 0, 48, 31 },
  { 1534, 4, 0, 0, 0, 47, 31 },
  { 1538, 4, 0, 0, 0, 47, 31 },
  { 1542, 4, 0, 0, 0, 47, 31 },
  // 818: half_cos, half_exp, half_exp2, half_exp10, half_log, half_log2, half_log10, half_recip, half_rsqrt, half_sin, half_sqrt, half_tan, native_cos, native_exp, native_exp2, native_exp10, native_log, native_log2, native_log10, native_recip, native_rsqrt, native_sin, native_sqrt, native_tan, 
  { 1546, 2, 0, 1, 0, 46, 31 },
  // 819: half_divide, half_powr, native_divide, native_powr, 
  { 1548, 3, 0, 1, 0, 46, 31 },
  // 820: abs, 
  { 1551, 2, 0, 1, 0, 46, 31 },
  // 821: clz, 
  { 44, 2, 0, 1, 0, 46, 31 },
  // 822: popcount, 
  { 44, 2, 0, 1, 0, 46, 28 },
  // 823: ctz, 
  { 44, 2, 0, 1, 0, 46, 24 },
  // 824: abs_diff, 
  { 1553, 3, 0, 1, 0, 46, 31 },
  // 825: add_sat, hadd, rhadd, mul_hi, rotate, sub_sat, 
  { 1556, 3, 0, 1, 0, 46, 31 },
  // 826: max, min, 
  { 1556, 3, 0, 1, 0, 46, 31 },
  { 1559, 3, 0, 1, 0, 46, 31 },
  { 1408, 3, 0, 1, 0, 46, 31 },
  { 1411, 3, 0, 1, 0, 46, 31 },
  { 1414, 3, 0, 1, 0, 46, 31 },
  { 1417, 3, 0, 1, 0, 46, 31 },
  // 832: upsample, 
  { 1562, 3, 0, 1, 0, 46, 31 },
  { 1565, 3, 0, 1, 0, 46, 31 },
  { 1568, 3, 0, 1, 0, 46, 31 },
  { 1571, 3, 0, 1, 0, 46, 31 },
  { 1574, 3, 0, 1, 0, 46, 31 },
  { 1577, 3, 0, 1, 0, 46, 31 },
  // 838: clamp, 
  { 1580, 4, 0, 1, 0, 46, 31 },
  { 1584, 4, 0, 1, 0, 46, 31 },
  { 1444, 4, 0, 1, 0, 46, 31 },
  { 1617, 4, 0, 1, 0, 46, 31 },
  { 1621, 4, 0, 1, 0, 46, 31 },
  { 1625, 4, 0, 1, 0, 46, 31 },
  // 844: mad_hi, mad_sat, 
  { 1580, 4, 0, 1, 0, 46, 31 },
  // 845: mad24, 
  { 1590, 4, 0, 1, 0, 46, 31 },
  { 1594, 4, 0, 1, 0, 46, 31 },
  // 847: mul24, 
  { 1598, 3, 0, 1, 0, 46, 31 },
  { 1601, 3, 0, 1, 0, 46, 31 },
  // 849: step, 
  { 1408, 3, 0, 1, 0, 46, 31 },
  { 1606, 3, 0, 1, 0, 46, 31 },
  { 1609, 3, 0, 1, 0, 46, 31 },
  { 1612, 3, 0, 1, 0, 46, 31 },
  // 853: mix, 
  { 1444, 4, 0, 1, 0, 46, 31 },
  { 1629, 4, 0, 1, 0, 46, 31 },
  { 1633, 4, 0, 1, 0, 46, 31 },
  { 1637, 4, 0, 1, 0, 46, 31 },
  // 857: smoothstep, 
  { 1444, 4, 0, 1, 0, 46, 31 },
  { 1641, 4, 0, 1, 0, 46, 31 },
  { 1647, 4, 0, 1, 0, 46, 31 },
  { 1651, 4, 0, 1, 0, 46, 31 },
  // 861: length, 
  { 1655, 2, 0, 1, 0, 46, 31 },
  { 1657, 2, 0, 1, 0, 46, 31 },
  { 1659, 2, 0, 1, 0, 46, 31 },
  // 864: normalize, 
  { 1661, 2, 0, 1, 0, 46, 31 },
  { 1663, 2, 0, 1, 0, 46, 31 },
  { 1665, 2, 0, 1, 0, 46, 31 },
  // 867: fast_length, 
  { 1655, 2, 0, 1, 0, 46, 31 },
  // 868: fast_normalize, 
  { 1661, 2, 0, 1, 0, 46, 31 },
  // 869: cross, 
  { 1669, 3, 0, 1, 0, 46, 31 },
  { 1672, 3, 0, 1, 0, 46, 31 },
  { 1675, 3, 0, 1, 0, 46, 31 },
  { 1678, 3, 0, 1, 0, 46, 31 },
  { 1681, 3, 0, 1, 0, 46, 31 },
  { 1684, 3, 0, 1, 0, 46, 31 },
  // 875: distance, 
  { 1687, 3, 0, 1, 0, 46, 31 },
  { 1690, 3, 0, 1, 0, 46, 31 },
  { 1693, 3, 0, 1, 0, 46, 31 },
  // 878: fast_distance, 
  { 1687, 3, 0, 1, 0, 46, 31 },
  // 879: isfinite, isinf, isnan, isnormal, signbit, 
  { 1420, 2, 0, 1, 0, 46, 31 },
  { 774, 2, 0, 1, 0, 46, 31 },
  { 1698, 2, 0, 1, 0, 46, 31 },
  { 792, 2, 0, 1, 0, 46, 31 },
  { 1700, 2, 0, 1, 0, 46, 31 },
  // 884: any, all, 
  { 1702, 2, 0, 1, 0, 46, 31 },
  // 885: isequal, isnotequal, isgreater, isgreaterequal, isless, islessequal, islessgreater, isordered, isunordered, 
  { 1704, 3, 0, 1, 0, 46, 31 },
  { 1707, 3, 0, 1, 0, 46, 31 },
  { 1710, 3, 0, 1, 0, 46, 31 },
  { 1713, 3, 0, 1, 0, 46, 31 },
  { 1716, 3, 0, 1, 0, 46, 31 },
  // 890: bitselect, 
  { 1719, 4, 0, 1, 0, 46, 31 },
  // 891: select, 
  { 1723, 4, 0, 1, 0, 46, 31 },
  { 1727, 4, 0, 1, 0, 46, 31 },
  { 1731, 4, 0, 1, 0, 46, 31 },
  { 1735, 4, 0, 1, 0, 46, 31 },
  { 1739, 4, 0, 1, 0, 46, 31 },
  { 1743, 4, 0, 1, 0, 46, 31 },
  { 1747, 4, 0, 1, 0, 46, 31 },
  { 1751, 4, 0, 1, 0, 46, 31 },
  { 1755, 4, 0, 1, 0, 46, 31 },
  { 1759, 4, 0, 1, 0, 46, 31 },
  // 901: vload2, 
  { 1763, 3, 1, 0, 0, 48, 31 },
  { 1766, 3, 1, 0, 0, 48, 31 },
  { 1769, 3, 1, 0, 0, 48, 31 },
  { 1772, 3, 1, 0, 0, 48, 31 },
  { 1775, 3, 1, 0, 0, 48, 31 },
  { 1778, 3, 1, 0, 0, 48, 31 },
  { 1781, 3, 1, 0, 0, 48, 31 },
  { 1784, 3, 1, 0, 0, 48, 31 },
  { 1787, 3, 1, 0, 0, 48, 31 },
  { 1790, 3, 1, 0, 0, 48, 31 },
  { 1793, 3, 1, 0, 0, 48, 31 },
  { 2156, 3, 1, 0, 0, 48, 31 },
  { 2159, 3, 1, 0, 0, 48, 31 },
  { 2162, 3, 1, 0, 0, 48, 31 },
  { 2165, 3, 1, 0, 0, 48, 31 },
  { 2168, 3, 1, 0, 0, 48, 31 },
  { 2171, 3, 1, 0, 0, 48, 31 },
  { 2176, 3, 1, 0, 0, 48, 31 },
  { 2179, 3, 1, 0, 0, 48, 31 },
  { 2182, 3, 1, 0, 0, 48, 31 },
  { 2185, 3, 1, 0, 0, 48, 31 },
  { 2188, 3, 1, 0, 0, 48, 31 },
  { 2549, 3, 1, 0, 0, 48, 31 },
  { 2552, 3, 1, 0, 0, 48, 31 },
  { 2555, 3, 1, 0, 0, 48, 31 },
  { 2558, 3, 1, 0, 0, 48, 31 },
  { 2561, 3, 1, 0, 0, 48, 31 },
  { 2564, 3, 1, 0, 0, 48, 31 },
  { 2567, 3, 1, 0, 0, 48, 31 },
  { 2570, 3, 1, 0, 0, 48, 31 },
  { 2573, 3, 1, 0, 0, 48, 31 },
  { 2576, 3, 1, 0, 0, 48, 31 },
  { 2579, 3, 1, 0, 0, 48, 31 },
  { 2934, 3, 1, 0, 0, 47, 31 },
  { 2937, 3, 1, 0, 0, 47, 31 },
  { 2940, 3, 1, 0, 0, 47, 31 },
  { 2943, 3, 1, 0, 0, 47, 31 },
  { 2946, 3, 1, 0, 0, 47, 31 },
  { 2949, 3, 1, 0, 0, 47, 31 },
  { 2952, 3, 1, 0, 0, 47, 31 },
  { 2955, 3, 1, 0, 0, 47, 31 },
  { 2958, 3, 1, 0, 0, 47, 31 },
  { 2961, 3, 1, 0, 0, 47, 31 },
  { 2964, 3, 1, 0, 0, 47, 31 },
  { 3333, 3, 1, 0, 0, 46, 31 },
  { 3336, 3, 1, 0, 0, 46, 31 },
  { 3339, 3, 1, 0, 0, 46, 31 },
  { 3342, 3, 1, 0, 0, 46, 31 },
  { 3345, 3, 1, 0, 0, 46, 31 },
  { 3348, 3, 1, 0, 0, 46, 31 },
  { 3351, 3, 1, 0, 0, 46, 31 },
  { 3354, 3, 1, 0, 0, 46, 31 },
  { 3357, 3, 1, 0, 0, 46, 31 },
  { 3360, 3, 1, 0, 0, 46, 31 },
  { 3363, 3, 1, 0, 0, 46, 31 },
  // 956: vstore2, 
  { 1796, 4, 0, 0, 0, 48, 31 },
  { 1800, 4, 0, 0, 0, 48, 31 },
  { 1804, 4, 0, 0, 0, 48, 31 },
  { 1808, 4, 0, 0, 0, 48, 31 },
  { 1812, 4, 0, 0, 0, 48, 31 },
  { 1816, 4, 0, 0, 0, 48, 31 },
  { 1820, 4, 0, 0, 0, 48, 31 },
  { 1824, 4, 0, 0, 0, 48, 31 },
  { 1828, 4, 0, 0, 0, 48, 31 },
  { 1832, 4, 0, 0, 0, 48, 31 },
  { 1836, 4, 0, 0, 0, 48, 31 },
  { 2191, 4, 0, 0, 0, 48, 31 },
  { 2195, 4, 0, 0, 0, 48, 31 },
  { 2199, 4, 0, 0, 0, 48, 31 },
  { 2203, 4, 0, 0, 0, 48, 31 },
  { 2207, 4, 0, 0, 0, 48, 31 },
  { 2213, 4, 0, 0, 0, 48, 31 },
  { 2217, 4, 0, 0, 0, 48, 31 },
  { 2221, 4, 0, 0, 0, 48, 31 },
  { 2225, 4, 0, 0, 0, 48, 31 },
  { 2229, 4, 0, 0, 0, 48, 31 },
  { 2233, 4, 0, 0, 0, 48, 31 },
  { 2582, 4, 0, 0, 0, 48, 31 },
  { 2586, 4, 0, 0, 0, 48, 31 },
  { 2590, 4, 0, 0, 0, 48, 31 },
  { 2594, 4, 0, 0, 0, 48, 31 },
  { 2598, 4, 0, 0, 0, 48, 31 },
  { 2602, 4, 0, 0, 0, 48, 31 },
  { 2606, 4, 0, 0, 0, 48, 31 },
  { 2610, 4, 0, 0, 0, 48, 31 },
  { 2614, 4, 0, 0, 0, 48, 31 },
  { 2618, 4, 0, 0, 0, 48, 31 },
  { 2622, 4, 0, 0, 0, 48, 31 },
  { 2967, 4, 0, 0, 0, 47, 31 },
  { 2971, 4, 0, 0, 0, 47, 31 },
  { 2975, 4, 0, 0, 0, 47, 31 },
  { 2979, 4, 0, 0, 0, 47, 31 },
  { 2983, 4, 0, 0, 0, 47, 31 },
  { 2987, 4, 0, 0, 0, 47, 31 },
  { 2991, 4, 0, 0, 0, 47, 31 },
  { 2995, 4, 0, 0, 0, 47, 31 },
  { 2999, 4, 0, 0, 0, 47, 31 },
  { 3003, 4, 0, 0, 0, 47, 31 },
  { 3007, 4, 0, 0, 0, 47, 31 },
  // 1000: vload3, 
  { 1842, 3, 1, 0, 0, 48, 31 },
  { 1845, 3, 1, 0, 0, 48, 31 },
  { 1848, 3, 1, 0, 0, 48, 31 },
  { 1851, 3, 1, 0, 0, 48, 31 },
  { 1854, 3, 1, 0, 0, 48, 31 },
  { 1857, 3, 1, 0, 0, 48, 31 },
  { 1860, 3, 1, 0, 0, 48, 31 },
  { 1863, 3, 1, 0, 0, 48, 31 },
  { 1866, 3, 1, 0, 0, 48, 31 },
  { 1869, 3, 1, 0, 0, 48, 31 },
  { 1872, 3, 1, 0, 0, 48, 31 },
  { 2237, 3, 1, 0, 0, 48, 31 },
  { 2240, 3, 1, 0, 0, 48, 31 },
  { 2243, 3, 1, 0, 0, 48, 31 },
  { 2246, 3, 1, 0, 0, 48, 31 },
  { 2251, 3, 1, 0, 0, 48, 31 },
  { 2254, 3, 1, 0, 0, 48, 31 },
  { 2257, 3, 1, 0, 0, 48, 31 },
  { 2260, 3, 1, 0, 0, 48, 31 },
  { 2263, 3, 1, 0, 0, 48, 31 },
  { 2266, 3, 1, 0, 0, 48, 31 },
  { 2269, 3, 1, 0, 0, 48, 31 },
  { 2626, 3, 1, 0, 0, 48, 31 },
  { 2629, 3, 1, 0, 0, 48, 31 },
  { 2632, 3, 1, 0, 0, 48, 31 },
  { 2635, 3, 1, 0, 0, 48, 31 },
  { 2638, 3, 1, 0, 0, 48, 31 },
  { 2641, 3, 1, 0, 0, 48, 31 },
  { 2644, 3, 1, 0, 0, 48, 31 },
  { 2647, 3, 1, 0, 0, 48, 31 },
  { 2650, 3, 1, 0, 0, 48, 31 },
  { 2653, 3, 1, 0, 0, 48, 31 },
  { 2656, 3, 1, 0, 0, 48, 31 },
  { 3011, 3, 1, 0, 0, 47, 31 },
  { 3014, 3, 1, 0, 0, 47, 31 },
  { 3017, 3, 1, 0, 0, 47, 31 },
  { 3020, 3, 1, 0, 0, 47, 31 },
  { 3023, 3, 1, 0, 0, 47, 31 },
  { 3026, 3, 1, 0, 0, 47, 31 },
  { 3029, 3, 1, 0, 0, 47, 31 },
  { 3032, 3, 1, 0, 0, 47, 31 },
  { 3035, 3, 1, 0, 0, 47, 31 },
  { 3038, 3, 1, 0, 0, 47, 31 },
  { 3041, 3, 1, 0, 0, 47, 31 },
  { 3366, 3, 1, 0, 0, 46, 31 },
  { 3369, 3, 1, 0, 0, 46, 31 },
  { 3372, 3, 1, 0, 0, 46, 31 },
  { 3375, 3, 1, 0, 0, 46, 31 },
  { 3378, 3, 1, 0, 0, 46, 31 },
  { 3381, 3, 1, 0, 0, 46, 31 },
  { 3384, 3, 1, 0, 0, 46, 31 },
  { 3387, 3, 1, 0, 0, 46, 31 },
  { 3390, 3, 1, 0, 0, 46, 31 },
  { 3393, 3, 1, 0, 0, 46, 31 },
  { 3396, 3, 1, 0, 0, 46, 31 },
  // 1055: vstore3, 
  { 1875, 4, 0, 0, 0, 48, 31 },
  { 1879, 4, 0, 0, 0, 48, 31 },
  { 1883, 4, 0, 0, 0, 48, 31 },
  { 1887, 4, 0, 0, 0, 48, 31 },
  { 1891, 4, 0, 0, 0, 48, 31 },
  { 1895, 4, 0, 0, 0, 48, 31 },
  { 1899, 4, 0, 0, 0, 48, 31 },
  { 1903, 4, 0, 0, 0, 48, 31 },
  { 1907, 4, 0, 0, 0, 48, 31 },
  { 1911, 4, 0, 0, 0, 48, 31 },
  { 1915, 4, 0, 0, 0, 48, 31 },
  { 2272, 4, 0, 0, 0, 48, 31 },
  { 2276, 4, 0, 0, 0, 48, 31 },
  { 2280, 4, 0, 0, 0, 48, 31 },
  { 2284, 4, 0, 0, 0, 48, 31 },
  { 2288, 4, 0, 0, 0, 48, 31 },
  { 2292, 4, 0, 0, 0, 48, 31 },
  { 2296, 4, 0, 0, 0, 48, 31 },
  { 2300, 4, 0, 0, 0, 48, 31 },
  { 2304, 4, 0, 0, 0, 48, 31 },
  { 2308, 4, 0, 0, 0, 48, 31 },
  { 2312, 4, 0, 0, 0, 48, 31 },
  { 2659, 4, 0, 0, 0, 48, 31 },
  { 2663, 4, 0, 0, 0, 48, 31 },
  { 2667, 4, 0, 0, 0, 48, 31 },
  { 2671, 4, 0, 0, 0, 48, 31 },
  { 2675, 4, 0, 0, 0, 48, 31 },
  { 2679, 4, 0, 0, 0, 48, 31 },
  { 2683, 4, 0, 0, 0, 48, 31 },
  { 2687, 4, 0, 0, 0, 48, 31 },
  { 2691, 4, 0, 0, 0, 48, 31 },
  { 2695, 4, 0, 0, 0, 48, 31 },
  { 2699, 4, 0, 0, 0, 48, 31 },
  { 3046, 4, 0, 0, 0, 47, 31 },
  { 3050, 4, 0, 0, 0, 47, 31 },
  { 3054, 4, 0, 0, 0, 47, 31 },
  { 3058, 4, 0, 0, 0, 47, 31 },
  { 3062, 4, 0, 0, 0, 47, 31 },
  { 3066, 4, 0, 0, 0, 47, 31 },
  { 3070, 4, 0, 0, 0, 47, 31 },
  { 3074, 4, 0, 0, 0, 47, 31 },
  { 3078, 4, 0, 0, 0, 47, 31 },
  { 3082, 4, 0, 0, 0, 47, 31 },
  { 3090, 4, 0, 0, 0, 47, 31 },
  // 1099: vload4, 
  { 1919, 3, 1, 0, 0, 48, 31 },
  { 1922, 3, 1, 0, 0, 48, 31 },
  { 1925, 3, 1, 0, 0, 48, 31 },
  { 1928, 3, 1, 0, 0, 48, 31 },
  { 1931, 3, 1, 0, 0, 48, 31 },
  { 1934, 3, 1, 0, 0, 48, 31 },
  { 1937, 3, 1, 0, 0, 48, 31 },
  { 1940, 3, 1, 0, 0, 48, 31 },
  { 1943, 3, 1, 0, 0, 48, 31 },
  { 1946, 3, 1, 0, 0, 48, 31 },
  { 1949, 3, 1, 0, 0, 48, 31 },
  { 2316, 3, 1, 0, 0, 48, 31 },
  { 2319, 3, 1, 0, 0, 48, 31 },
  { 2322, 3, 1, 0, 0, 48, 31 },
  { 2325, 3, 1, 0, 0, 48, 31 },
  { 2328, 3, 1, 0, 0, 48, 31 },
  { 2331, 3, 1, 0, 0, 48, 31 },
  { 2334, 3, 1, 0, 0, 48, 31 },
  { 2337, 3, 1, 0, 0, 48, 31 },
  { 2340, 3, 1, 0, 0, 48, 31 },
  { 2343, 3, 1, 0, 0, 48, 31 },
  { 2346, 3, 1, 0, 0, 48, 31 },
  { 2703, 3, 1, 0, 0, 48, 31 },
  { 2706, 3, 1, 0, 0, 48, 31 },
  { 2709, 3, 1, 0, 0, 48, 31 },
  { 2712, 3, 1, 0, 0, 48, 31 },
  { 2715, 3, 1, 0, 0, 48, 31 },
  { 2718, 3, 1, 0, 0, 48, 31 },
  { 2721, 3, 1, 0, 0, 48, 31 },
  { 2724, 3, 1, 0, 0, 48, 31 },
  { 2727, 3, 1, 0, 0, 48, 31 },
  { 2730, 3, 1, 0, 0, 48, 31 },
  { 2733, 3, 1, 0, 0, 48, 31 },
  { 3094, 3, 1, 0, 0, 47, 31 },
  { 3097, 3, 1, 0, 0, 47, 31 },
  { 3100, 3, 1, 0, 0, 47, 31 },
  { 3103, 3, 1, 0, 0, 47, 31 },
  { 3106, 3, 1, 0, 0, 47, 31 },
  { 3109, 3, 1, 0, 0, 47, 31 },
  { 3112, 3, 1, 0, 0, 47, 31 },
  { 3115, 3, 1, 0, 0, 47, 31 },
  { 3118, 3, 1, 0, 0, 47, 31 },
  { 3123, 3, 1, 0, 0, 47, 31 },
  { 3126, 3, 1, 0, 0, 47, 31 },
  { 3399, 3, 1, 0, 0, 46, 31 },
  { 3402, 3, 1, 0, 0, 46, 31 },
  { 3405, 3, 1, 0, 0, 46, 31 },
  { 3408, 3, 1, 0, 0, 46, 31 },
  { 3411, 3, 1, 0, 0, 46, 31 },
  { 3414, 3, 1, 0, 0, 46, 31 },
  { 3417, 3, 1, 0, 0, 46, 31 },
  { 3420, 3, 1, 0, 0, 46, 31 },
  { 3423, 3, 1, 0, 0, 46, 31 },
  { 3426, 3, 1, 0, 0, 46, 31 },
  { 3429, 3, 1, 0, 0, 46, 31 },
  // 1154: vstore4, 
  { 1952, 4, 0, 0, 0, 48, 31 },
  { 1956, 4, 0, 0, 0, 48, 31 },
  { 1960, 4, 0, 0, 0, 48, 31 },
  { 1964, 4, 0, 0, 0, 48, 31 },
  { 1968, 4, 0, 0, 0, 48, 31 },
  { 1972, 4, 0, 0, 0, 48, 31 },
  { 1976, 4, 0, 0, 0, 48, 31 },
  { 1980, 4, 0, 0, 0, 48, 31 },
  { 1984, 4, 0, 0, 0, 48, 31 },
  { 1988, 4, 0, 0, 0, 48, 31 },
  { 1992, 4, 0, 0, 0, 48, 31 },
  { 2349, 4, 0, 0, 0, 48, 31 },
  { 2353, 4, 0, 0, 0, 48, 31 },
  { 2357, 4, 0, 0, 0, 48, 31 },
  { 2361, 4, 0, 0, 0, 48, 31 },
  { 2365, 4, 0, 0, 0, 48, 31 },
  { 2369, 4, 0, 0, 0, 48, 31 },
  { 2373, 4, 0, 0, 0, 48, 31 },
  { 2377, 4, 0, 0, 0, 48, 31 },
  { 2381, 4, 0, 0, 0, 48, 31 },
  { 2385, 4, 0, 0, 0, 48, 31 },
  { 2389, 4, 0, 0, 0, 48, 31 },
  { 2736, 4, 0, 0, 0, 48, 31 },
  { 2740, 4, 0, 0, 0, 48, 31 },
  { 2744, 4, 0, 0, 0, 48, 31 },
  { 2748, 4, 0, 0, 0, 48, 31 },
  { 2752, 4, 0, 0, 0, 48, 31 },
  { 2756, 4, 0, 0, 0, 48, 31 },
  { 2760, 4, 0, 0, 0, 48, 31 },
  { 2764, 4, 0, 0, 0, 48, 31 },
  { 2768, 4, 0, 0, 0, 48, 31 },
  { 2772, 4, 0, 0, 0, 48, 31 },
  { 2776, 4, 0, 0, 0, 48, 31 },
  { 3129, 4, 0, 0, 0, 47, 31 },
  { 3133, 4, 0, 0, 0, 47, 31 },
  { 3137, 4, 0, 0, 0, 47, 31 },
  { 3141, 4, 0, 0, 0, 47, 31 },
  { 3145, 4, 0, 0, 0, 47, 31 },
  { 3149, 4, 0, 0, 0, 47, 31 },
  { 3153, 4, 0, 0, 0, 47, 31 },
  { 3157, 4, 0, 0, 0, 47, 31 },
  { 3163, 4, 0, 0, 0, 47, 31 },
  { 3167, 4, 0, 0, 0, 47, 31 },
  { 3171, 4, 0, 0, 0, 47, 31 },
  // 1198: vload8, 
  { 1996, 3, 1, 0, 0, 48, 31 },
  { 1999, 3, 1, 0, 0, 48, 31 },
  { 2002, 3, 1, 0, 0, 48, 31 },
  { 2005, 3, 1, 0, 0, 48, 31 },
  { 2008, 3, 1, 0, 0, 48, 31 },
  { 2011, 3, 1, 0, 0, 48, 31 },
  { 2014, 3, 1, 0, 0, 48, 31 },
  { 2017, 3, 1, 0, 0, 48, 31 },
  { 2020, 3, 1, 0, 0, 48, 31 },
  { 2023, 3, 1, 0, 0, 48, 31 },
  { 2026, 3, 1, 0, 0, 48, 31 },
  { 2393, 3, 1, 0, 0, 48, 31 },
  { 2396, 3, 1, 0, 0, 48, 31 },
  { 2399, 3, 1, 0, 0, 48, 31 },
  { 2402, 3, 1, 0, 0, 48, 31 },
  { 2405, 3, 1, 0, 0, 48, 31 },
  { 2408, 3, 1, 0, 0, 48, 31 },
  { 2411, 3, 1, 0, 0, 48, 31 },
  { 2414, 3, 1, 0, 0, 48, 31 },
  { 2417, 3, 1, 0, 0, 48, 31 },
  { 2420, 3, 1, 0, 0, 48, 31 },
  { 2423, 3, 1, 0, 0, 48, 31 },
  { 2780, 3, 1, 0, 0, 48, 31 },
  { 2783, 3, 1, 0, 0, 48, 31 },
  { 2786, 3, 1, 0, 0, 48, 31 },
  { 2789, 3, 1, 0, 0, 48, 31 },
  { 2792, 3, 1, 0, 0, 48, 31 },
  { 2795, 3, 1, 0, 0, 48, 31 },
  { 2798, 3, 1, 0, 0, 48, 31 },
  { 2801, 3, 1, 0, 0, 48, 31 },
  { 2804, 3, 1, 0, 0, 48, 31 },
  { 2807, 3, 1, 0, 0, 48, 31 },
  { 2810, 3, 1, 0, 0, 48, 31 },
  { 3175, 3, 1, 0, 0, 47, 31 },
  { 3178, 3, 1, 0, 0, 47, 31 },
  { 3181, 3, 1, 0, 0, 47, 31 },
  { 3184, 3, 1, 0, 0, 47, 31 },
  { 3187, 3, 1, 0, 0, 47, 31 },
  { 3190, 3, 1, 0, 0, 47, 31 },
  { 3193, 3, 1, 0, 0, 47, 31 },
  { 3198, 3, 1, 0, 0, 47, 31 },
  { 3201, 3, 1, 0, 0, 47, 31 },
  { 3204, 3, 1, 0, 0, 47, 31 },
  { 3207, 3, 1, 0, 0, 47, 31 },
  { 3432, 3, 1, 0, 0, 46, 31 },
  { 3435, 3, 1, 0, 0, 46, 31 },
  { 3438, 3, 1, 0, 0, 46, 31 },
  { 3441, 3, 1, 0, 0, 46, 31 },
  { 3444, 3, 1, 0, 0, 46, 31 },
  { 3447, 3, 1, 0, 0, 46, 31 },
  { 3450, 3, 1, 0, 0, 46, 31 },
  { 3453, 3, 1, 0, 0, 46, 31 },
  { 3456, 3, 1, 0, 0, 46, 31 },
  { 3459, 3, 1, 0, 0, 46, 31 },
  { 3462, 3, 1, 0, 0, 46, 31 },
  // 1253: vstore8, 
  { 2029, 4, 0, 0, 0, 48, 31 },
  { 2033, 4, 0, 0, 0, 48, 31 },
  { 2037, 4, 0, 0, 0, 48, 31 },
  { 2041, 4, 0, 0, 0, 48, 31 },
  { 2045, 4, 0, 0, 0, 48, 31 },
  { 2049, 4, 0, 0, 0, 48, 31 },
  { 2053, 4, 0, 0, 0, 48, 31 },
  { 2057, 4, 0, 0, 0, 48, 31 },
  { 2061, 4, 0, 0, 0, 48, 31 },
  { 2067, 4, 0, 0, 0, 48, 31 },
  { 2071, 4, 0, 0, 0, 48, 31 },
  { 2426, 4, 0, 0, 0, 48, 31 },
  { 2430, 4, 0, 0, 0, 48, 31 },
  { 2434, 4, 0, 0, 0, 48, 31 },
  { 2438, 4, 0, 0, 0, 48, 31 },
  { 2442, 4, 0, 0, 0, 48, 31 },
  { 2446, 4, 0, 0, 0, 48, 31 },
  { 2450, 4, 0, 0, 0, 48, 31 },
  { 2454, 4, 0, 0, 0, 48, 31 },
  { 2458, 4, 0, 0, 0, 48, 31 },
  { 2464, 4, 0, 0, 0, 48, 31 },
  { 2468, 4, 0, 0, 0, 48, 31 },
  { 2813, 4, 0, 0, 0, 48, 31 },
  { 2817, 4, 0, 0, 0, 48, 31 },
  { 2821, 4, 0, 0, 0, 48, 31 },
  { 2825, 4, 0, 0, 0, 48, 31 },
  { 2829, 4, 0, 0, 0, 48, 31 },
  { 2833, 4, 0, 0, 0, 48, 31 },
  { 2837, 4, 0, 0, 0, 48, 31 },
  { 2841, 4, 0, 0, 0, 48, 31 },
  { 2845, 4, 0, 0, 0, 48, 31 },
  { 2849, 4, 0, 0, 0, 48, 31 },
  { 2853, 4, 0, 0, 0, 48, 31 },
  { 3210, 4, 0, 0, 0, 47, 31 },
  { 3214, 4, 0, 0, 0, 47, 31 },
  { 3218, 4, 0, 0, 0, 47, 31 },
  { 3222, 4, 0, 0, 0, 47, 31 },
  { 3226, 4, 0, 0, 0, 47, 31 },
  { 3230, 4, 0, 0, 0, 47, 31 },
  { 3236, 4, 0, 0, 0, 47, 31 },
  { 3240, 4, 0, 0, 0, 47, 31 },
  { 3244, 4, 0, 0, 0, 47, 31 },
  { 3248, 4, 0, 0, 0, 47, 31 },
  { 3252, 4, 0, 0, 0, 47, 31 },
  // 1297: vload16, 
  { 2075, 3, 1, 0, 0, 48, 31 },
  { 2078, 3, 1, 0, 0, 48, 31 },
  { 2081, 3, 1, 0, 0, 48, 31 },
  { 2084, 3, 1, 0, 0, 48, 31 },
  { 2087, 3, 1, 0, 0, 48, 31 },
  { 2090, 3, 1, 0, 0, 48, 31 },
  { 2093, 3, 1, 0, 0, 48, 31 },
  { 2096, 3, 1, 0, 0, 48, 31 },
  { 2101, 3, 1, 0, 0, 48, 31 },
  { 2104, 3, 1, 0, 0, 48, 31 },
  { 2107, 3, 1, 0, 0, 48, 31 },
  { 2472, 3, 1, 0, 0, 48, 31 },
  { 2475, 3, 1, 0, 0, 48, 31 },
  { 2478, 3, 1, 0, 0, 48, 31 },
  { 2481, 3, 1, 0, 0, 48, 31 },
  { 2484, 3, 1, 0, 0, 48, 31 },
  { 2487, 3, 1, 0, 0, 48, 31 },
  { 2490, 3, 1, 0, 0, 48, 31 },
  { 2493, 3, 1, 0, 0, 48, 31 },
  { 2496, 3, 1, 0, 0, 48, 31 },
  { 2499, 3, 1, 0, 0, 48, 31 },
  { 2502, 3, 1, 0, 0, 48, 31 },
  { 2857, 3, 1, 0, 0, 48, 31 },
  { 2860, 3, 1, 0, 0, 48, 31 },
  { 2863, 3, 1, 0, 0, 48, 31 },
  { 2866, 3, 1, 0, 0, 48, 31 },
  { 2869, 3, 1, 0, 0, 48, 31 },
  { 2872, 3, 1, 0, 0, 48, 31 },
  { 2875, 3, 1, 0, 0, 48, 31 },
  { 2878, 3, 1, 0, 0, 48, 31 },
  { 2881, 3, 1, 0, 0, 48, 31 },
  { 2884, 3, 1, 0, 0, 48, 31 },
  { 2887, 3, 1, 0, 0, 48, 31 },
  { 3256, 3, 1, 0, 0, 47, 31 },
  { 3259, 3, 1, 0, 0, 47, 31 },
  { 3262, 3, 1, 0, 0, 47, 31 },
  { 3265, 3, 1, 0, 0, 47, 31 },
  { 3268, 3, 1, 0, 0, 47, 31 },
  { 3271, 3, 1, 0, 0, 47, 31 },
  { 3274, 3, 1, 0, 0, 47, 31 },
  { 3277, 3, 1, 0, 0, 47, 31 },
  { 3280, 3, 1, 0, 0, 47, 31 },
  { 3283, 3, 1, 0, 0, 47, 31 },
  { 3286, 3, 1, 0, 0, 47, 31 },
  { 3465, 3, 1, 0, 0, 46, 31 },
  { 3468, 3, 1, 0, 0, 46, 31 },
  { 3471, 3, 1, 0, 0, 46, 31 },
  { 3474, 3, 1, 0, 0, 46, 31 },
  { 3477, 3, 1, 0, 0, 46, 31 },
  { 3480, 3, 1, 0, 0, 46, 31 },
  { 3483, 3, 1, 0, 0, 46, 31 },
  { 3486, 3, 1, 0, 0, 46, 31 },
  { 3489, 3, 1, 0, 0, 46, 31 },
  { 3492, 3, 1, 0, 0, 46, 31 },
  { 3495, 3, 1, 0, 0, 46, 31 },
  // 1352: vstore16, 
  { 2110, 4, 0, 0, 0, 48, 31 },
  { 2114, 4, 0, 0, 0, 48, 31 },
  { 2118, 4, 0, 0, 0, 48, 31 },
  { 2122, 4, 0, 0, 0, 48, 31 },
  { 2126, 4, 0, 0, 0, 48, 31 },
  { 2130, 4, 0, 0, 0, 48, 31 },
  { 2134, 4, 0, 0, 0, 48, 31 },
  { 2140, 4, 0, 0, 0, 48, 31 },
  { 2144, 4, 0, 0, 0, 48, 31 },
  { 2148, 4, 0, 0, 0, 48, 31 },
  { 2152, 4, 0, 0, 0, 48, 31 },
  { 2505, 4, 0, 0, 0, 48, 31 },
  { 2509, 4, 0, 0, 0, 48, 31 },
  { 2513, 4, 0, 0, 0, 48, 31 },
  { 2517, 4, 0, 0, 0, 48, 31 },
  { 2521, 4, 0, 0, 0, 48, 31 },
  { 2525, 4, 0, 0, 0, 48, 31 },
  { 2529, 4, 0, 0, 0, 48, 31 },
  { 2533, 4, 0, 0, 0, 48, 31 },
  { 2537, 4, 0, 0, 0, 48, 31 },
  { 2541, 4, 0, 0, 0, 48, 31 },
  { 2545, 4, 0, 0, 0, 48, 31 },
  { 2890, 4, 0, 0, 0, 48, 31 },
  { 2894, 4, 0, 0, 0, 48, 31 },
  { 2898, 4, 0, 0, 0, 48, 31 },
  { 2902, 4, 0, 0, 0, 48, 31 },
  { 2906, 4, 0, 0, 0, 48, 31 },
  { 2910, 4, 0, 0, 0, 48, 31 },
  { 2914, 4, 0, 0, 0, 48, 31 },
  { 2918, 4, 0, 0, 0, 48, 31 },
  { 2922, 4, 0, 0, 0, 48, 31 },
  { 2926, 4, 0, 0, 0, 48, 31 },
  { 2930, 4, 0, 0, 0, 48, 31 },
  { 3289, 4, 0, 0, 0, 47, 31 },
  { 3293, 4, 0, 0, 0, 47, 31 },
  { 3297, 4, 0, 0, 0, 47, 31 },
  { 3301, 4, 0, 0, 0, 47, 31 },
  { 3305, 4, 0, 0, 0, 47, 31 },
  { 3309, 4, 0, 0, 0, 47, 31 },
  { 3313, 4, 0, 0, 0, 47, 31 },
  { 3317, 4, 0, 0, 0, 47, 31 },
  { 3321, 4, 0, 0, 0, 47, 31 },
  { 3325, 4, 0, 0, 0, 47, 31 },
  { 3329, 4, 0, 0, 0, 47, 31 },
  // 1396: vload_half, 
  { 3498, 3, 1, 0, 0, 48, 31 },
  { 3566, 3, 1, 0, 0, 48, 31 },
  { 3644, 3, 1, 0, 0, 48, 31 },
  { 3710, 3, 1, 0, 0, 47, 31 },
  { 3784, 3, 1, 0, 0, 46, 31 },
  // 1401: vload_half2, vloada_half2, 
  { 3501, 3, 1, 0, 0, 48, 31 },
  { 3569, 3, 1, 0, 0, 48, 31 },
  { 3647, 3, 1, 0, 0, 48, 31 },
  { 3713, 3, 1, 0, 0, 47, 31 },
  { 3787, 3, 1, 0, 0, 46, 31 },
  // 1406: vstore_half, vstore_half_rte, vstore_half_rtz, vstore_half_rtp, vstore_half_rtn, 
  { 3504, 4, 0, 0, 0, 48, 31 },
  { 3508, 4, 0, 0, 0, 48, 31 },
  { 3584, 4, 0, 0, 0, 48, 31 },
  { 3588, 4, 0, 0, 0, 48, 31 },
  { 3662, 4, 0, 0, 0, 48, 31 },
  { 3666, 4, 0, 0, 0, 48, 31 },
  { 3728, 4, 0, 0, 0, 47, 31 },
  { 3732, 4, 0, 0, 0, 47, 31 },
  // 1414: vstore_half2, vstorea_half2, vstore_half2_rte, vstorea_half2_rte, vstore_half2_rtz, vstorea_half2_rtz, vstore_half2_rtp, vstorea_half2_rtp, vstore_half2_rtn, vstorea_half2_rtn, 
  { 3512, 4, 0, 0, 0, 48, 31 },
  { 3516, 4, 0, 0, 0, 48, 31 },
  { 3592, 4, 0, 0, 0, 48, 31 },
  { 3596, 4, 0, 0, 0, 48, 31 },
  { 3670, 4, 0, 0, 0, 48, 31 },
  { 3674, 4, 0, 0, 0, 48, 31 },
  { 3736, 4, 0, 0, 0, 47, 31 },
  { 3740, 4, 0, 0, 0, 47, 31 },
  // 1422: vload_half3, vloada_half3, 
  { 3520, 3, 1, 0, 0, 48, 31 },
  { 3572, 3, 1, 0, 0, 48, 31 },
  { 3650, 3, 1, 0, 0, 48, 31 },
  { 3716, 3, 1, 0, 0, 47, 31 },
  { 3790, 3, 1, 0, 0, 46, 31 },
  // 1427: vload_half4, vloada_half4, 
  { 3523, 3, 1, 0, 0, 48, 31 },
  { 3575, 3, 1, 0, 0, 48, 31 },
  { 3653, 3, 1, 0, 0, 48, 31 },
  { 3719, 3, 1, 0, 0, 47, 31 },
  { 3793, 3, 1, 0, 0, 46, 31 },
  // 1432: vload_half8, vloada_half8, 
  { 3526, 3, 1, 0, 0, 48, 31 },
  { 3578, 3, 1, 0, 0, 48, 31 },
  { 3656, 3, 1, 0, 0, 48, 31 },
  { 3722, 3, 1, 0, 0, 47, 31 },
  { 3796, 3, 1, 0, 0, 46, 31 },
  // 1437: vload_half16, vloada_half16, 
  { 3529, 3, 1, 0, 0, 48, 31 },
  { 3581, 3, 1, 0, 0, 48, 31 },
  { 3659, 3, 1, 0, 0, 48, 31 },
  { 3725, 3, 1, 0, 0, 47, 31 },
  { 3801, 3, 1, 0, 0, 46, 31 },
  // 1442: vstore_half3, vstorea_half3, vstore_half3_rte, vstorea_half3_rte, vstore_half3_rtz, vstorea_half3_rtz, vstore_half3_rtp, vstorea_half3_rtp, vstore_half3_rtn, vstorea_half3_rtn, 
  { 3532, 4, 0, 0, 0, 48, 31 },
  { 3536, 4, 0, 0, 0, 48, 31 },
  { 3600, 4, 0, 0, 0, 48, 31 },
  { 3604, 4, 0, 0, 0, 48, 31 },
  { 3678, 4, 0, 0, 0, 48, 31 },
  { 3682, 4, 0, 0, 0, 48, 31 },
  { 3744, 4, 0, 0, 0, 47, 31 },
  { 3748, 4, 0, 0, 0, 47, 31 },
  // 1450: vstore_half4, vstorea_half4, vstore_half4_rte, vstorea_half4_rte, vstore_half4_rtz, vstorea_half4_rtz, vstore_half4_rtp, vstorea_half4_rtp, vstore_half4_rtn, vstorea_half4_rtn, 
  { 3540, 4, 0, 0, 0, 48, 31 },
  { 3544, 4, 0, 0, 0, 48, 31 },
  { 3608, 4, 0, 0, 0, 48, 31 },
  { 3612, 4, 0, 0, 0, 48, 31 },
  { 3686, 4, 0, 0, 0, 48, 31 },
  { 3690, 4, 0, 0, 0, 48, 31 },
  { 3752, 4, 0, 0, 0, 47, 31 },
  { 3756, 4, 0, 0, 0, 47, 31 },
  // 1458: vstore_half8, vstorea_half8, vstore_half8_rte, vstorea_half8_rte, vstore_half8_rtz, vstorea_half8_rtz, vstore_half8_rtp, vstorea_half8_rtp, vstore_half8_rtn, vstorea_half8_rtn, 
  { 3548, 4, 0, 0, 0, 48, 31 },
  { 3552, 4, 0, 0, 0, 48, 31 },
  { 3616, 4, 0, 0, 0, 48, 31 },
  { 3620, 4, 0, 0, 0, 48, 31 },
  { 3694, 4, 0, 0, 0, 48, 31 },
  { 3698, 4, 0, 0, 0, 48, 31 },
  { 3760, 4, 0, 0, 0, 47, 31 },
  { 3764, 4, 0, 0, 0, 47, 31 },
  // 1466: vstore_half16, vstorea_half16, vstore_half16_rte, vstorea_half16_rte, vstore_half16_rtz, vstorea_half16_rtz, vstore_half16_rtp, vstorea_half16_rtp, vstore_half16_rtn, vstorea_half16_rtn, 
  { 3556, 4, 0, 0, 0, 48, 31 },
  { 3560, 4, 0, 0, 0, 48, 31 },
  { 3624, 4, 0, 0, 0, 48, 31 },
  { 3628, 4, 0, 0, 0, 48, 31 },
  { 3702, 4, 0, 0, 0, 48, 31 },
  { 3706, 4, 0, 0, 0, 48, 31 },
  { 3768, 4, 0, 0, 0, 47, 31 },
  { 3772, 4, 0, 0, 0, 47, 31 },
  // 1474: barrier, 
  { 3804, 2, 0, 0, 1, 46, 31 },
  // 1475: work_group_barrier, 
  { 3804, 2, 0, 0, 1, 46, 24 },
  { 3806, 3, 0, 0, 1, 46, 24 },
  // 1477: mem_fence, read_mem_fence, write_mem_fence, 
  { 3804, 2, 0, 0, 0, 46, 31 },
  // 1478: get_fence, 
  { 3809, 2, 0, 0, 0, 46, 24 },
  { 3813, 2, 0, 0, 0, 46, 24 },
  // 1480: async_work_group_copy, 
  { 3815, 5, 0, 0, 0, 46, 31 },
  { 3820, 5, 0, 0, 0, 46, 31 },
  // 1482: async_work_group_strided_copy, 
  { 3825, 6, 0, 0, 0, 46, 31 },
  { 3831, 6, 0, 0, 0, 46, 31 },
  // 1484: wait_group_events, 
  { 3837, 3, 0, 0, 0, 46, 31 },
  // 1485: prefetch, 
  { 3840, 3, 0, 0, 0, 46, 31 },
  // 1486: atom_add, atom_sub, atom_xchg, 
  { 3843, 3, 0, 0, 0, 28, 31 },
  { 3852, 3, 0, 0, 0, 28, 31 },
  { 3861, 3, 0, 0, 0, 32, 31 },
  { 3870, 3, 0, 0, 0, 32, 31 },
  { 3879, 3, 0, 0, 0, 30, 31 },
  { 3888, 3, 0, 0, 0, 30, 31 },
  { 3897, 3, 0, 0, 0, 30, 31 },
  { 3906, 3, 0, 0, 0, 30, 31 },
  // 1494: atom_inc, atom_dec, 
  { 3846, 2, 0, 0, 0, 28, 31 },
  { 3855, 2, 0, 0, 0, 28, 31 },
  { 3864, 2, 0, 0, 0, 32, 31 },
  { 3873, 2, 0, 0, 0, 32, 31 },
  { 3882, 2, 0, 0, 0, 30, 31 },
  { 3891, 2, 0, 0, 0, 30, 31 },
  { 3900, 2, 0, 0, 0, 30, 31 },
  { 3909, 2, 0, 0, 0, 30, 31 },
  // 1502: atom_cmpxchg, 
  { 3848, 4, 0, 0, 0, 28, 31 },
  { 3857, 4, 0, 0, 0, 28, 31 },
  { 3866, 4, 0, 0, 0, 32, 31 },
  { 3875, 4, 0, 0, 0, 32, 31 },
  { 3884, 4, 0, 0, 0, 30, 31 },
  { 3893, 4, 0, 0, 0, 30, 31 },
  { 3902, 4, 0, 0, 0, 30, 31 },
  { 3911, 4, 0, 0, 0, 30, 31 },
  // 1510: atom_min, atom_max, atom_and, atom_or, atom_xor, 
  { 3843, 3, 0, 0, 0, 29, 31 },
  { 3852, 3, 0, 0, 0, 29, 31 },
  { 3861, 3, 0, 0, 0, 33, 31 },
  { 3870, 3, 0, 0, 0, 33, 31 },
  { 3879, 3, 0, 0, 0, 31, 31 },
  { 3888, 3, 0, 0, 0, 31, 31 },
  { 3897, 3, 0, 0, 0, 31, 31 },
  { 3906, 3, 0, 0, 0, 31, 31 },
  // 1518: atomic_xchg, 
  { 3915, 3, 0, 0, 0, 46, 31 },
  { 3843, 3, 0, 0, 0, 46, 31 },
  { 3852, 3, 0, 0, 0, 46, 31 },
  { 3918, 3, 0, 0, 0, 46, 31 },
  { 3861, 3, 0, 0, 0, 46, 31 },
  { 3870, 3, 0, 0, 0, 46, 31 },
  { 3921, 3, 0, 0, 0, 52, 31 },
  { 3930, 3, 0, 0, 0, 52, 31 },
  // 1526: atomic_add, atomic_sub, atomic_min, atomic_max, atomic_and, atomic_or, atomic_xor, 
  { 3843, 3, 0, 0, 0, 46, 31 },
  { 3852, 3, 0, 0, 0, 46, 31 },
  { 3861, 3, 0, 0, 0, 46, 31 },
  { 3870, 3, 0, 0, 0, 46, 31 },
  { 3921, 3, 0, 0, 0, 52, 31 },
  { 3930, 3, 0, 0, 0, 52, 31 },
  // 1532: atomic_inc, atomic_dec, 
  { 3846, 2, 0, 0, 0, 46, 31 },
  { 3855, 2, 0, 0, 0, 46, 31 },
  { 3864, 2, 0, 0, 0, 46, 31 },
  { 3873, 2, 0, 0, 0, 46, 31 },
  { 3924, 2, 0, 0, 0, 52, 31 },
  { 3933, 2, 0, 0, 0, 52, 31 },
  // 1538: atomic_cmpxchg, 
  { 3848, 4, 0, 0, 0, 46, 31 },
  { 3857, 4, 0, 0, 0, 46, 31 },
  { 3866, 4, 0, 0, 0, 46, 31 },
  { 3875, 4, 0, 0, 0, 46, 31 },
  { 3926, 4, 0, 0, 0, 52, 31 },
  { 3935, 4, 0, 0, 0, 52, 31 },
  // 1544: atomic_store, 
  { 3939, 3, 0, 0, 0, 55, 24 },
  { 3993, 3, 0, 0, 0, 55, 24 },
  { 4043, 3, 0, 0, 0, 55, 24 },
  { 4097, 3, 0, 0, 0, 55, 24 },
  { 4151, 3, 0, 0, 0, 55, 24 },
  { 4203, 3, 0, 0, 0, 55, 24 },
  { 4285, 3, 0, 0, 0, 57, 24 },
  { 4369, 3, 0, 0, 0, 57, 24 },
  { 4453, 3, 0, 0, 0, 57, 24 },
  { 4537, 3, 0, 0, 0, 57, 24 },
  { 4621, 3, 0, 0, 0, 57, 24 },
  { 4709, 3, 0, 0, 0, 57, 24 },
  { 4831, 3, 0, 0, 0, 57, 24 },
  { 4915, 3, 0, 0, 0, 57, 24 },
  { 4999, 3, 0, 0, 0, 57, 24 },
  { 5083, 3, 0, 0, 0, 57, 24 },
  { 5167, 3, 0, 0, 0, 57, 24 },
  { 5251, 3, 0, 0, 0, 57, 24 },
  { 5377, 3, 0, 0, 0, 59, 24 },
  { 5422, 3, 0, 0, 0, 73, 24 },
  { 5467, 3, 0, 0, 0, 87, 24 },
  // 1565: atomic_store_explicit, 
  { 3942, 4, 0, 0, 0, 56, 24 },
  { 3946, 5, 0, 0, 0, 47, 24 },
  { 3996, 4, 0, 0, 0, 56, 24 },
  { 4000, 5, 0, 0, 0, 47, 24 },
  { 4048, 4, 0, 0, 0, 56, 24 },
  { 4052, 5, 0, 0, 0, 47, 24 },
  { 4100, 4, 0, 0, 0, 56, 24 },
  { 4104, 5, 0, 0, 0, 47, 24 },
  { 4154, 4, 0, 0, 0, 56, 24 },
  { 4158, 5, 0, 0, 0, 47, 24 },
  { 4206, 4, 0, 0, 0, 56, 24 },
  { 4212, 5, 0, 0, 0, 47, 24 },
  { 4288, 4, 0, 0, 0, 58, 24 },
  { 4292, 5, 0, 0, 0, 48, 24 },
  { 4372, 4, 0, 0, 0, 58, 24 },
  { 4376, 5, 0, 0, 0, 48, 24 },
  { 4456, 4, 0, 0, 0, 58, 24 },
  { 4460, 5, 0, 0, 0, 48, 24 },
  { 4540, 4, 0, 0, 0, 58, 24 },
  { 4544, 5, 0, 0, 0, 48, 24 },
  { 4624, 4, 0, 0, 0, 58, 24 },
  { 4628, 5, 0, 0, 0, 48, 24 },
  { 4712, 4, 0, 0, 0, 58, 24 },
  { 4716, 5, 0, 0, 0, 48, 24 },
  { 4834, 4, 0, 0, 0, 58, 24 },
  { 4838, 5, 0, 0, 0, 48, 24 },
  { 4918, 4, 0, 0, 0, 58, 24 },
  { 4922, 5, 0, 0, 0, 48, 24 },
  { 5002, 4, 0, 0, 0, 58, 24 },
  { 5006, 5, 0, 0, 0, 48, 24 },
  { 5086, 4, 0, 0, 0, 58, 24 },
  { 5090, 5, 0, 0, 0, 48, 24 },
  { 5170, 4, 0, 0, 0, 58, 24 },
  { 5174, 5, 0, 0, 0, 48, 24 },
  { 5254, 4, 0, 0, 0, 58, 24 },
  { 5258, 5, 0, 0, 0, 48, 24 },
  { 5380, 4, 0, 0, 0, 60, 24 },
  { 5384, 5, 0, 0, 0, 8, 24 },
  { 5425, 4, 0, 0, 0, 74, 24 },
  { 5429, 5, 0, 0, 0, 11, 24 },
  { 5470, 4, 0, 0, 0, 88, 24 },
  { 5474, 5, 0, 0, 0, 5, 24 },
  // 1607: atomic_init, 
  { 3939, 3, 0, 0, 0, 46, 24 },
  { 3993, 3, 0, 0, 0, 46, 24 },
  { 4043, 3, 0, 0, 0, 46, 24 },
  { 4097, 3, 0, 0, 0, 46, 24 },
  { 4151, 3, 0, 0, 0, 46, 24 },
  { 4203, 3, 0, 0, 0, 46, 24 },
  { 4285, 3, 0, 0, 0, 46, 24 },
  { 4369, 3, 0, 0, 0, 46, 24 },
  { 4453, 3, 0, 0, 0, 46, 24 },
  { 4537, 3, 0, 0, 0, 46, 24 },
  { 4621, 3, 0, 0, 0, 46, 24 },
  { 4709, 3, 0, 0, 0, 46, 24 },
  { 4831, 3, 0, 0, 0, 46, 24 },
  { 4915, 3, 0, 0, 0, 46, 24 },
  { 4999, 3, 0, 0, 0, 46, 24 },
  { 5083, 3, 0, 0, 0, 46, 24 },
  { 5167, 3, 0, 0, 0, 46, 24 },
  { 5251, 3, 0, 0, 0, 46, 24 },
  // 1625: atomic_compare_exchange_weak, atomic_compare_exchange_strong, 
  { 3951, 4, 0, 0, 0, 55, 24 },
  { 4026, 4, 0, 0, 0, 55, 24 },
  { 4078, 4, 0, 0, 0, 55, 24 },
  { 4132, 4, 0, 0, 0, 55, 24 },
  { 4186, 4, 0, 0, 0, 55, 24 },
  { 4238, 4, 0, 0, 0, 55, 24 },
  { 4318, 4, 0, 0, 0, 57, 24 },
  { 4335, 4, 0, 0, 0, 57, 24 },
  { 4352, 4, 0, 0, 0, 57, 24 },
  { 4402, 4, 0, 0, 0, 57, 24 },
  { 4419, 4, 0, 0, 0, 57, 24 },
  { 4436, 4, 0, 0, 0, 57, 24 },
  { 4486, 4, 0, 0, 0, 57, 24 },
  { 4503, 4, 0, 0, 0, 57, 24 },
  { 4520, 4, 0, 0, 0, 57, 24 },
  { 4570, 4, 0, 0, 0, 57, 24 },
  { 4587, 4, 0, 0, 0, 57, 24 },
  { 4604, 4, 0, 0, 0, 57, 24 },
  { 4654, 4, 0, 0, 0, 57, 24 },
  { 4671, 4, 0, 0, 0, 57, 24 },
  { 4690, 4, 0, 0, 0, 57, 24 },
  { 4744, 4, 0, 0, 0, 57, 24 },
  { 4761, 4, 0, 0, 0, 57, 24 },
  { 4778, 4, 0, 0, 0, 57, 24 },
  { 4864, 4, 0, 0, 0, 57, 24 },
  { 4881, 4, 0, 0, 0, 57, 24 },
  { 4898, 4, 0, 0, 0, 57, 24 },
  { 4948, 4, 0, 0, 0, 57, 24 },
  { 4965, 4, 0, 0, 0, 57, 24 },
  { 4982, 4, 0, 0, 0, 57, 24 },
  { 5032, 4, 0, 0, 0, 57, 24 },
  { 5049, 4, 0, 0, 0, 57, 24 },
  { 5066, 4, 0, 0, 0, 57, 24 },
  { 5116, 4, 0, 0, 0, 57, 24 },
  { 5133, 4, 0, 0, 0, 57, 24 },
  { 5150, 4, 0, 0, 0, 57, 24 },
  { 5200, 4, 0, 0, 0, 57, 24 },
  { 5217, 4, 0, 0, 0, 57, 24 },
  { 5234, 4, 0, 0, 0, 57, 24 },
  { 5284, 4, 0, 0, 0, 57, 24 },
  { 5301, 4, 0, 0, 0, 57, 24 },
  { 5320, 4, 0, 0, 0, 57, 24 },
  // 1667: atomic_compare_exchange_weak_explicit, atomic_compare_exchange_strong_explicit, 
  { 3955, 6, 0, 0, 0, 56, 24 },
  { 3961, 7, 0, 0, 0, 47, 24 },
  { 4030, 6, 0, 0, 0, 56, 24 },
  { 4036, 7, 0, 0, 0, 47, 24 },
  { 4084, 6, 0, 0, 0, 56, 24 },
  { 4090, 7, 0, 0, 0, 47, 24 },
  { 4136, 6, 0, 0, 0, 56, 24 },
  { 4142, 7, 0, 0, 0, 47, 24 },
  { 4190, 6, 0, 0, 0, 56, 24 },
  { 4196, 7, 0, 0, 0, 47, 24 },
  { 4242, 6, 0, 0, 0, 56, 24 },
  { 4248, 7, 0, 0, 0, 47, 24 },
  { 4322, 6, 0, 0, 0, 58, 24 },
  { 4328, 7, 0, 0, 0, 48, 24 },
  { 4339, 6, 0, 0, 0, 58, 24 },
  { 4345, 7, 0, 0, 0, 48, 24 },
  { 4356, 6, 0, 0, 0, 58, 24 },
  { 4362, 7, 0, 0, 0, 48, 24 },
  { 4406, 6, 0, 0, 0, 58, 24 },
  { 4412, 7, 0, 0, 0, 48, 24 },
  { 4423, 6, 0, 0, 0, 58, 24 },
  { 4429, 7, 0, 0, 0, 48, 24 },
  { 4440, 6, 0, 0, 0, 58, 24 },
  { 4446, 7, 0, 0, 0, 48, 24 },
  { 4490, 6, 0, 0, 0, 58, 24 },
  { 4496, 7, 0, 0, 0, 48, 24 },
  { 4507, 6, 0, 0, 0, 58, 24 },
  { 4513, 7, 0, 0, 0, 48, 24 },
  { 4524, 6, 0, 0, 0, 58, 24 },
  { 4530, 7, 0, 0, 0, 48, 24 },
  { 4574, 6, 0, 0, 0, 58, 24 },
  { 4580, 7, 0, 0, 0, 48, 24 },
  { 4591, 6, 0, 0, 0, 58, 24 },
  { 4597, 7, 0, 0, 0, 48, 24 },
  { 4608, 6, 0, 0, 0, 58, 24 },
  { 4614, 7, 0, 0, 0, 48, 24 },
  { 4658, 6, 0, 0, 0, 58, 24 },
  { 4664, 7, 0, 0, 0, 48, 24 },
  { 4675, 6, 0, 0, 0, 58, 24 },
  { 4681, 7, 0, 0, 0, 48, 24 },
  { 4694, 6, 0, 0, 0, 58, 24 },
  { 4700, 7, 0, 0, 0, 48, 24 },
  { 4748, 6, 0, 0, 0, 58, 24 },
  { 4754, 7, 0, 0, 0, 48, 24 },
  { 4765, 6, 0, 0, 0, 58, 24 },
  { 4771, 7, 0, 0, 0, 48, 24 },
  { 4782, 6, 0, 0, 0, 58, 24 },
  { 4790, 7, 0, 0, 0, 48, 24 },
  { 4868, 6, 0, 0, 0, 58, 24 },
  { 4874, 7, 0, 0, 0, 48, 24 },
  { 4885, 6, 0, 0, 0, 58, 24 },
  { 4891, 7, 0, 0, 0, 48, 24 },
  { 4902, 6, 0, 0, 0, 58, 24 },
  { 4908, 7, 0, 0, 0, 48, 24 },
  { 4952, 6, 0, 0, 0, 58, 24 },
  { 4958, 7, 0, 0, 0, 48, 24 },
  { 4969, 6, 0, 0, 0, 58, 24 },
  { 4975, 7, 0, 0, 0, 48, 24 },
  { 4986, 6, 0, 0, 0, 58, 24 },
  { 4992, 7, 0, 0, 0, 48, 24 },
  { 5036, 6, 0, 0, 0, 58, 24 },
  { 5042, 7, 0, 0, 0, 48, 24 },
  { 5053, 6, 0, 0, 0, 58, 24 },
  { 5059, 7, 0, 0, 0, 48, 24 },
  { 5070, 6, 0, 0, 0, 58, 24 },
  { 5076, 7, 0, 0, 0, 48, 24 },
  { 5120, 6, 0, 0, 0, 58, 24 },
  { 5126, 7, 0, 0, 0, 48, 24 },
  { 5137, 6, 0, 0, 0, 58, 24 },
  { 5143, 7, 0, 0, 0, 48, 24 },
  { 5154, 6, 0, 0, 0, 58, 24 },
  { 5160, 7, 0, 0, 0, 48, 24 },
  { 5204, 6, 0, 0, 0, 58, 24 },
  { 5210, 7, 0, 0, 0, 48, 24 },
  { 5221, 6, 0, 0, 0, 58, 24 },
  { 5227, 7, 0, 0, 0, 48, 24 },
  { 5238, 6, 0, 0, 0, 58, 24 },
  { 5244, 7, 0, 0, 0, 48, 24 },
  { 5288, 6, 0, 0, 0, 58, 24 },
  { 5294, 7, 0, 0, 0, 48, 24 },
  { 5305, 6, 0, 0, 0, 58, 24 },
  { 5313, 7, 0, 0, 0, 48, 24 },
  { 5324, 6, 0, 0, 0, 58, 24 },
  { 5330, 7, 0, 0, 0, 48, 24 },
  // 1751: atomic_work_item_fence, 
  { 3968, 4, 0, 0, 0, 46, 24 },
  // 1752: atomic_load, 
  { 3972, 2, 0, 0, 0, 55, 24 },
  { 4005, 2, 0, 0, 0, 55, 24 },
  { 4057, 2, 0, 0, 0, 55, 24 },
  { 4109, 2, 0, 0, 0, 55, 24 },
  { 4163, 2, 0, 0, 0, 55, 24 },
  { 4217, 2, 0, 0, 0, 55, 24 },
  { 4297, 2, 0, 0, 0, 57, 24 },
  { 4381, 2, 0, 0, 0, 57, 24 },
  { 4465, 2, 0, 0, 0, 57, 24 },
  { 4549, 2, 0, 0, 0, 57, 24 },
  { 4633, 2, 0, 0, 0, 57, 24 },
  { 4721, 2, 0, 0, 0, 57, 24 },
  { 4843, 2, 0, 0, 0, 57, 24 },
  { 4927, 2, 0, 0, 0, 57, 24 },
  { 5011, 2, 0, 0, 0, 57, 24 },
  { 5095, 2, 0, 0, 0, 57, 24 },
  { 5179, 2, 0, 0, 0, 57, 24 },
  { 5263, 2, 0, 0, 0, 57, 24 },
  { 5389, 2, 0, 0, 0, 59, 24 },
  { 5434, 2, 0, 0, 0, 73, 24 },
  { 5479, 2, 0, 0, 0, 87, 24 },
  // 1773: atomic_load_explicit, 
  { 3974, 3, 0, 0, 0, 56, 24 },
  { 3977, 4, 0, 0, 0, 47, 24 },
  { 4007, 3, 0, 0, 0, 56, 24 },
  { 4010, 4, 0, 0, 0, 47, 24 },
  { 4059, 3, 0, 0, 0, 56, 24 },
  { 4062, 4, 0, 0, 0, 47, 24 },
  { 4113, 3, 0, 0, 0, 56, 24 },
  { 4116, 4, 0, 0, 0, 47, 24 },
  { 4165, 3, 0, 0, 0, 56, 24 },
  { 4168, 4, 0, 0, 0, 47, 24 },
  { 4219, 3, 0, 0, 0, 56, 24 },
  { 4222, 4, 0, 0, 0, 47, 24 },
  { 4299, 3, 0, 0, 0, 58, 24 },
  { 4302, 4, 0, 0, 0, 48, 24 },
  { 4383, 3, 0, 0, 0, 58, 24 },
  { 4386, 4, 0, 0, 0, 48, 24 },
  { 4467, 3, 0, 0, 0, 58, 24 },
  { 4470, 4, 0, 0, 0, 48, 24 },
  { 4551, 3, 0, 0, 0, 58, 24 },
  { 4554, 4, 0, 0, 0, 48, 24 },
  { 4635, 3, 0, 0, 0, 58, 24 },
  { 4638, 4, 0, 0, 0, 48, 24 },
  { 4723, 3, 0, 0, 0, 58, 24 },
  { 4726, 4, 0, 0, 0, 48, 24 },
  { 4845, 3, 0, 0, 0, 58, 24 },
  { 4848, 4, 0, 0, 0, 48, 24 },
  { 4929, 3, 0, 0, 0, 58, 24 },
  { 4932, 4, 0, 0, 0, 48, 24 },
  { 5013, 3, 0, 0, 0, 58, 24 },
  { 5016, 4, 0, 0, 0, 48, 24 },
  { 5097, 3, 0, 0, 0, 58, 24 },
  { 5100, 4, 0, 0, 0, 48, 24 },
  { 5181, 3, 0, 0, 0, 58, 24 },
  { 5184, 4, 0, 0, 0, 48, 24 },
  { 5265, 3, 0, 0, 0, 58, 24 },
  { 5268, 4, 0, 0, 0, 48, 24 },
  { 5391, 3, 0, 0, 0, 60, 24 },
  { 5394, 4, 0, 0, 0, 8, 24 },
  { 5436, 3, 0, 0, 0, 74, 24 },
  { 5439, 4, 0, 0, 0, 11, 24 },
  { 5481, 3, 0, 0, 0, 88, 24 },
  { 5484, 4, 0, 0, 0, 5, 24 },
  // 1815: atomic_exchange, atomic_fetch_min, atomic_fetch_max, 
  { 3981, 3, 0, 0, 0, 55, 24 },
  { 4014, 3, 0, 0, 0, 55, 24 },
  { 4066, 3, 0, 0, 0, 55, 24 },
  { 4120, 3, 0, 0, 0, 55, 24 },
  { 4172, 3, 0, 0, 0, 55, 24 },
  { 4226, 3, 0, 0, 0, 55, 24 },
  { 4306, 3, 0, 0, 0, 57, 24 },
  { 4390, 3, 0, 0, 0, 57, 24 },
  { 4474, 3, 0, 0, 0, 57, 24 },
  { 4558, 3, 0, 0, 0, 57, 24 },
  { 4642, 3, 0, 0, 0, 57, 24 },
  { 4730, 3, 0, 0, 0, 57, 24 },
  { 4852, 3, 0, 0, 0, 57, 24 },
  { 4936, 3, 0, 0, 0, 57, 24 },
  { 5020, 3, 0, 0, 0, 57, 24 },
  { 5104, 3, 0, 0, 0, 57, 24 },
  { 5188, 3, 0, 0, 0, 57, 24 },
  { 5272, 3, 0, 0, 0, 57, 24 },
  { 5398, 3, 0, 0, 0, 59, 24 },
  { 5443, 3, 0, 0, 0, 73, 24 },
  { 5488, 3, 0, 0, 0, 87, 24 },
  // 1836: atomic_exchange_explicit, atomic_fetch_min_explicit, atomic_fetch_max_explicit, 
  { 3984, 4, 0, 0, 0, 56, 24 },
  { 3988, 5, 0, 0, 0, 47, 24 },
  { 4017, 4, 0, 0, 0, 56, 24 },
  { 4021, 5, 0, 0, 0, 47, 24 },
  { 4069, 4, 0, 0, 0, 56, 24 },
  { 4073, 5, 0, 0, 0, 47, 24 },
  { 4123, 4, 0, 0, 0, 56, 24 },
  { 4127, 5, 0, 0, 0, 47, 24 },
  { 4175, 4, 0, 0, 0, 56, 24 },
  { 4181, 5, 0, 0, 0, 47, 24 },
  { 4229, 4, 0, 0, 0, 56, 24 },
  { 4233, 5, 0, 0, 0, 47, 24 },
  { 4309, 4, 0, 0, 0, 58, 24 },
  { 4313, 5, 0, 0, 0, 48, 24 },
  { 4393, 4, 0, 0, 0, 58, 24 },
  { 4397, 5, 0, 0, 0, 48, 24 },
  { 4477, 4, 0, 0, 0, 58, 24 },
  { 4481, 5, 0, 0, 0, 48, 24 },
  { 4561, 4, 0, 0, 0, 58, 24 },
  { 4565, 5, 0, 0, 0, 48, 24 },
  { 4645, 4, 0, 0, 0, 58, 24 },
  { 4649, 5, 0, 0, 0, 48, 24 },
  { 4735, 4, 0, 0, 0, 58, 24 },
  { 4739, 5, 0, 0, 0, 48, 24 },
  { 4855, 4, 0, 0, 0, 58, 24 },
  { 4859, 5, 0, 0, 0, 48, 24 },
  { 4939, 4, 0, 0, 0, 58, 24 },
  { 4943, 5, 0, 0, 0, 48, 24 },
  { 5023, 4, 0, 0, 0, 58, 24 },
  { 5027, 5, 0, 0, 0, 48, 24 },
  { 5107, 4, 0, 0, 0, 58, 24 },
  { 5111, 5, 0, 0, 0, 48, 24 },
  { 5191, 4, 0, 0, 0, 58, 24 },
  { 5195, 5, 0, 0, 0, 48, 24 },
  { 5275, 4, 0, 0, 0, 58, 24 },
  { 5279, 5, 0, 0, 0, 48, 24 },
  { 5401, 4, 0, 0, 0, 60, 24 },
  { 5405, 5, 0, 0, 0, 8, 24 },
  { 5446, 4, 0, 0, 0, 74, 24 },
  { 5450, 5, 0, 0, 0, 11, 24 },
  { 5491, 4, 0, 0, 0, 88, 24 },
  { 5495, 5, 0, 0, 0, 5, 24 },
  // 1878: atomic_fetch_add, atomic_fetch_sub, 
  { 3981, 3, 0, 0, 0, 55, 24 },
  { 4014, 3, 0, 0, 0, 55, 24 },
  { 4066, 3, 0, 0, 0, 55, 24 },
  { 4120, 3, 0, 0, 0, 55, 24 },
  { 4255, 3, 0, 0, 0, 55, 24 },
  { 4306, 3, 0, 0, 0, 57, 24 },
  { 4390, 3, 0, 0, 0, 57, 24 },
  { 4474, 3, 0, 0, 0, 57, 24 },
  { 4558, 3, 0, 0, 0, 57, 24 },
  { 4801, 3, 0, 0, 0, 57, 24 },
  { 4852, 3, 0, 0, 0, 57, 24 },
  { 4936, 3, 0, 0, 0, 57, 24 },
  { 5020, 3, 0, 0, 0, 57, 24 },
  { 5104, 3, 0, 0, 0, 57, 24 },
  { 5343, 3, 0, 0, 0, 57, 24 },
  { 5410, 3, 0, 0, 0, 61, 24 },
  { 4642, 3, 0, 0, 0, 63, 24 },
  { 4730, 3, 0, 0, 0, 65, 24 },
  { 5455, 3, 0, 0, 0, 75, 24 },
  { 5188, 3, 0, 0, 0, 77, 24 },
  { 5272, 3, 0, 0, 0, 79, 24 },
  { 5500, 3, 0, 0, 0, 89, 24 },
  { 4172, 3, 0, 0, 0, 91, 24 },
  { 4226, 3, 0, 0, 0, 93, 24 },
  // 1902: atomic_fetch_add_explicit, atomic_fetch_sub_explicit, 
  { 3984, 4, 0, 0, 0, 56, 24 },
  { 3988, 5, 0, 0, 0, 47, 24 },
  { 4017, 4, 0, 0, 0, 56, 24 },
  { 4021, 5, 0, 0, 0, 47, 24 },
  { 4069, 4, 0, 0, 0, 56, 24 },
  { 4073, 5, 0, 0, 0, 47, 24 },
  { 4123, 4, 0, 0, 0, 56, 24 },
  { 4127, 5, 0, 0, 0, 47, 24 },
  { 4258, 4, 0, 0, 0, 56, 24 },
  { 4262, 5, 0, 0, 0, 47, 24 },
  { 4309, 4, 0, 0, 0, 58, 24 },
  { 4313, 5, 0, 0, 0, 48, 24 },
  { 4393, 4, 0, 0, 0, 58, 24 },
  { 4397, 5, 0, 0, 0, 48, 24 },
  { 4477, 4, 0, 0, 0, 58, 24 },
  { 4481, 5, 0, 0, 0, 48, 24 },
  { 4561, 4, 0, 0, 0, 58, 24 },
  { 4565, 5, 0, 0, 0, 48, 24 },
  { 4804, 4, 0, 0, 0, 58, 24 },
  { 4808, 5, 0, 0, 0, 48, 24 },
  { 4855, 4, 0, 0, 0, 58, 24 },
  { 4859, 5, 0, 0, 0, 48, 24 },
  { 4939, 4, 0, 0, 0, 58, 24 },
  { 4943, 5, 0, 0, 0, 48, 24 },
  { 5023, 4, 0, 0, 0, 58, 24 },
  { 5027, 5, 0, 0, 0, 48, 24 },
  { 5107, 4, 0, 0, 0, 58, 24 },
  { 5111, 5, 0, 0, 0, 48, 24 },
  { 5346, 4, 0, 0, 0, 58, 24 },
  { 5350, 5, 0, 0, 0, 48, 24 },
  { 5413, 4, 0, 0, 0, 62, 24 },
  { 5417, 5, 0, 0, 0, 7, 24 },
  { 4645, 4, 0, 0, 0, 64, 24 },
  { 4649, 5, 0, 0, 0, 15, 24 },
  { 4735, 4, 0, 0, 0, 66, 24 },
  { 4739, 5, 0, 0, 0, 21, 24 },
  { 5458, 4, 0, 0, 0, 76, 24 },
  { 5462, 5, 0, 0, 0, 10, 24 },
  { 5191, 4, 0, 0, 0, 78, 24 },
  { 5195, 5, 0, 0, 0, 17, 24 },
  { 5275, 4, 0, 0, 0, 80, 24 },
  { 5279, 5, 0, 0, 0, 23, 24 },
  { 5503, 4, 0, 0, 0, 90, 24 },
  { 5507, 5, 0, 0, 0, 4, 24 },
  { 4175, 4, 0, 0, 0, 92, 24 },
  { 4181, 5, 0, 0, 0, 13, 24 },
  { 4229, 4, 0, 0, 0, 94, 24 },
  { 4233, 5, 0, 0, 0, 19, 24 },
  // 1950: atomic_fetch_or, atomic_fetch_xor, atomic_fetch_and, 
  { 3981, 3, 0, 0, 0, 55, 24 },
  { 4014, 3, 0, 0, 0, 55, 24 },
  { 4066, 3, 0, 0, 0, 55, 24 },
  { 4120, 3, 0, 0, 0, 55, 24 },
  { 4306, 3, 0, 0, 0, 57, 24 },
  { 4390, 3, 0, 0, 0, 57, 24 },
  { 4474, 3, 0, 0, 0, 57, 24 },
  { 4558, 3, 0, 0, 0, 57, 24 },
  { 4852, 3, 0, 0, 0, 57, 24 },
  { 4936, 3, 0, 0, 0, 57, 24 },
  { 5020, 3, 0, 0, 0, 57, 24 },
  { 5104, 3, 0, 0, 0, 57, 24 },
  // 1962: atomic_fetch_or_explicit, atomic_fetch_xor_explicit, atomic_fetch_and_explicit, 
  { 3984, 4, 0, 0, 0, 56, 24 },
  { 3988, 5, 0, 0, 0, 47, 24 },
  { 4017, 4, 0, 0, 0, 56, 24 },
  { 4021, 5, 0, 0, 0, 47, 24 },
  { 4069, 4, 0, 0, 0, 56, 24 },
  { 4073, 5, 0, 0, 0, 47, 24 },
  { 4123, 4, 0, 0, 0, 56, 24 },
  { 4127, 5, 0, 0, 0, 47, 24 },
  { 4309, 4, 0, 0, 0, 58, 24 },
  { 4313, 5, 0, 0, 0, 48, 24 },
  { 4393, 4, 0, 0, 0, 58, 24 },
  { 4397, 5, 0, 0, 0, 48, 24 },
  { 4477, 4, 0, 0, 0, 58, 24 },
  { 4481, 5, 0, 0, 0, 48, 24 },
  { 4561, 4, 0, 0, 0, 58, 24 },
  { 4565, 5, 0, 0, 0, 48, 24 },
  { 4855, 4, 0, 0, 0, 58, 24 },
  { 4859, 5, 0, 0, 0, 48, 24 },
  { 4939, 4, 0, 0, 0, 58, 24 },
  { 4943, 5, 0, 0, 0, 48, 24 },
  { 5023, 4, 0, 0, 0, 58, 24 },
  { 5027, 5, 0, 0, 0, 48, 24 },
  { 5107, 4, 0, 0, 0, 58, 24 },
  { 5111, 5, 0, 0, 0, 48, 24 },
  // 1986: atomic_flag_clear, 
  { 4267, 2, 0, 0, 0, 55, 24 },
  { 4813, 2, 0, 0, 0, 57, 24 },
  { 5359, 2, 0, 0, 0, 57, 24 },
  // 1989: atomic_flag_clear_explicit, 
  { 4269, 3, 0, 0, 0, 56, 24 },
  { 4272, 4, 0, 0, 0, 47, 24 },
  { 4815, 3, 0, 0, 0, 58, 24 },
  { 4818, 4, 0, 0, 0, 48, 24 },
  { 5361, 3, 0, 0, 0, 58, 24 },
  { 5364, 4, 0, 0, 0, 48, 24 },
  // 1995: atomic_flag_test_and_set, 
  { 4276, 2, 0, 0, 0, 55, 24 },
  { 4822, 2, 0, 0, 0, 57, 24 },
  { 5368, 2, 0, 0, 0, 57, 24 },
  // 1998: atomic_flag_test_and_set_explicit, 
  { 4278, 3, 0, 0, 0, 56, 24 },
  { 4281, 4, 0, 0, 0, 47, 24 },
  { 4824, 3, 0, 0, 0, 58, 24 },
  { 4827, 4, 0, 0, 0, 48, 24 },
  { 5370, 3, 0, 0, 0, 58, 24 },
  { 5373, 4, 0, 0, 0, 48, 24 },
  // 2004: shuffle, 
  { 5522, 3, 0, 1, 0, 46, 31 },
  { 5525, 3, 0, 1, 0, 46, 31 },
  { 5528, 3, 0, 1, 0, 46, 31 },
  { 5531, 3, 0, 1, 0, 46, 31 },
  { 5534, 3, 0, 1, 0, 46, 31 },
  { 5537, 3, 0, 1, 0, 46, 31 },
  { 5540, 3, 0, 1, 0, 46, 31 },
  { 5543, 3, 0, 1, 0, 46, 31 },
  { 5546, 3, 0, 1, 0, 46, 31 },
  { 5551, 3, 0, 1, 0, 46, 31 },
  { 5554, 3, 0, 1, 0, 46, 31 },
  { 5557, 3, 0, 1, 0, 46, 31 },
  { 5560, 3, 0, 1, 0, 46, 31 },
  { 5563, 3, 0, 1, 0, 46, 31 },
  { 5566, 3, 0, 1, 0, 46, 31 },
  { 5569, 3, 0, 1, 0, 46, 31 },
  { 5572, 3, 0, 1, 0, 46, 31 },
  { 5575, 3, 0, 1, 0, 46, 31 },
  { 5578, 3, 0, 1, 0, 46, 31 },
  { 5581, 3, 0, 1, 0, 46, 31 },
  { 5584, 3, 0, 1, 0, 46, 31 },
  { 5587, 3, 0, 1, 0, 46, 31 },
  { 5590, 3, 0, 1, 0, 46, 31 },
  { 5593, 3, 0, 1, 0, 46, 31 },
  { 5596, 3, 0, 1, 0, 46, 31 },
  { 5599, 3, 0, 1, 0, 46, 31 },
  { 5602, 3, 0, 1, 0, 46, 31 },
  { 5605, 3, 0, 1, 0, 46, 31 },
  { 5608, 3, 0, 1, 0, 46, 31 },
  { 5611, 3, 0, 1, 0, 46, 31 },
  { 5614, 3, 0, 1, 0, 46, 31 },
  { 5617, 3, 0, 1, 0, 46, 31 },
  { 5620, 3, 0, 1, 0, 46, 31 },
  { 5623, 3, 0, 1, 0, 46, 31 },
  { 5626, 3, 0, 1, 0, 46, 31 },
  { 5629, 3, 0, 1, 0, 46, 31 },
  { 5632, 3, 0, 1, 0, 46, 31 },
  { 5635, 3, 0, 1, 0, 46, 31 },
  { 5638, 3, 0, 1, 0, 46, 31 },
  { 5641, 3, 0, 1, 0, 46, 31 },
  { 5644, 3, 0, 1, 0, 46, 31 },
  { 5647, 3, 0, 1, 0, 46, 31 },
  { 5650, 3, 0, 1, 0, 46, 31 },
  { 5653, 3, 0, 1, 0, 46, 31 },
  { 5656, 3, 0, 1, 0, 46, 31 },
  { 5659, 3, 0, 1, 0, 46, 31 },
  { 5662, 3, 0, 1, 0, 46, 31 },
  { 5665, 3, 0, 1, 0, 46, 31 },
  { 5668, 3, 0, 1, 0, 46, 31 },
  { 5671, 3, 0, 1, 0, 46, 31 },
  { 5674, 3, 0, 1, 0, 46, 31 },
  { 5677, 3, 0, 1, 0, 46, 31 },
  { 5680, 3, 0, 1, 0, 46, 31 },
  { 5683, 3, 0, 1, 0, 46, 31 },
  { 5686, 3, 0, 1, 0, 46, 31 },
  { 5689, 3, 0, 1, 0, 46, 31 },
  { 5692, 3, 0, 1, 0, 46, 31 },
  { 5695, 3, 0, 1, 0, 46, 31 },
  { 5698, 3, 0, 1, 0, 46, 31 },
  { 5701, 3, 0, 1, 0, 46, 31 },
  { 5704, 3, 0, 1, 0, 46, 31 },
  { 5707, 3, 0, 1, 0, 46, 31 },
  { 5710, 3, 0, 1, 0, 46, 31 },
  { 5713, 3, 0, 1, 0, 46, 31 },
  { 5716, 3, 0, 1, 0, 46, 31 },
  { 5719, 3, 0, 1, 0, 46, 31 },
  { 5722, 3, 0, 1, 0, 46, 31 },
  { 5725, 3, 0, 1, 0, 46, 31 },
  { 5728, 3, 0, 1, 0, 46, 31 },
  { 5731, 3, 0, 1, 0, 46, 31 },
  { 5734, 3, 0, 1, 0, 46, 31 },
  { 5737, 3, 0, 1, 0, 46, 31 },
  { 5740, 3, 0, 1, 0, 46, 31 },
  { 5743, 3, 0, 1, 0, 46, 31 },
  { 5746, 3, 0, 1, 0, 46, 31 },
  { 5749, 3, 0, 1, 0, 46, 31 },
  { 5752, 3, 0, 1, 0, 46, 31 },
  { 5755, 3, 0, 1, 0, 46, 31 },
  { 5758, 3, 0, 1, 0, 46, 31 },
  { 5761, 3, 0, 1, 0, 46, 31 },
  { 5764, 3, 0, 1, 0, 46, 31 },
  { 5767, 3, 0, 1, 0, 46, 31 },
  { 5770, 3, 0, 1, 0, 46, 31 },
  { 5773, 3, 0, 1, 0, 46, 31 },
  { 5776, 3, 0, 1, 0, 46, 31 },
  { 5779, 3, 0, 1, 0, 46, 31 },
  { 5782, 3, 0, 1, 0, 46, 31 },
  { 5785, 3, 0, 1, 0, 46, 31 },
  { 5788, 3, 0, 1, 0, 46, 31 },
  { 5791, 3, 0, 1, 0, 46, 31 },
  { 5794, 3, 0, 1, 0, 46, 31 },
  { 5797, 3, 0, 1, 0, 46, 31 },
  { 5800, 3, 0, 1, 0, 46, 31 },
  { 5803, 3, 0, 1, 0, 46, 31 },
  { 5806, 3, 0, 1, 0, 46, 31 },
  { 5809, 3, 0, 1, 0, 46, 31 },
  { 5812, 3, 0, 1, 0, 46, 31 },
  { 5815, 3, 0, 1, 0, 46, 31 },
  { 5818, 3, 0, 1, 0, 46, 31 },
  { 5821, 3, 0, 1, 0, 46, 31 },
  { 5824, 3, 0, 1, 0, 46, 31 },
  { 5827, 3, 0, 1, 0, 46, 31 },
  { 5830, 3, 0, 1, 0, 46, 31 },
  { 5833, 3, 0, 1, 0, 46, 31 },
  { 5836, 3, 0, 1, 0, 46, 31 },
  { 5839, 3, 0, 1, 0, 46, 31 },
  { 5842, 3, 0, 1, 0, 46, 31 },
  { 5845, 3, 0, 1, 0, 46, 31 },
  { 5848, 3, 0, 1, 0, 46, 31 },
  { 5851, 3, 0, 1, 0, 46, 31 },
  { 5854, 3, 0, 1, 0, 46, 31 },
  { 5857, 3, 0, 1, 0, 46, 31 },
  { 5860, 3, 0, 1, 0, 46, 31 },
  { 5863, 3, 0, 1, 0, 46, 31 },
  { 5866, 3, 0, 1, 0, 46, 31 },
  { 5869, 3, 0, 1, 0, 46, 31 },
  { 5872, 3, 0, 1, 0, 46, 31 },
  { 5875, 3, 0, 1, 0, 46, 31 },
  { 5878, 3, 0, 1, 0, 46, 31 },
  { 5881, 3, 0, 1, 0, 46, 31 },
  { 5884, 3, 0, 1, 0, 46, 31 },
  { 5887, 3, 0, 1, 0, 46, 31 },
  { 5890, 3, 0, 1, 0, 46, 31 },
  { 5893, 3, 0, 1, 0, 46, 31 },
  { 5896, 3, 0, 1, 0, 46, 31 },
  { 5899, 3, 0, 1, 0, 46, 31 },
  { 5902, 3, 0, 1, 0, 46, 31 },
  { 5905, 3, 0, 1, 0, 46, 31 },
  { 5908, 3, 0, 1, 0, 46, 31 },
  { 5911, 3, 0, 1, 0, 46, 31 },
  { 5914, 3, 0, 1, 0, 46, 31 },
  { 5917, 3, 0, 1, 0, 46, 31 },
  { 5920, 3, 0, 1, 0, 46, 31 },
  { 5923, 3, 0, 1, 0, 46, 31 },
  { 5926, 3, 0, 1, 0, 46, 31 },
  { 5929, 3, 0, 1, 0, 46, 31 },
  { 5932, 3, 0, 1, 0, 46, 31 },
  { 5935, 3, 0, 1, 0, 46, 31 },
  { 5938, 3, 0, 1, 0, 46, 31 },
  { 5941, 3, 0, 1, 0, 46, 31 },
  { 5944, 3, 0, 1, 0, 46, 31 },
  { 5947, 3, 0, 1, 0, 46, 31 },
  { 5950, 3, 0, 1, 0, 46, 31 },
  { 5953, 3, 0, 1, 0, 46, 31 },
  { 5956, 3, 0, 1, 0, 46, 31 },
  { 5959, 3, 0, 1, 0, 46, 31 },
  { 5962, 3, 0, 1, 0, 46, 31 },
  { 5965, 3, 0, 1, 0, 46, 31 },
  { 5968, 3, 0, 1, 0, 46, 31 },
  { 5971, 3, 0, 1, 0, 46, 31 },
  { 5974, 3, 0, 1, 0, 46, 31 },
  { 5977, 3, 0, 1, 0, 46, 31 },
  { 5980, 3, 0, 1, 0, 46, 31 },
  { 5983, 3, 0, 1, 0, 46, 31 },
  { 5986, 3, 0, 1, 0, 46, 31 },
  { 5989, 3, 0, 1, 0, 46, 31 },
  { 5992, 3, 0, 1, 0, 46, 31 },
  { 5995, 3, 0, 1, 0, 46, 31 },
  { 5998, 3, 0, 1, 0, 46, 31 },
  { 6001, 3, 0, 1, 0, 46, 31 },
  { 6004, 3, 0, 1, 0, 46, 31 },
  { 6007, 3, 0, 1, 0, 46, 31 },
  { 6010, 3, 0, 1, 0, 46, 31 },
  { 6013, 3, 0, 1, 0, 46, 31 },
  { 6016, 3, 0, 1, 0, 46, 31 },
  { 6019, 3, 0, 1, 0, 46, 31 },
  { 6022, 3, 0, 1, 0, 46, 31 },
  { 6025, 3, 0, 1, 0, 46, 31 },
  { 6028, 3, 0, 1, 0, 46, 31 },
  { 6031, 3, 0, 1, 0, 46, 31 },
  { 6034, 3, 0, 1, 0, 46, 31 },
  { 6037, 3, 0, 1, 0, 46, 31 },
  { 6040, 3, 0, 1, 0, 46, 31 },
  { 6043, 3, 0, 1, 0, 46, 31 },
  { 6046, 3, 0, 1, 0, 46, 31 },
  { 6049, 3, 0, 1, 0, 46, 31 },
  // 2180: shuffle2, 
  { 6052, 4, 0, 1, 0, 46, 31 },
  { 6056, 4, 0, 1, 0, 46, 31 },
  { 6060, 4, 0, 1, 0, 46, 31 },
  { 6064, 4, 0, 1, 0, 46, 31 },
  { 6068, 4, 0, 1, 0, 46, 31 },
  { 6072, 4, 0, 1, 0, 46, 31 },
  { 6076, 4, 0, 1, 0, 46, 31 },
  { 6080, 4, 0, 1, 0, 46, 31 },
  { 6084, 4, 0, 1, 0, 46, 31 },
  { 6088, 4, 0, 1, 0, 46, 31 },
  { 6092, 4, 0, 1, 0, 46, 31 },
  { 6096, 4, 0, 1, 0, 46, 31 },
  { 6100, 4, 0, 1, 0, 46, 31 },
  { 6104, 4, 0, 1, 0, 46, 31 },
  { 6108, 4, 0, 1, 0, 46, 31 },
  { 6112, 4, 0, 1, 0, 46, 31 },
  { 6116, 4, 0, 1, 0, 46, 31 },
  { 6120, 4, 0, 1, 0, 46, 31 },
  { 6124, 4, 0, 1, 0, 46, 31 },
  { 6128, 4, 0, 1, 0, 46, 31 },
  { 6132, 4, 0, 1, 0, 46, 31 },
  { 6136, 4, 0, 1, 0, 46, 31 },
  { 6140, 4, 0, 1, 0, 46, 31 },
  { 6144, 4, 0, 1, 0, 46, 31 },
  { 6148, 4, 0, 1, 0, 46, 31 },
  { 6152, 4, 0, 1, 0, 46, 31 },
  { 6156, 4, 0, 1, 0, 46, 31 },
  { 6160, 4, 0, 1, 0, 46, 31 },
  { 6164, 4, 0, 1, 0, 46, 31 },
  { 6168, 4, 0, 1, 0, 46, 31 },
  { 6172, 4, 0, 1, 0, 46, 31 },
  { 6176, 4, 0, 1, 0, 46, 31 },
  { 6180, 4, 0, 1, 0, 46, 31 },
  { 6184, 4, 0, 1, 0, 46, 31 },
  { 6188, 4, 0, 1, 0, 46, 31 },
  { 6192, 4, 0, 1, 0, 46, 31 },
  { 6196, 4, 0, 1, 0, 46, 31 },
  { 6200, 4, 0, 1, 0, 46, 31 },
  { 6204, 4, 0, 1, 0, 46, 31 },
  { 6208, 4, 0, 1, 0, 46, 31 },
  { 6212, 4, 0, 1, 0, 46, 31 },
  { 6216, 4, 0, 1, 0, 46, 31 },
  { 6220, 4, 0, 1, 0, 46, 31 },
  { 6224, 4, 0, 1, 0, 46, 31 },
  { 6228, 4, 0, 1, 0, 46, 31 },
  { 6232, 4, 0, 1, 0, 46, 31 },
  { 6236, 4, 0, 1, 0, 46, 31 },
  { 6240, 4, 0, 1, 0, 46, 31 },
  { 6244, 4, 0, 1, 0, 46, 31 },
  { 6248, 4, 0, 1, 0, 46, 31 },
  { 6252, 4, 0, 1, 0, 46, 31 },
  { 6256, 4, 0, 1, 0, 46, 31 },
  { 6260, 4, 0, 1, 0, 46, 31 },
  { 6264, 4, 0, 1, 0, 46, 31 },
  { 6268, 4, 0, 1, 0, 46, 31 },
  { 6272, 4, 0, 1, 0, 46, 31 },
  { 6276, 4, 0, 1, 0, 46, 31 },
  { 6280, 4, 0, 1, 0, 46, 31 },
  { 6284, 4, 0, 1, 0, 46, 31 },
  { 6288, 4, 0, 1, 0, 46, 31 },
  { 6292, 4, 0, 1, 0, 46, 31 },
  { 6296, 4, 0, 1, 0, 46, 31 },
  { 6300, 4, 0, 1, 0, 46, 31 },
  { 6304, 4, 0, 1, 0, 46, 31 },
  { 6308, 4, 0, 1, 0, 46, 31 },
  { 6312, 4, 0, 1, 0, 46, 31 },
  { 6316, 4, 0, 1, 0, 46, 31 },
  { 6320, 4, 0, 1, 0, 46, 31 },
  { 6324, 4, 0, 1, 0, 46, 31 },
  { 6328, 4, 0, 1, 0, 46, 31 },
  { 6332, 4, 0, 1, 0, 46, 31 },
  { 6336, 4, 0, 1, 0, 46, 31 },
  { 6340, 4, 0, 1, 0, 46, 31 },
  { 6344, 4, 0, 1, 0, 46, 31 },
  { 6348, 4, 0, 1, 0, 46, 31 },
  { 6352, 4, 0, 1, 0, 46, 31 },
  { 6356, 4, 0, 1, 0, 46, 31 },
  { 6360, 4, 0, 1, 0, 46, 31 },
  { 6364, 4, 0, 1, 0, 46, 31 },
  { 6368, 4, 0, 1, 0, 46, 31 },
  { 6372, 4, 0, 1, 0, 46, 31 },
  { 6376, 4, 0, 1, 0, 46, 31 },
  { 6380, 4, 0, 1, 0, 46, 31 },
  { 6386, 4, 0, 1, 0, 46, 31 },
  { 6390, 4, 0, 1, 0, 46, 31 },
  { 6394, 4, 0, 1, 0, 46, 31 },
  { 6398, 4, 0, 1, 0, 46, 31 },
  { 6402, 4, 0, 1, 0, 46, 31 },
  { 6406, 4, 0, 1, 0, 46, 31 },
  { 6410, 4, 0, 1, 0, 46, 31 },
  { 6414, 4, 0, 1, 0, 46, 31 },
  { 6418, 4, 0, 1, 0, 46, 31 },
  { 6422, 4, 0, 1, 0, 46, 31 },
  { 6428, 4, 0, 1, 0, 46, 31 },
  { 6432, 4, 0, 1, 0, 46, 31 },
  { 6436, 4, 0, 1, 0, 46, 31 },
  { 6440, 4, 0, 1, 0, 46, 31 },
  { 6444, 4, 0, 1, 0, 46, 31 },
  { 6448, 4, 0, 1, 0, 46, 31 },
  { 6452, 4, 0, 1, 0, 46, 31 },
  { 6456, 4, 0, 1, 0, 46, 31 },
  { 6460, 4, 0, 1, 0, 46, 31 },
  { 6464, 4, 0, 1, 0, 46, 31 },
  { 6470, 4, 0, 1, 0, 46, 31 },
  { 6474, 4, 0, 1, 0, 46, 31 },
  { 6478, 4, 0, 1, 0, 46, 31 },
  { 6482, 4, 0, 1, 0, 46, 31 },
  { 6486, 4, 0, 1, 0, 46, 31 },
  { 6490, 4, 0, 1, 0, 46, 31 },
  { 6494, 4, 0, 1, 0, 46, 31 },
  { 6498, 4, 0, 1, 0, 46, 31 },
  { 6502, 4, 0, 1, 0, 46, 31 },
  { 6506, 4, 0, 1, 0, 46, 31 },
  { 6512, 4, 0, 1, 0, 46, 31 },
  { 6516, 4, 0, 1, 0, 46, 31 },
  { 6520, 4, 0, 1, 0, 46, 31 },
  { 6524, 4, 0, 1, 0, 46, 31 },
  { 6528, 4, 0, 1, 0, 46, 31 },
  { 6532, 4, 0, 1, 0, 46, 31 },
  { 6536, 4, 0, 1, 0, 46, 31 },
  { 6540, 4, 0, 1, 0, 46, 31 },
  { 6544, 4, 0, 1, 0, 46, 31 },
  { 6548, 4, 0, 1, 0, 46, 31 },
  { 6554, 4, 0, 1, 0, 46, 31 },
  { 6558, 4, 0, 1, 0, 46, 31 },
  { 6562, 4, 0, 1, 0, 46, 31 },
  { 6566, 4, 0, 1, 0, 46, 31 },
  { 6570, 4, 0, 1, 0, 46, 31 },
  { 6574, 4, 0, 1, 0, 46, 31 },
  { 6578, 4, 0, 1, 0, 46, 31 },
  { 6582, 4, 0, 1, 0, 46, 31 },
  { 6586, 4, 0, 1, 0, 46, 31 },
  { 6590, 4, 0, 1, 0, 46, 31 },
  { 6596, 4, 0, 1, 0, 46, 31 },
  { 6600, 4, 0, 1, 0, 46, 31 },
  { 6604, 4, 0, 1, 0, 46, 31 },
  { 6608, 4, 0, 1, 0, 46, 31 },
  { 6612, 4, 0, 1, 0, 46, 31 },
  { 6616, 4, 0, 1, 0, 46, 31 },
  { 6620, 4, 0, 1, 0, 46, 31 },
  { 6624, 4, 0, 1, 0, 46, 31 },
  { 6628, 4, 0, 1, 0, 46, 31 },
  { 6632, 4, 0, 1, 0, 46, 31 },
  { 6636, 4, 0, 1, 0, 46, 31 },
  { 6640, 4, 0, 1, 0, 46, 31 },
  { 6644, 4, 0, 1, 0, 46, 31 },
  { 6648, 4, 0, 1, 0, 46, 31 },
  { 6652, 4, 0, 1, 0, 46, 31 },
  { 6656, 4, 0, 1, 0, 46, 31 },
  { 6660, 4, 0, 1, 0, 46, 31 },
  { 6664, 4, 0, 1, 0, 46, 31 },
  { 6668, 4, 0, 1, 0, 46, 31 },
  { 6672, 4, 0, 1, 0, 46, 31 },
  { 6676, 4, 0, 1, 0, 46, 31 },
  { 6680, 4, 0, 1, 0, 46, 31 },
  { 6684, 4, 0, 1, 0, 46, 31 },
  { 6688, 4, 0, 1, 0, 46, 31 },
  { 6692, 4, 0, 1, 0, 46, 31 },
  { 6696, 4, 0, 1, 0, 46, 31 },
  { 6700, 4, 0, 1, 0, 46, 31 },
  { 6704, 4, 0, 1, 0, 46, 31 },
  { 6708, 4, 0, 1, 0, 46, 31 },
  { 6712, 4, 0, 1, 0, 46, 31 },
  { 6716, 4, 0, 1, 0, 46, 31 },
  { 6720, 4, 0, 1, 0, 46, 31 },
  { 6724, 4, 0, 1, 0, 46, 31 },
  { 6728, 4, 0, 1, 0, 46, 31 },
  { 6732, 4, 0, 1, 0, 46, 31 },
  { 6736, 4, 0, 1, 0, 46, 31 },
  { 6740, 4, 0, 1, 0, 46, 31 },
  { 6744, 4, 0, 1, 0, 46, 31 },
  { 6748, 4, 0, 1, 0, 46, 31 },
  { 6752, 4, 0, 1, 0, 46, 31 },
  { 6756, 4, 0, 1, 0, 46, 31 },
  { 6760, 4, 0, 1, 0, 46, 31 },
  { 6764, 4, 0, 1, 0, 46, 31 },
  // 2356: read_imagef, 
  { 6768, 4, 1, 0, 0, 46, 31 },
  { 6780, 4, 1, 0, 0, 46, 31 },
  { 6792, 4, 1, 0, 0, 46, 31 },
  { 6804, 4, 1, 0, 0, 46, 31 },
  { 6816, 4, 1, 0, 0, 46, 31 },
  { 6828, 4, 1, 0, 0, 46, 31 },
  { 6840, 4, 1, 0, 0, 46, 31 },
  { 6852, 4, 1, 0, 0, 46, 31 },
  { 6864, 4, 1, 0, 0, 46, 31 },
  { 6876, 4, 1, 0, 0, 46, 31 },
  { 6888, 4, 1, 0, 0, 46, 31 },
  { 6892, 4, 1, 0, 0, 46, 31 },
  { 6896, 4, 1, 0, 0, 46, 31 },
  { 6900, 4, 1, 0, 0, 46, 31 },
  { 6904, 3, 1, 0, 0, 46, 28 },
  { 6913, 3, 1, 0, 0, 46, 28 },
  { 6922, 3, 1, 0, 0, 46, 28 },
  { 6931, 3, 1, 0, 0, 46, 28 },
  { 6934, 3, 1, 0, 0, 46, 28 },
  { 6937, 3, 1, 0, 0, 46, 28 },
  { 6946, 3, 1, 0, 0, 46, 28 },
  { 6955, 3, 1, 0, 0, 46, 28 },
  { 6964, 3, 1, 0, 0, 50, 28 },
  { 6973, 3, 1, 0, 0, 50, 28 },
  { 6982, 3, 1, 0, 0, 50, 28 },
  { 6991, 3, 1, 0, 0, 50, 28 },
  { 7000, 3, 1, 0, 0, 50, 28 },
  { 7009, 3, 1, 0, 0, 50, 28 },
  { 7018, 3, 1, 0, 0, 50, 28 },
  { 7021, 3, 1, 0, 0, 50, 28 },
  { 7468, 5, 1, 0, 0, 34, 31 },
  { 7473, 6, 1, 0, 0, 34, 31 },
  { 7501, 5, 1, 0, 0, 34, 31 },
  { 7506, 6, 1, 0, 0, 34, 31 },
  { 7512, 5, 1, 0, 0, 34, 31 },
  { 7517, 6, 1, 0, 0, 34, 31 },
  { 7545, 6, 1, 0, 0, 34, 31 },
  { 7551, 5, 1, 0, 0, 34, 31 },
  { 7578, 5, 1, 0, 0, 34, 31 },
  { 7583, 6, 1, 0, 0, 34, 31 },
  { 7611, 5, 1, 0, 0, 34, 31 },
  { 7616, 6, 1, 0, 0, 34, 31 },
  { 7644, 5, 1, 0, 0, 34, 31 },
  { 7649, 6, 1, 0, 0, 34, 31 },
  { 7740, 4, 1, 0, 0, 26, 31 },
  { 7752, 4, 1, 0, 0, 26, 31 },
  { 7764, 4, 1, 0, 0, 26, 31 },
  { 7768, 4, 1, 0, 0, 26, 31 },
  { 7812, 4, 1, 0, 0, 27, 31 },
  { 7824, 4, 1, 0, 0, 27, 31 },
  { 7836, 4, 1, 0, 0, 27, 31 },
  { 7840, 4, 1, 0, 0, 27, 31 },
  // 2408: read_imagei, 
  { 6772, 4, 1, 0, 0, 46, 31 },
  { 6784, 4, 1, 0, 0, 46, 31 },
  { 6796, 4, 1, 0, 0, 46, 31 },
  { 6808, 4, 1, 0, 0, 46, 31 },
  { 6820, 4, 1, 0, 0, 46, 31 },
  { 6832, 4, 1, 0, 0, 46, 31 },
  { 6844, 4, 1, 0, 0, 46, 31 },
  { 6856, 4, 1, 0, 0, 46, 31 },
  { 6868, 4, 1, 0, 0, 46, 31 },
  { 6880, 4, 1, 0, 0, 46, 31 },
  { 6907, 3, 1, 0, 0, 46, 28 },
  { 6916, 3, 1, 0, 0, 46, 28 },
  { 6925, 3, 1, 0, 0, 46, 28 },
  { 6940, 3, 1, 0, 0, 46, 28 },
  { 6949, 3, 1, 0, 0, 46, 28 },
  { 6958, 3, 1, 0, 0, 46, 28 },
  { 6967, 3, 1, 0, 0, 50, 28 },
  { 6976, 3, 1, 0, 0, 50, 28 },
  { 6985, 3, 1, 0, 0, 50, 28 },
  { 6994, 3, 1, 0, 0, 50, 28 },
  { 7003, 3, 1, 0, 0, 50, 28 },
  { 7012, 3, 1, 0, 0, 50, 28 },
  { 7479, 5, 1, 0, 0, 34, 31 },
  { 7484, 6, 1, 0, 0, 34, 31 },
  { 7523, 5, 1, 0, 0, 34, 31 },
  { 7528, 6, 1, 0, 0, 34, 31 },
  { 7556, 6, 1, 0, 0, 34, 31 },
  { 7562, 5, 1, 0, 0, 34, 31 },
  { 7589, 5, 1, 0, 0, 34, 31 },
  { 7594, 6, 1, 0, 0, 34, 31 },
  { 7622, 5, 1, 0, 0, 34, 31 },
  { 7627, 6, 1, 0, 0, 34, 31 },
  { 7744, 4, 1, 0, 0, 26, 31 },
  { 7756, 4, 1, 0, 0, 26, 31 },
  { 7816, 4, 1, 0, 0, 27, 31 },
  { 7828, 4, 1, 0, 0, 27, 31 },
  // 2444: read_imageui, 
  { 6776, 4, 1, 0, 0, 46, 31 },
  { 6788, 4, 1, 0, 0, 46, 31 },
  { 6800, 4, 1, 0, 0, 46, 31 },
  { 6812, 4, 1, 0, 0, 46, 31 },
  { 6824, 4, 1, 0, 0, 46, 31 },
  { 6836, 4, 1, 0, 0, 46, 31 },
  { 6848, 4, 1, 0, 0, 46, 31 },
  { 6860, 4, 1, 0, 0, 46, 31 },
  { 6872, 4, 1, 0, 0, 46, 31 },
  { 6884, 4, 1, 0, 0, 46, 31 },
  { 6910, 3, 1, 0, 0, 46, 28 },
  { 6919, 3, 1, 0, 0, 46, 28 },
  { 6928, 3, 1, 0, 0, 46, 28 },
  { 6943, 3, 1, 0, 0, 46, 28 },
  { 6952, 3, 1, 0, 0, 46, 28 },
  { 6961, 3, 1, 0, 0, 46, 28 },
  { 6970, 3, 1, 0, 0, 50, 28 },
  { 6979, 3, 1, 0, 0, 50, 28 },
  { 6988, 3, 1, 0, 0, 50, 28 },
  { 6997, 3, 1, 0, 0, 50, 28 },
  { 7006, 3, 1, 0, 0, 50, 28 },
  { 7015, 3, 1, 0, 0, 50, 28 },
  { 7490, 5, 1, 0, 0, 34, 31 },
  { 7495, 6, 1, 0, 0, 34, 31 },
  { 7534, 5, 1, 0, 0, 34, 31 },
  { 7539, 6, 1, 0, 0, 34, 31 },
  { 7567, 6, 1, 0, 0, 34, 31 },
  { 7573, 5, 1, 0, 0, 34, 31 },
  { 7600, 5, 1, 0, 0, 34, 31 },
  { 7605, 6, 1, 0, 0, 34, 31 },
  { 7633, 5, 1, 0, 0, 34, 31 },
  { 7638, 6, 1, 0, 0, 34, 31 },
  { 7748, 4, 1, 0, 0, 26, 31 },
  { 7760, 4, 1, 0, 0, 26, 31 },
  { 7820, 4, 1, 0, 0, 27, 31 },
  { 7832, 4, 1, 0, 0, 27, 31 },
  // 2480: write_imagef, 
  { 7024, 4, 0, 0, 0, 46, 31 },
  { 7036, 4, 0, 0, 0, 46, 31 },
  { 7048, 4, 0, 0, 0, 46, 31 },
  { 7060, 4, 0, 0, 0, 46, 31 },
  { 7072, 4, 0, 0, 0, 46, 31 },
  { 7084, 4, 0, 0, 0, 46, 31 },
  { 7088, 4, 0, 0, 0, 46, 31 },
  { 7092, 4, 0, 0, 0, 46, 31 },
  { 7104, 4, 0, 0, 0, 50, 31 },
  { 7116, 4, 0, 0, 0, 50, 31 },
  { 7128, 4, 0, 0, 0, 50, 31 },
  { 7140, 4, 0, 0, 0, 50, 31 },
  { 7152, 4, 0, 0, 0, 50, 31 },
  { 7164, 4, 0, 0, 0, 50, 31 },
  { 7176, 4, 0, 0, 0, 50, 31 },
  { 7180, 4, 0, 0, 0, 50, 31 },
  { 7655, 5, 0, 0, 0, 36, 31 },
  { 7670, 5, 0, 0, 0, 36, 31 },
  { 7675, 5, 0, 0, 0, 36, 31 },
  { 7690, 5, 0, 0, 0, 36, 31 },
  { 7705, 5, 0, 0, 0, 36, 31 },
  { 7720, 5, 0, 0, 0, 36, 31 },
  { 7725, 5, 0, 0, 0, 37, 31 },
  // 2503: write_imagei, 
  { 7028, 4, 0, 0, 0, 46, 31 },
  { 7040, 4, 0, 0, 0, 46, 31 },
  { 7052, 4, 0, 0, 0, 46, 31 },
  { 7064, 4, 0, 0, 0, 46, 31 },
  { 7076, 4, 0, 0, 0, 46, 31 },
  { 7096, 4, 0, 0, 0, 46, 31 },
  { 7108, 4, 0, 0, 0, 50, 31 },
  { 7120, 4, 0, 0, 0, 50, 31 },
  { 7132, 4, 0, 0, 0, 50, 31 },
  { 7144, 4, 0, 0, 0, 50, 31 },
  { 7156, 4, 0, 0, 0, 50, 31 },
  { 7168, 4, 0, 0, 0, 50, 31 },
  { 7660, 5, 0, 0, 0, 36, 31 },
  { 7680, 5, 0, 0, 0, 36, 31 },
  { 7695, 5, 0, 0, 0, 36, 31 },
  { 7710, 5, 0, 0, 0, 36, 31 },
  { 7730, 5, 0, 0, 0, 37, 31 },
  // 2520: write_imageui, 
  { 7032, 4, 0, 0, 0, 46, 31 },
  { 7044, 4, 0, 0, 0, 46, 31 },
  { 7056, 4, 0, 0, 0, 46, 31 },
  { 7068, 4, 0, 0, 0, 46, 31 },
  { 7080, 4, 0, 0, 0, 46, 31 },
  { 7100, 4, 0, 0, 0, 46, 31 },
  { 7112, 4, 0, 0, 0, 50, 31 },
  { 7124, 4, 0, 0, 0, 50, 31 },
  { 7136, 4, 0, 0, 0, 50, 31 },
  { 7148, 4, 0, 0, 0, 50, 31 },
  { 7160, 4, 0, 0, 0, 50, 31 },
  { 7172, 4, 0, 0, 0, 50, 31 },
  { 7665, 5, 0, 0, 0, 36, 31 },
  { 7685, 5, 0, 0, 0, 36, 31 },
  { 7700, 5, 0, 0, 0, 36, 31 },
  { 7715, 5, 0, 0, 0, 36, 31 },
  { 7735, 5, 0, 0, 0, 37, 31 },
  // 2537: get_image_width, get_image_channel_data_type, get_image_channel_order, 
  { 7184, 2, 0, 1, 0, 46, 31 },
  { 7196, 2, 0, 1, 0, 46, 31 },
  { 7186, 2, 0, 1, 0, 46, 31 },
  { 7188, 2, 0, 1, 0, 46, 31 },
  { 7198, 2, 0, 1, 0, 46, 31 },
  { 7200, 2, 0, 1, 0, 46, 31 },
  { 7202, 2, 0, 1, 0, 46, 31 },
  { 7204, 2, 0, 1, 0, 46, 31 },
  { 7216, 2, 0, 1, 0, 46, 31 },
  { 7220, 2, 0, 1, 0, 46, 31 },
  { 7222, 2, 0, 1, 0, 46, 31 },
  { 7224, 2, 0, 1, 0, 46, 31 },
  { 7228, 2, 0, 1, 0, 46, 31 },
  { 7230, 2, 0, 1, 0, 46, 31 },
  { 7232, 2, 0, 1, 0, 46, 31 },
  { 7236, 2, 0, 1, 0, 46, 31 },
  { 7256, 2, 0, 1, 0, 50, 31 },
  { 7260, 2, 0, 1, 0, 50, 31 },
  { 7262, 2, 0, 1, 0, 50, 31 },
  { 7264, 2, 0, 1, 0, 50, 31 },
  { 7268, 2, 0, 1, 0, 50, 31 },
  { 7270, 2, 0, 1, 0, 50, 31 },
  { 7272, 2, 0, 1, 0, 50, 31 },
  { 7274, 2, 0, 1, 0, 50, 31 },
  { 7772, 2, 0, 1, 0, 26, 31 },
  { 7778, 2, 0, 1, 0, 26, 31 },
  { 7782, 2, 0, 1, 0, 26, 31 },
  { 7786, 2, 0, 1, 0, 26, 31 },
  { 7792, 2, 0, 1, 0, 26, 31 },
  { 7796, 2, 0, 1, 0, 26, 31 },
  { 7800, 2, 0, 1, 0, 26, 31 },
  { 7804, 2, 0, 1, 0, 26, 31 },
  { 7844, 2, 0, 1, 0, 27, 31 },
  { 7848, 2, 0, 1, 0, 27, 31 },
  { 7852, 2, 0, 1, 0, 27, 31 },
  { 7856, 2, 0, 1, 0, 27, 31 },
  // 2573: get_image_height, 
  { 7186, 2, 0, 1, 0, 46, 31 },
  { 7188, 2, 0, 1, 0, 46, 31 },
  { 7200, 2, 0, 1, 0, 46, 31 },
  { 7202, 2, 0, 1, 0, 46, 31 },
  { 7204, 2, 0, 1, 0, 46, 31 },
  { 7222, 2, 0, 1, 0, 46, 31 },
  { 7224, 2, 0, 1, 0, 46, 31 },
  { 7230, 2, 0, 1, 0, 46, 31 },
  { 7232, 2, 0, 1, 0, 46, 31 },
  { 7236, 2, 0, 1, 0, 46, 31 },
  { 7262, 2, 0, 1, 0, 50, 31 },
  { 7264, 2, 0, 1, 0, 50, 31 },
  { 7270, 2, 0, 1, 0, 50, 31 },
  { 7272, 2, 0, 1, 0, 50, 31 },
  { 7274, 2, 0, 1, 0, 50, 31 },
  { 7772, 2, 0, 1, 0, 26, 31 },
  { 7778, 2, 0, 1, 0, 26, 31 },
  { 7782, 2, 0, 1, 0, 26, 31 },
  { 7786, 2, 0, 1, 0, 26, 31 },
  { 7792, 2, 0, 1, 0, 26, 31 },
  { 7796, 2, 0, 1, 0, 26, 31 },
  { 7800, 2, 0, 1, 0, 26, 31 },
  { 7804, 2, 0, 1, 0, 26, 31 },
  { 7844, 2, 0, 1, 0, 27, 31 },
  { 7848, 2, 0, 1, 0, 27, 31 },
  { 7852, 2, 0, 1, 0, 27, 31 },
  { 7856, 2, 0, 1, 0, 27, 31 },
  // 2600: get_image_depth, 
  { 7188, 2, 0, 1, 0, 46, 31 },
  { 7224, 2, 0, 1, 0, 46, 31 },
  { 7264, 2, 0, 1, 0, 50, 31 },
  // 2603: get_image_dim, 
  { 7190, 2, 0, 1, 0, 46, 31 },
  { 7192, 2, 0, 1, 0, 46, 31 },
  { 7206, 2, 0, 1, 0, 46, 31 },
  { 7208, 2, 0, 1, 0, 46, 31 },
  { 7210, 2, 0, 1, 0, 46, 31 },
  { 7238, 2, 0, 1, 0, 46, 31 },
  { 7242, 2, 0, 1, 0, 46, 31 },
  { 7244, 2, 0, 1, 0, 46, 31 },
  { 7246, 2, 0, 1, 0, 46, 31 },
  { 7248, 2, 0, 1, 0, 46, 31 },
  { 7276, 2, 0, 1, 0, 50, 31 },
  { 7278, 2, 0, 1, 0, 50, 31 },
  { 7280, 2, 0, 1, 0, 50, 31 },
  { 7282, 2, 0, 1, 0, 50, 31 },
  { 7284, 2, 0, 1, 0, 50, 31 },
  { 7774, 2, 0, 1, 0, 26, 31 },
  { 7780, 2, 0, 1, 0, 26, 31 },
  { 7784, 2, 0, 1, 0, 26, 31 },
  { 7788, 2, 0, 1, 0, 26, 31 },
  { 7794, 2, 0, 1, 0, 26, 31 },
  { 7798, 2, 0, 1, 0, 26, 31 },
  { 7802, 2, 0, 1, 0, 26, 31 },
  { 7806, 2, 0, 1, 0, 26, 31 },
  { 7846, 2, 0, 1, 0, 27, 31 },
  { 7850, 2, 0, 1, 0, 27, 31 },
  { 7854, 2, 0, 1, 0, 27, 31 },
  { 7858, 2, 0, 1, 0, 27, 31 },
  // 2630: get_image_array_size, 
  { 7194, 2, 0, 1, 0, 46, 31 },
  { 7212, 2, 0, 1, 0, 46, 31 },
  { 7214, 2, 0, 1, 0, 46, 31 },
  { 7250, 2, 0, 1, 0, 46, 31 },
  { 7252, 2, 0, 1, 0, 46, 31 },
  { 7254, 2, 0, 1, 0, 46, 31 },
  { 7286, 2, 0, 1, 0, 50, 31 },
  { 7288, 2, 0, 1, 0, 50, 31 },
  { 7290, 2, 0, 1, 0, 50, 31 },
  { 7776, 2, 0, 1, 0, 26, 31 },
  { 7790, 2, 0, 1, 0, 26, 31 },
  { 7808, 2, 0, 1, 0, 26, 31 },
  { 7810, 2, 0, 1, 0, 26, 31 },
  { 7860, 2, 0, 1, 0, 27, 31 },
  { 7862, 2, 0, 1, 0, 27, 31 },
  // 2645: read_imageh, 
  { 7292, 4, 1, 0, 0, 46, 31 },
  { 7296, 4, 1, 0, 0, 46, 31 },
  { 7300, 4, 1, 0, 0, 46, 31 },
  { 7304, 4, 1, 0, 0, 46, 31 },
  { 7308, 4, 1, 0, 0, 46, 31 },
  { 7312, 4, 1, 0, 0, 46, 31 },
  { 7316, 4, 1, 0, 0, 46, 31 },
  { 7320, 4, 1, 0, 0, 46, 31 },
  { 7324, 4, 1, 0, 0, 46, 31 },
  { 7328, 4, 1, 0, 0, 46, 31 },
  { 7332, 3, 1, 0, 0, 46, 28 },
  { 7335, 3, 1, 0, 0, 46, 28 },
  { 7338, 3, 1, 0, 0, 46, 28 },
  { 7341, 3, 1, 0, 0, 46, 28 },
  { 7344, 3, 1, 0, 0, 46, 28 },
  { 7347, 3, 1, 0, 0, 46, 28 },
  { 7350, 3, 1, 0, 0, 50, 28 },
  { 7353, 3, 1, 0, 0, 50, 28 },
  { 7356, 3, 1, 0, 0, 50, 28 },
  { 7359, 3, 1, 0, 0, 50, 28 },
  { 7362, 3, 1, 0, 0, 50, 28 },
  { 7365, 3, 1, 0, 0, 50, 28 },
  // 2667: write_imageh, 
  { 7368, 4, 0, 0, 0, 46, 31 },
  { 7372, 4, 0, 0, 0, 46, 31 },
  { 7376, 4, 0, 0, 0, 46, 31 },
  { 7380, 4, 0, 0, 0, 46, 31 },
  { 7384, 4, 0, 0, 0, 46, 31 },
  { 7388, 4, 0, 0, 0, 46, 31 },
  { 7392, 4, 0, 0, 0, 50, 31 },
  { 7396, 4, 0, 0, 0, 50, 31 },
  { 7400, 4, 0, 0, 0, 50, 31 },
  { 7404, 4, 0, 0, 0, 50, 31 },
  { 7408, 4, 0, 0, 0, 50, 31 },
  { 7412, 4, 0, 0, 0, 50, 31 },
  // 2679: work_group_all, work_group_any, 
  { 6, 2, 0, 0, 1, 51, 31 },
  // 2680: work_group_broadcast, 
  { 7416, 3, 0, 0, 1, 51, 31 },
  { 7419, 4, 0, 0, 1, 51, 31 },
  { 7423, 5, 0, 0, 1, 51, 31 },
  // 2683: work_group_reduce_add, work_group_scan_exclusive_add, work_group_scan_inclusive_add, work_group_reduce_min, work_group_scan_exclusive_min, work_group_scan_inclusive_min, work_group_reduce_max, work_group_scan_exclusive_max, work_group_scan_inclusive_max, 
  { 7428, 2, 0, 0, 1, 51, 31 },
  // 2684: is_valid_reserve_id, 
  { 7430, 2, 0, 0, 0, 49, 31 },
  // 2685: enqueue_marker, 
  { 7432, 5, 0, 0, 0, 46, 24 },
  // 2686: retain_event, release_event, 
  { 7437, 2, 0, 0, 0, 46, 24 },
  // 2687: create_user_event, 
  { 7439, 1, 0, 0, 0, 46, 24 },
  // 2688: is_valid_event, 
  { 7440, 2, 0, 0, 0, 46, 24 },
  // 2689: set_user_event_status, 
  { 7442, 3, 0, 0, 0, 46, 24 },
  // 2690: capture_event_profiling_info, 
  { 7445, 4, 0, 0, 0, 46, 24 },
  // 2691: get_default_queue, 
  { 7449, 1, 0, 0, 0, 46, 24 },
  // 2692: ndrange_1D, 
  { 7450, 2, 0, 0, 0, 46, 24 },
  { 7452, 3, 0, 0, 0, 46, 24 },
  { 7455, 4, 0, 0, 0, 46, 24 },
  // 2695: ndrange_2D, ndrange_3D, 
  { 7459, 2, 0, 0, 0, 46, 24 },
  { 7461, 3, 0, 0, 0, 46, 24 },
  { 7464, 4, 0, 0, 0, 46, 24 },
  // 2698: get_image_num_mip_levels, 
  { 7184, 2, 0, 0, 0, 34, 31 },
  { 7186, 2, 0, 0, 0, 34, 31 },
  { 7188, 2, 0, 0, 0, 34, 31 },
  { 7198, 2, 0, 0, 0, 34, 31 },
  { 7200, 2, 0, 0, 0, 34, 31 },
  { 7202, 2, 0, 0, 0, 34, 31 },
  { 7204, 2, 0, 0, 0, 34, 31 },
  { 7216, 2, 0, 0, 0, 34, 31 },
  { 7222, 2, 0, 0, 0, 34, 31 },
  { 7224, 2, 0, 0, 0, 34, 31 },
  { 7228, 2, 0, 0, 0, 34, 31 },
  { 7230, 2, 0, 0, 0, 34, 31 },
  { 7232, 2, 0, 0, 0, 34, 31 },
  { 7236, 2, 0, 0, 0, 34, 31 },
  { 7256, 2, 0, 0, 0, 35, 31 },
  { 7262, 2, 0, 0, 0, 35, 31 },
  { 7264, 2, 0, 0, 0, 35, 31 },
  { 7268, 2, 0, 0, 0, 35, 31 },
  { 7270, 2, 0, 0, 0, 35, 31 },
  { 7272, 2, 0, 0, 0, 35, 31 },
  { 7274, 2, 0, 0, 0, 35, 31 },
  // 2719: get_image_num_samples, 
  { 7772, 2, 0, 1, 0, 26, 31 },
  { 7778, 2, 0, 1, 0, 26, 31 },
  { 7782, 2, 0, 1, 0, 26, 31 },
  { 7786, 2, 0, 1, 0, 26, 31 },
  { 7792, 2, 0, 1, 0, 26, 31 },
  { 7796, 2, 0, 1, 0, 26, 31 },
  { 7800, 2, 0, 1, 0, 26, 31 },
  { 7804, 2, 0, 1, 0, 26, 31 },
  { 7844, 2, 0, 1, 0, 27, 31 },
  { 7848, 2, 0, 1, 0, 27, 31 },
  { 7852, 2, 0, 1, 0, 27, 31 },
  { 7856, 2, 0, 1, 0, 27, 31 },
  // 2731: get_sub_group_size, get_max_sub_group_size, get_num_sub_groups, get_sub_group_id, get_sub_group_local_id, 
  { 1394, 1, 0, 0, 0, 45, 31 },
  // 2732: get_enqueued_num_sub_groups, 
  { 1394, 1, 0, 0, 0, 45, 24 },
  // 2733: sub_group_barrier, 
  { 3804, 2, 0, 0, 1, 45, 31 },
  { 3806, 3, 0, 0, 1, 45, 31 },
  // 2735: sub_group_all, sub_group_any, 
  { 6, 2, 0, 0, 1, 45, 31 },
  // 2736: sub_group_broadcast, 
  { 7864, 3, 0, 0, 1, 45, 31 },
  { 7867, 3, 0, 0, 1, 40, 31 },
  { 7870, 3, 0, 0, 1, 40, 31 },
  // 2739: sub_group_reduce_add, sub_group_reduce_min, sub_group_reduce_max, sub_group_scan_exclusive_add, sub_group_scan_exclusive_min, sub_group_scan_exclusive_max, sub_group_scan_inclusive_add, sub_group_scan_inclusive_min, sub_group_scan_inclusive_max, 
  { 7428, 2, 0, 0, 1, 45, 31 },
  { 7873, 2, 0, 0, 1, 40, 31 },
  // 2741: sub_group_elect, 
  { 7875, 1, 0, 0, 0, 42, 31 },
  // 2742: sub_group_non_uniform_all, sub_group_non_uniform_any, 
  { 6, 2, 0, 0, 0, 42, 31 },
  // 2743: sub_group_non_uniform_all_equal, 
  { 7876, 2, 0, 0, 0, 42, 31 },
  // 2744: sub_group_non_uniform_broadcast, 
  { 7878, 3, 0, 0, 0, 38, 31 },
  // 2745: sub_group_broadcast_first, 
  { 2, 2, 0, 0, 0, 38, 31 },
  // 2746: sub_group_ballot, 
  { 7881, 2, 0, 0, 0, 38, 31 },
  // 2747: sub_group_inverse_ballot, 
  { 7883, 2, 0, 1, 0, 38, 31 },
  // 2748: sub_group_ballot_bit_extract, 
  { 7885, 3, 0, 1, 0, 38, 31 },
  // 2749: sub_group_ballot_bit_count, 
  { 7888, 2, 0, 1, 0, 38, 31 },
  // 2750: sub_group_ballot_inclusive_scan, sub_group_ballot_exclusive_scan, sub_group_ballot_find_lsb, sub_group_ballot_find_msb, 
  { 7888, 2, 0, 0, 0, 38, 31 },
  // 2751: get_sub_group_eq_mask, get_sub_group_ge_mask, get_sub_group_gt_mask, get_sub_group_le_mask, get_sub_group_lt_mask, 
  { 7890, 1, 0, 1, 0, 38, 31 },
};


// Find out whether a string matches an existing OpenCL builtin function name.
// Returns: A pair <0, 0> if no name matches.
//          A pair <Index, Len> indexing the BuiltinTable if the name is
//          matching an OpenCL builtin function.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef Name) {

  switch (Name.size()) {
  default: break;
  case 3:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(820, 1);	 // "abs"
      case 'l':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return std::make_pair(884, 1);	 // "all"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return std::make_pair(884, 1);	 // "any"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(821, 1);	 // "clz"
      case 'o':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(768, 1);	 // "cos"
      case 't':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(823, 1);	 // "ctz"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot", 2) != 0)
        break;
      return std::make_pair(70, 7);	 // "dot"
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'f')
          break;
        return std::make_pair(768, 1);	 // "erf"
      case 'x':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return std::make_pair(768, 1);	 // "exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ma", 2) != 0)
        break;
      return std::make_pair(789, 1);	 // "fma"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      return std::make_pair(768, 1);	 // "log"
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          return std::make_pair(789, 1);	 // "mad"
        case 'x':	 // 1 string to match.
          return std::make_pair(826, 6);	 // "max"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          return std::make_pair(826, 6);	 // "min"
        case 'x':	 // 1 string to match.
          return std::make_pair(853, 4);	 // "mix"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(769, 3);	 // "nan"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      return std::make_pair(772, 1);	 // "pow"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "in", 2) != 0)
        break;
      return std::make_pair(768, 1);	 // "sin"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(768, 1);	 // "tan"
    }
    break;
  case 4:	 // 25 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "atan"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "cbrt"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "il", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "ceil"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sh", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "cosh"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "fc", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "erfc"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "p2", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "exp2"
      }
      break;
    case 'f':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bs", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "fabs"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "im", 2) != 0)
          break;
        return std::make_pair(772, 1);	 // "fdim"
      case 'm':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return std::make_pair(773, 4);	 // "fmax"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(773, 4);	 // "fmin"
        case 'o':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return std::make_pair(772, 1);	 // "fmod"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "add", 3) != 0)
        break;
      return std::make_pair(825, 1);	 // "hadd"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(768, 1);	 // "log2"
      case 'b':	 // 1 string to match.
        return std::make_pair(768, 1);	 // "logb"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odf", 3) != 0)
        break;
      return std::make_pair(790, 4);	 // "modf"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        return std::make_pair(786, 3);	 // "pown"
      case 'r':	 // 1 string to match.
        return std::make_pair(772, 1);	 // "powr"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "int", 3) != 0)
        break;
      return std::make_pair(768, 1);	 // "rint"
    case 's':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(768, 1);	 // "sign"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return std::make_pair(768, 1);	 // "sinh"
        }
        break;
      case 'q':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(768, 1);	 // "sqrt"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ep", 2) != 0)
          break;
        return std::make_pair(849, 4);	 // "step"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "anh", 3) != 0)
        break;
      return std::make_pair(768, 1);	 // "tanh"
    }
    break;
  case 5:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "osh", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "acosh"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inh", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "asinh"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(772, 1);	 // "atan2"
        case 'h':	 // 1 string to match.
          return std::make_pair(768, 1);	 // "atanh"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amp", 3) != 0)
          break;
        return std::make_pair(838, 6);	 // "clamp"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "spi", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "cospi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oss", 3) != 0)
          break;
        return std::make_pair(869, 6);	 // "cross"
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xp", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return std::make_pair(768, 1);	 // "exp10"
      case 'm':	 // 1 string to match.
        if (Name[4] != '1')
          break;
        return std::make_pair(768, 1);	 // "expm1"
      }
      break;
    case 'f':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oor", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "floor"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ct", 2) != 0)
            break;
          return std::make_pair(790, 4);	 // "fract"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "xp", 2) != 0)
            break;
          return std::make_pair(794, 12);	 // "frexp"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ypot", 4) != 0)
        break;
      return std::make_pair(772, 1);	 // "hypot"
    case 'i':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ogb", 3) != 0)
          break;
        return std::make_pair(777, 3);	 // "ilogb"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nf", 2) != 0)
            break;
          return std::make_pair(879, 5);	 // "isinf"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "an", 2) != 0)
            break;
          return std::make_pair(879, 5);	 // "isnan"
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "exp", 3) != 0)
          break;
        return std::make_pair(780, 6);	 // "ldexp"
      case 'o':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "g1", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '0':	 // 1 string to match.
          return std::make_pair(768, 1);	 // "log10"
        case 'p':	 // 1 string to match.
          return std::make_pair(768, 1);	 // "log1p"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d24", 3) != 0)
          break;
        return std::make_pair(845, 2);	 // "mad24"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l24", 3) != 0)
          break;
        return std::make_pair(847, 2);	 // "mul24"
      }
      break;
    case 'r':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "add", 3) != 0)
          break;
        return std::make_pair(825, 1);	 // "rhadd"
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tn", 2) != 0)
            break;
          return std::make_pair(786, 3);	 // "rootn"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nd", 2) != 0)
            break;
          return std::make_pair(768, 1);	 // "round"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "qrt", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "rsqrt"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "inpi", 4) != 0)
        break;
      return std::make_pair(768, 1);	 // "sinpi"
    case 't':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npi", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "tanpi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "unc", 3) != 0)
          break;
        return std::make_pair(768, 1);	 // "trunc"
      }
      break;
    }
    break;
  case 6:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ospi", 4) != 0)
          break;
        return std::make_pair(768, 1);	 // "acospi"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inpi", 4) != 0)
          break;
        return std::make_pair(768, 1);	 // "asinpi"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "anpi", 4) != 0)
          break;
        return std::make_pair(768, 1);	 // "atanpi"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sless", 5) != 0)
        break;
      return std::make_pair(885, 5);	 // "isless"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ngth", 4) != 0)
          break;
        return std::make_pair(861, 3);	 // "length"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amma", 4) != 0)
          break;
        return std::make_pair(768, 1);	 // "lgamma"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "_hi", 3) != 0)
            break;
          return std::make_pair(844, 1);	 // "mad_hi"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mag", 3) != 0)
            break;
          return std::make_pair(772, 1);	 // "maxmag"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nmag", 4) != 0)
          break;
        return std::make_pair(772, 1);	 // "minmag"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l_hi", 4) != 0)
          break;
        return std::make_pair(825, 1);	 // "mul_hi"
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mquo", 4) != 0)
          break;
        return std::make_pair(806, 12);	 // "remquo"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tate", 4) != 0)
          break;
        return std::make_pair(825, 1);	 // "rotate"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "lect", 4) != 0)
          break;
        return std::make_pair(891, 10);	 // "select"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncos", 4) != 0)
          break;
        return std::make_pair(790, 4);	 // "sincos"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma", 5) != 0)
        break;
      return std::make_pair(768, 1);	 // "tgamma"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "load", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(901, 55);	 // "vload2"
      case '3':	 // 1 string to match.
        return std::make_pair(1000, 55);	 // "vload3"
      case '4':	 // 1 string to match.
        return std::make_pair(1099, 55);	 // "vload4"
      case '8':	 // 1 string to match.
        return std::make_pair(1198, 55);	 // "vload8"
      }
      break;
    }
    break;
  case 7:	 // 17 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d_sat", 5) != 0)
          break;
        return std::make_pair(825, 1);	 // "add_sat"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot", 5) != 0)
          break;
        return std::make_pair(96, 2);	 // "arm_dot"
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "n2pi", 4) != 0)
            break;
          return std::make_pair(772, 1);	 // "atan2pi"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "m_or", 4) != 0)
            break;
          return std::make_pair(1510, 8);	 // "atom_or"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "arrier", 6) != 0)
        break;
      return std::make_pair(1474, 1);	 // "barrier"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "egrees", 6) != 0)
        break;
      return std::make_pair(768, 1);	 // "degrees"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sequal", 6) != 0)
        break;
      return std::make_pair(885, 5);	 // "isequal"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ad_sat", 6) != 0)
        break;
      return std::make_pair(844, 1);	 // "mad_sat"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "adians", 6) != 0)
        break;
      return std::make_pair(768, 1);	 // "radians"
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "uffle", 5) != 0)
          break;
        return std::make_pair(2004, 176);	 // "shuffle"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gnbit", 5) != 0)
          break;
        return std::make_pair(879, 5);	 // "signbit"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_sat", 5) != 0)
          break;
        return std::make_pair(825, 1);	 // "sub_sat"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oad16", 5) != 0)
          break;
        return std::make_pair(1297, 55);	 // "vload16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(956, 44);	 // "vstore2"
        case '3':	 // 1 string to match.
          return std::make_pair(1055, 44);	 // "vstore3"
        case '4':	 // 1 string to match.
          return std::make_pair(1154, 44);	 // "vstore4"
        case '8':	 // 1 string to match.
          return std::make_pair(1253, 44);	 // "vstore8"
        }
        break;
      }
      break;
    }
    break;
  case 8:	 // 24 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "s_diff", 6) != 0)
          break;
        return std::make_pair(824, 1);	 // "abs_diff"
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "om_", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1486, 8);	 // "atom_add"
          case 'n':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1510, 8);	 // "atom_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ec", 2) != 0)
            break;
          return std::make_pair(1494, 8);	 // "atom_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+6, "nc", 2) != 0)
            break;
          return std::make_pair(1494, 8);	 // "atom_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[7] != 'x')
              break;
            return std::make_pair(1510, 8);	 // "atom_max"
          case 'i':	 // 1 string to match.
            if (Name[7] != 'n')
              break;
            return std::make_pair(1510, 8);	 // "atom_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return std::make_pair(1486, 8);	 // "atom_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+6, "or", 2) != 0)
            break;
          return std::make_pair(1510, 8);	 // "atom_xor"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opysign", 7) != 0)
        break;
      return std::make_pair(772, 1);	 // "copysign"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "istance", 7) != 0)
        break;
      return std::make_pair(875, 3);	 // "distance"
    case 'h':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+6, "os", 2) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp", 2) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og", 2) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "in", 2) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+6, "an", 2) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_tan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+3, "inite", 5) != 0)
          break;
        return std::make_pair(879, 5);	 // "isfinite"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ormal", 5) != 0)
          break;
        return std::make_pair(879, 5);	 // "isnormal"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma_r", 7) != 0)
        break;
      return std::make_pair(794, 12);	 // "lgamma_r"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pcount", 6) != 0)
          break;
        return std::make_pair(822, 1);	 // "popcount"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "efetch", 6) != 0)
          break;
        return std::make_pair(1485, 1);	 // "prefetch"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "huffle2", 7) != 0)
        break;
      return std::make_pair(2180, 176);	 // "shuffle2"
    case 'u':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psample", 7) != 0)
        break;
      return std::make_pair(832, 6);	 // "upsample"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "store16", 7) != 0)
        break;
      return std::make_pair(1352, 44);	 // "vstore16"
    }
    break;
  case 9:	 // 14 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "xchg", 4) != 0)
          break;
        return std::make_pair(1486, 8);	 // "atom_xchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_or", 4) != 0)
          break;
        return std::make_pair(1526, 6);	 // "atomic_or"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itselect", 8) != 0)
        break;
      return std::make_pair(890, 1);	 // "bitselect"
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_fence", 8) != 0)
        break;
      return std::make_pair(1478, 2);	 // "get_fence"
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp2", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og2", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+6, "owr", 3) != 0)
          break;
        return std::make_pair(819, 1);	 // "half_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "qrt", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_sqrt"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reater", 6) != 0)
          break;
        return std::make_pair(885, 5);	 // "isgreater"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+3, "rdered", 6) != 0)
          break;
        return std::make_pair(885, 5);	 // "isordered"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "em_fence", 8) != 0)
        break;
      return std::make_pair(1477, 1);	 // "mem_fence"
    case 'n':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtafter", 7) != 0)
          break;
        return std::make_pair(772, 1);	 // "nextafter"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rmalize", 7) != 0)
          break;
        return std::make_pair(864, 3);	 // "normalize"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emainder", 8) != 0)
        break;
      return std::make_pair(772, 1);	 // "remainder"
    }
    break;
  case 10:	 // 23 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1526, 6);	 // "atomic_add"
        case 'n':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1526, 6);	 // "atomic_and"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ec", 2) != 0)
          break;
        return std::make_pair(1532, 6);	 // "atomic_dec"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+8, "nc", 2) != 0)
          break;
        return std::make_pair(1532, 6);	 // "atomic_inc"
      case 'm':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[9] != 'x')
            break;
          return std::make_pair(1526, 6);	 // "atomic_max"
        case 'i':	 // 1 string to match.
          if (Name[9] != 'n')
            break;
          return std::make_pair(1526, 6);	 // "atomic_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ub", 2) != 0)
          break;
        return std::make_pair(1526, 6);	 // "atomic_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+8, "or", 2) != 0)
          break;
        return std::make_pair(1526, 6);	 // "atomic_xor"
      }
      break;
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp10", 4) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og10", 4) != 0)
          break;
        return std::make_pair(818, 1);	 // "half_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[6]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+7, "cip", 3) != 0)
            break;
          return std::make_pair(818, 1);	 // "half_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+7, "qrt", 3) != 0)
            break;
          return std::make_pair(818, 1);	 // "half_rsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "snotequal", 9) != 0)
        break;
      return std::make_pair(885, 5);	 // "isnotequal"
    case 'n':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tive_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+8, "os", 2) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_cos"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xp", 2) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_exp"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "og", 2) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_log"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+8, "in", 2) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_sin"
        case 't':	 // 1 string to match.
          if (memcmp(Name.data()+8, "an", 2) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_tan"
        }
        break;
      case 'd':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "range_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case '1':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2692, 3);	 // "ndrange_1D"
        case '2':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2695, 3);	 // "ndrange_2D"
        case '3':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2695, 3);	 // "ndrange_3D"
        }
        break;
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "moothstep", 9) != 0)
        break;
      return std::make_pair(857, 4);	 // "smoothstep"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "load_half", 9) != 0)
        break;
      return std::make_pair(1396, 5);	 // "vload_half"
    }
    break;
  case 11:	 // 23 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc", 9) != 0)
          break;
        return std::make_pair(98, 4);	 // "arm_dot_acc"
      case 't':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+8, "nit", 3) != 0)
            break;
          return std::make_pair(1607, 18);	 // "atomic_init"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "oad", 3) != 0)
            break;
          return std::make_pair(1752, 21);	 // "atomic_load"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+8, "chg", 3) != 0)
            break;
          return std::make_pair(1518, 8);	 // "atomic_xchg"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "it_reverse", 10) != 0)
        break;
      return std::make_pair(58, 1);	 // "bit_reverse"
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(434, 11);	 // "convert_int"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_acc_sat", 10) != 0)
        break;
      return std::make_pair(77, 4);	 // "dot_acc_sat"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_length", 10) != 0)
        break;
      return std::make_pair(867, 1);	 // "fast_length"
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "alf_divide", 10) != 0)
        break;
      return std::make_pair(819, 1);	 // "half_divide"
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+3, "essequal", 8) != 0)
          break;
        return std::make_pair(885, 5);	 // "islessequal"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nordered", 8) != 0)
          break;
        return std::make_pair(885, 5);	 // "isunordered"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp2", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "native_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og2", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "native_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+8, "owr", 3) != 0)
          break;
        return std::make_pair(819, 1);	 // "native_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "qrt", 3) != 0)
          break;
        return std::make_pair(818, 1);	 // "native_sqrt"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ead_image", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2356, 52);	 // "read_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2645, 22);	 // "read_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2408, 36);	 // "read_imagei"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "oad_half", 8) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1401, 5);	 // "vload_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(1422, 5);	 // "vload_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(1427, 5);	 // "vload_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(1432, 5);	 // "vload_half8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        return std::make_pair(1406, 8);	 // "vstore_half"
      }
      break;
    }
    break;
  case 12:	 // 31 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "cmpxchg", 7) != 0)
          break;
        return std::make_pair(1502, 8);	 // "atom_cmpxchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_store", 7) != 0)
          break;
        return std::make_pair(1544, 21);	 // "atomic_store"
      }
      break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(170, 11);	 // "convert_char"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        return std::make_pair(15, 11);	 // "convert_half"
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(445, 11);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(456, 11);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(467, 11);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(478, 11);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(632, 11);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(500, 11);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(764, 1);	 // "get_work_dim"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp10", 4) != 0)
          break;
        return std::make_pair(818, 1);	 // "native_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og10", 4) != 0)
          break;
        return std::make_pair(818, 1);	 // "native_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "cip", 3) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+9, "qrt", 3) != 0)
            break;
          return std::make_pair(818, 1);	 // "native_rsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 2 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+3, "d_imageui", 9) != 0)
          break;
        return std::make_pair(2444, 36);	 // "read_imageui"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ain_event", 9) != 0)
          break;
        return std::make_pair(2686, 1);	 // "retain_event"
      }
      break;
    case 'v':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+6, "half16", 6) != 0)
            break;
          return std::make_pair(1437, 5);	 // "vload_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(1401, 5);	 // "vloada_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1422, 5);	 // "vloada_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1427, 5);	 // "vloada_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1432, 5);	 // "vloada_half8"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1414, 8);	 // "vstore_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(1442, 8);	 // "vstore_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(1450, 8);	 // "vstore_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(1458, 8);	 // "vstore_half8"
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "rite_image", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2480, 23);	 // "write_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2667, 12);	 // "write_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2503, 17);	 // "write_imagei"
      }
      break;
    }
    break;
  case 13:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(181, 11);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(192, 11);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(203, 11);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(214, 11);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(159, 11);	 // "convert_float"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(26, 11);	 // "convert_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(41, 11);	 // "convert_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(59, 11);	 // "convert_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(81, 11);	 // "convert_half8"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(489, 11);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(643, 11);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(654, 11);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(665, 11);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(676, 11);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(302, 11);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(236, 11);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(511, 11);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(522, 11);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(533, 11);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(544, 11);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(698, 11);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_distance", 12) != 0)
        break;
      return std::make_pair(878, 1);	 // "fast_distance"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_id", 8) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_global_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_dim", 8) != 0)
          break;
        return std::make_pair(2603, 27);	 // "get_image_dim"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "slessgreater", 12) != 0)
        break;
      return std::make_pair(885, 5);	 // "islessgreater"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ative_divide", 12) != 0)
        break;
      return std::make_pair(819, 1);	 // "native_divide"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "elease_event", 12) != 0)
        break;
      return std::make_pair(2686, 1);	 // "release_event"
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_a", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[12] != 'l')
          break;
        return std::make_pair(2735, 1);	 // "sub_group_all"
      case 'n':	 // 1 string to match.
        if (Name[12] != 'y')
          break;
        return std::make_pair(2735, 1);	 // "sub_group_any"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oada_half16", 11) != 0)
          break;
        return std::make_pair(1437, 5);	 // "vloada_half16"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+7, "half16", 6) != 0)
            break;
          return std::make_pair(1466, 8);	 // "vstore_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(1414, 8);	 // "vstorea_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1442, 8);	 // "vstorea_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1450, 8);	 // "vstorea_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1458, 8);	 // "vstorea_half8"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_imageui", 12) != 0)
        break;
      return std::make_pair(2520, 17);	 // "write_imageui"
    }
    break;
  case 14:	 // 33 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_cmpxchg", 13) != 0)
        break;
      return std::make_pair(1538, 6);	 // "atomic_cmpxchg"
    case 'c':	 // 22 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(225, 11);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(566, 11);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(104, 11);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(115, 11);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(126, 11);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(137, 11);	 // "convert_float8"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf16", 5) != 0)
          break;
        return std::make_pair(1, 11);	 // "convert_half16"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(687, 11);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(313, 11);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(324, 11);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(335, 11);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(346, 11);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(247, 11);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(258, 11);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(269, 11);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(280, 11);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(555, 11);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(709, 11);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(720, 11);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(731, 11);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(742, 11);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(368, 11);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nqueue_marker", 13) != 0)
        break;
      return std::make_pair(2685, 1);	 // "enqueue_marker"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_normalize", 13) != 0)
        break;
      return std::make_pair(868, 1);	 // "fast_normalize"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_num_groups"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+3, "valid_event", 11) != 0)
          break;
        return std::make_pair(2688, 1);	 // "is_valid_event"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reaterequal", 11) != 0)
          break;
        return std::make_pair(885, 5);	 // "isgreaterequal"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ead_mem_fence", 13) != 0)
        break;
      return std::make_pair(1477, 1);	 // "read_mem_fence"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "storea_half16", 13) != 0)
        break;
      return std::make_pair(1466, 8);	 // "vstorea_half16"
    case 'w':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ork_group_a", 11) != 0)
        break;
      switch (Name[12]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[13] != 'l')
          break;
        return std::make_pair(2679, 1);	 // "work_group_all"
      case 'n':	 // 1 string to match.
        if (Name[13] != 'y')
          break;
        return std::make_pair(2679, 1);	 // "work_group_any"
      }
      break;
    }
    break;
  case 15:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc_sat", 13) != 0)
          break;
        return std::make_pair(102, 2);	 // "arm_dot_acc_sat"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xchange", 7) != 0)
            break;
          return std::make_pair(1815, 21);	 // "atomic_exchange"
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+8, "etch_or", 7) != 0)
            break;
          return std::make_pair(1950, 12);	 // "atomic_fetch_or"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_insert", 14) != 0)
        break;
      return std::make_pair(53, 1);	 // "bitfield_insert"
    case 'c':	 // 17 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(577, 11);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(588, 11);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(599, 11);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(610, 11);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(148, 11);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt_", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[13] != 't')
            break;
          switch (Name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(434, 11);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(434, 11);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(434, 11);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(434, 11);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(434, 11);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(357, 11);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(291, 11);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(753, 11);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(379, 11);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(390, 11);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(401, 11);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(412, 11);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_size", 10) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_global_size"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+5, "mage_", 5) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+11, "epth", 4) != 0)
            break;
          return std::make_pair(2600, 3);	 // "get_image_depth"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+11, "idth", 4) != 0)
            break;
          return std::make_pair(2537, 36);	 // "get_image_width"
        }
        break;
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_elect", 14) != 0)
        break;
      return std::make_pair(2741, 1);	 // "sub_group_elect"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "store_half_rt", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1406, 8);	 // "vstore_half_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1406, 8);	 // "vstore_half_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1406, 8);	 // "vstore_half_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1406, 8);	 // "vstore_half_rtz"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_mem_fence", 14) != 0)
        break;
      return std::make_pair(1477, 1);	 // "write_mem_fence"
    }
    break;
  case 16:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1878, 24);	 // "atomic_fetch_add"
        case 'n':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1950, 12);	 // "atomic_fetch_and"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[15] != 'x')
            break;
          return std::make_pair(1815, 21);	 // "atomic_fetch_max"
        case 'i':	 // 1 string to match.
          if (Name[15] != 'n')
            break;
          return std::make_pair(1815, 21);	 // "atomic_fetch_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub", 2) != 0)
          break;
        return std::make_pair(1878, 24);	 // "atomic_fetch_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or", 2) != 0)
          break;
        return std::make_pair(1950, 12);	 // "atomic_fetch_xor"
      }
      break;
    case 'c':	 // 41 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(170, 11);	 // "convert_char_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(170, 11);	 // "convert_char_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(170, 11);	 // "convert_char_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(170, 11);	 // "convert_char_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(170, 11);	 // "convert_char_sat"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble16", 7) != 0)
          break;
        return std::make_pair(621, 11);	 // "convert_double16"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf_rt", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(15, 11);	 // "convert_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(15, 11);	 // "convert_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(15, 11);	 // "convert_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(15, 11);	 // "convert_half_rtz"
        }
        break;
      case 'i':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(445, 11);	 // "convert_int2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(445, 11);	 // "convert_int2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(445, 11);	 // "convert_int2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(445, 11);	 // "convert_int2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(445, 11);	 // "convert_int2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(456, 11);	 // "convert_int3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(456, 11);	 // "convert_int3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(456, 11);	 // "convert_int3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(456, 11);	 // "convert_int3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(456, 11);	 // "convert_int3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(467, 11);	 // "convert_int4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(467, 11);	 // "convert_int4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(467, 11);	 // "convert_int4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(467, 11);	 // "convert_int4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(467, 11);	 // "convert_int4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(478, 11);	 // "convert_int8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(478, 11);	 // "convert_int8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(478, 11);	 // "convert_int8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(478, 11);	 // "convert_int8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(478, 11);	 // "convert_int8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(632, 11);	 // "convert_long_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(632, 11);	 // "convert_long_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(632, 11);	 // "convert_long_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(632, 11);	 // "convert_long_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(632, 11);	 // "convert_long_sat"
        }
        break;
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt_", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(500, 11);	 // "convert_uint_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(500, 11);	 // "convert_uint_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(500, 11);	 // "convert_uint_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(500, 11);	 // "convert_uint_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(500, 11);	 // "convert_uint_sat"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort16", 6) != 0)
            break;
          return std::make_pair(423, 11);	 // "convert_ushort16"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_height", 11) != 0)
          break;
        return std::make_pair(2573, 27);	 // "get_image_height"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_id", 11) != 0)
          break;
        return std::make_pair(2731, 1);	 // "get_sub_group_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_ballot", 15) != 0)
        break;
      return std::make_pair(2746, 1);	 // "sub_group_ballot"
    case 'v':	 // 16 strings to match.
      if (memcmp(Name.data()+1, "store_half", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1414, 8);	 // "vstore_half2_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1414, 8);	 // "vstore_half2_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1414, 8);	 // "vstore_half2_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1414, 8);	 // "vstore_half2_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1442, 8);	 // "vstore_half3_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1442, 8);	 // "vstore_half3_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1442, 8);	 // "vstore_half3_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1442, 8);	 // "vstore_half3_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1450, 8);	 // "vstore_half4_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1450, 8);	 // "vstore_half4_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1450, 8);	 // "vstore_half4_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1450, 8);	 // "vstore_half4_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1458, 8);	 // "vstore_half8_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1458, 8);	 // "vstore_half8_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1458, 8);	 // "vstore_half8_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1458, 8);	 // "vstore_half8_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 17:	 // 127 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_flag_clear", 16) != 0)
        break;
      return std::make_pair(1986, 3);	 // "atomic_flag_clear"
    case 'c':	 // 101 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 100 strings to match.
        if (memcmp(Name.data()+2, "nvert_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "har", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(181, 11);	 // "convert_char2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(181, 11);	 // "convert_char2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(181, 11);	 // "convert_char2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(181, 11);	 // "convert_char2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(181, 11);	 // "convert_char2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(192, 11);	 // "convert_char3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(192, 11);	 // "convert_char3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(192, 11);	 // "convert_char3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(192, 11);	 // "convert_char3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(192, 11);	 // "convert_char3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(203, 11);	 // "convert_char4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(203, 11);	 // "convert_char4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(203, 11);	 // "convert_char4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(203, 11);	 // "convert_char4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(203, 11);	 // "convert_char4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(214, 11);	 // "convert_char8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(214, 11);	 // "convert_char8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(214, 11);	 // "convert_char8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(214, 11);	 // "convert_char8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(214, 11);	 // "convert_char8_sat"
            }
            break;
          }
          break;
        case 'f':	 // 4 strings to match.
          if (memcmp(Name.data()+9, "loat_rt", 7) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(159, 11);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(159, 11);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(159, 11);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(159, 11);	 // "convert_float_rtz"
          }
          break;
        case 'h':	 // 16 strings to match.
          if (memcmp(Name.data()+9, "alf", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(26, 11);	 // "convert_half2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(26, 11);	 // "convert_half2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(26, 11);	 // "convert_half2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(26, 11);	 // "convert_half2_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(41, 11);	 // "convert_half3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(41, 11);	 // "convert_half3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(41, 11);	 // "convert_half3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(41, 11);	 // "convert_half3_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(59, 11);	 // "convert_half4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(59, 11);	 // "convert_half4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(59, 11);	 // "convert_half4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(59, 11);	 // "convert_half4_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(81, 11);	 // "convert_half8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(81, 11);	 // "convert_half8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(81, 11);	 // "convert_half8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(81, 11);	 // "convert_half8_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "nt16_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(489, 11);	 // "convert_int16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(489, 11);	 // "convert_int16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(489, 11);	 // "convert_int16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(489, 11);	 // "convert_int16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(489, 11);	 // "convert_int16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "ong", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(643, 11);	 // "convert_long2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(643, 11);	 // "convert_long2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(643, 11);	 // "convert_long2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(643, 11);	 // "convert_long2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(643, 11);	 // "convert_long2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(654, 11);	 // "convert_long3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(654, 11);	 // "convert_long3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(654, 11);	 // "convert_long3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(654, 11);	 // "convert_long3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(654, 11);	 // "convert_long3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(665, 11);	 // "convert_long4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(665, 11);	 // "convert_long4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(665, 11);	 // "convert_long4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(665, 11);	 // "convert_long4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(665, 11);	 // "convert_long4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(676, 11);	 // "convert_long8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(676, 11);	 // "convert_long8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(676, 11);	 // "convert_long8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(676, 11);	 // "convert_long8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(676, 11);	 // "convert_long8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "hort_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(302, 11);	 // "convert_short_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(302, 11);	 // "convert_short_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(302, 11);	 // "convert_short_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(302, 11);	 // "convert_short_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(302, 11);	 // "convert_short_sat"
          }
          break;
        case 'u':	 // 30 strings to match.
          switch (Name[9]) {
          default: break;
          case 'c':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "har_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(236, 11);	 // "convert_uchar_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(236, 11);	 // "convert_uchar_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(236, 11);	 // "convert_uchar_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(236, 11);	 // "convert_uchar_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(236, 11);	 // "convert_uchar_sat"
            }
            break;
          case 'i':	 // 20 strings to match.
            if (memcmp(Name.data()+10, "nt", 2) != 0)
              break;
            switch (Name[12]) {
            default: break;
            case '2':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(511, 11);	 // "convert_uint2_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(511, 11);	 // "convert_uint2_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(511, 11);	 // "convert_uint2_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(511, 11);	 // "convert_uint2_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(511, 11);	 // "convert_uint2_sat"
              }
              break;
            case '3':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(522, 11);	 // "convert_uint3_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(522, 11);	 // "convert_uint3_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(522, 11);	 // "convert_uint3_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(522, 11);	 // "convert_uint3_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(522, 11);	 // "convert_uint3_sat"
              }
              break;
            case '4':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(533, 11);	 // "convert_uint4_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(533, 11);	 // "convert_uint4_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(533, 11);	 // "convert_uint4_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(533, 11);	 // "convert_uint4_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(533, 11);	 // "convert_uint4_sat"
              }
              break;
            case '8':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(544, 11);	 // "convert_uint8_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(544, 11);	 // "convert_uint8_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(544, 11);	 // "convert_uint8_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(544, 11);	 // "convert_uint8_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(544, 11);	 // "convert_uint8_sat"
              }
              break;
            }
            break;
          case 'l':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "ong_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(698, 11);	 // "convert_ulong_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(698, 11);	 // "convert_ulong_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(698, 11);	 // "convert_ulong_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(698, 11);	 // "convert_ulong_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(698, 11);	 // "convert_ulong_sat"
            }
            break;
          }
          break;
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "eate_user_event", 15) != 0)
          break;
        return std::make_pair(2687, 1);	 // "create_user_event"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+5, "efault_queue", 12) != 0)
          break;
        return std::make_pair(2691, 1);	 // "get_default_queue"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_offset", 12) != 0)
          break;
        return std::make_pair(765, 1);	 // "get_global_offset"
      }
      break;
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+11, "arrier", 6) != 0)
          break;
        return std::make_pair(2733, 2);	 // "sub_group_barrier"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+11, "huffle", 6) != 0)
          break;
        return std::make_pair(37, 1);	 // "sub_group_shuffle"
      }
      break;
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "half16_rt", 9) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1466, 8);	 // "vstore_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1466, 8);	 // "vstore_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1466, 8);	 // "vstore_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1466, 8);	 // "vstore_half16_rtz"
        }
        break;
      case 'a':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "_half", 5) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1414, 8);	 // "vstorea_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1414, 8);	 // "vstorea_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1414, 8);	 // "vstorea_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1414, 8);	 // "vstorea_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1442, 8);	 // "vstorea_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1442, 8);	 // "vstorea_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1442, 8);	 // "vstorea_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1442, 8);	 // "vstorea_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1450, 8);	 // "vstorea_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1450, 8);	 // "vstorea_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1450, 8);	 // "vstorea_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1450, 8);	 // "vstorea_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1458, 8);	 // "vstorea_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1458, 8);	 // "vstorea_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1458, 8);	 // "vstorea_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1458, 8);	 // "vstorea_half8_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ait_group_events", 16) != 0)
        break;
      return std::make_pair(1484, 1);	 // "wait_group_events"
    }
    break;
  case 18:	 // 111 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 104 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(225, 11);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(225, 11);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(225, 11);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(225, 11);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(225, 11);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(566, 11);	 // "convert_double_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(566, 11);	 // "convert_double_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(566, 11);	 // "convert_double_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(566, 11);	 // "convert_double_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(104, 11);	 // "convert_float2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(104, 11);	 // "convert_float2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(104, 11);	 // "convert_float2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(104, 11);	 // "convert_float2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(115, 11);	 // "convert_float3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(115, 11);	 // "convert_float3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(115, 11);	 // "convert_float3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(115, 11);	 // "convert_float3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(126, 11);	 // "convert_float4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(126, 11);	 // "convert_float4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(126, 11);	 // "convert_float4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(126, 11);	 // "convert_float4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(137, 11);	 // "convert_float8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(137, 11);	 // "convert_float8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(137, 11);	 // "convert_float8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(137, 11);	 // "convert_float8_rtz"
          }
          break;
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf16_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtz"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(687, 11);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(687, 11);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(687, 11);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(687, 11);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(687, 11);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(313, 11);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(313, 11);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(313, 11);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(313, 11);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(313, 11);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(324, 11);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(324, 11);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(324, 11);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(324, 11);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(324, 11);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(335, 11);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(335, 11);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(335, 11);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(335, 11);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(335, 11);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(346, 11);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(346, 11);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(346, 11);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(346, 11);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(346, 11);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(247, 11);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(247, 11);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(247, 11);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(247, 11);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(247, 11);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(258, 11);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(258, 11);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(258, 11);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(258, 11);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(258, 11);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(269, 11);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(269, 11);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(269, 11);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(269, 11);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(269, 11);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(280, 11);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(280, 11);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(280, 11);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(280, 11);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(280, 11);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt16_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(555, 11);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(555, 11);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(555, 11);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(555, 11);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(555, 11);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(709, 11);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(709, 11);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(709, 11);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(709, 11);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(709, 11);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(720, 11);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(720, 11);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(720, 11);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(720, 11);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(720, 11);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(731, 11);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(731, 11);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(731, 11);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(731, 11);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(731, 11);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(742, 11);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(742, 11);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(742, 11);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(742, 11);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(742, 11);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(368, 11);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(368, 11);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(368, 11);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(368, 11);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(368, 11);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(2731, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(2731, 1);	 // "get_sub_group_size"
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "storea_half16_rt", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1466, 8);	 // "vstorea_half16_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1466, 8);	 // "vstorea_half16_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1466, 8);	 // "vstorea_half16_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1466, 8);	 // "vstorea_half16_rtz"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_barrier", 17) != 0)
        break;
      return std::make_pair(1475, 2);	 // "work_group_barrier"
    }
    break;
  case 19:	 // 62 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 59 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(577, 11);	 // "convert_double2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(577, 11);	 // "convert_double2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(577, 11);	 // "convert_double2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(577, 11);	 // "convert_double2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(588, 11);	 // "convert_double3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(588, 11);	 // "convert_double3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(588, 11);	 // "convert_double3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(588, 11);	 // "convert_double3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(599, 11);	 // "convert_double4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(599, 11);	 // "convert_double4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(599, 11);	 // "convert_double4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(599, 11);	 // "convert_double4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(610, 11);	 // "convert_double8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(610, 11);	 // "convert_double8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(610, 11);	 // "convert_double8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(610, 11);	 // "convert_double8_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat16_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(148, 11);	 // "convert_float16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(148, 11);	 // "convert_float16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(148, 11);	 // "convert_float16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(148, 11);	 // "convert_float16_rtz"
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt_sat_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(434, 11);	 // "convert_int_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(434, 11);	 // "convert_int_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(434, 11);	 // "convert_int_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(434, 11);	 // "convert_int_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(357, 11);	 // "convert_short16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(357, 11);	 // "convert_short16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(357, 11);	 // "convert_short16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(357, 11);	 // "convert_short16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(357, 11);	 // "convert_short16_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(291, 11);	 // "convert_uchar16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(291, 11);	 // "convert_uchar16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(291, 11);	 // "convert_uchar16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(291, 11);	 // "convert_uchar16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(291, 11);	 // "convert_uchar16_sat"
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(753, 11);	 // "convert_ulong16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(753, 11);	 // "convert_ulong16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(753, 11);	 // "convert_ulong16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(753, 11);	 // "convert_ulong16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(753, 11);	 // "convert_ulong16_sat"
          }
          break;
        case 's':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(379, 11);	 // "convert_ushort2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(379, 11);	 // "convert_ushort2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(379, 11);	 // "convert_ushort2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(379, 11);	 // "convert_ushort2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(379, 11);	 // "convert_ushort2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(390, 11);	 // "convert_ushort3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(390, 11);	 // "convert_ushort3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(390, 11);	 // "convert_ushort3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(390, 11);	 // "convert_ushort3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(390, 11);	 // "convert_ushort3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(401, 11);	 // "convert_ushort4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(401, 11);	 // "convert_ushort4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(401, 11);	 // "convert_ushort4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(401, 11);	 // "convert_ushort4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(401, 11);	 // "convert_ushort4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(412, 11);	 // "convert_ushort8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(412, 11);	 // "convert_ushort8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(412, 11);	 // "convert_ushort8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(412, 11);	 // "convert_ushort8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(412, 11);	 // "convert_ushort8_sat"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_local_linear_id", 18) != 0)
        break;
      return std::make_pair(767, 1);	 // "get_local_linear_id"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "s_valid_reserve_id", 18) != 0)
        break;
      return std::make_pair(2684, 1);	 // "is_valid_reserve_id"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_broadcast", 18) != 0)
        break;
      return std::make_pair(2736, 3);	 // "sub_group_broadcast"
    }
    break;
  case 20:	 // 48 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_load_explicit", 19) != 0)
        break;
      return std::make_pair(1773, 42);	 // "atomic_load_explicit"
    case 'c':	 // 37 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(170, 11);	 // "convert_char_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(170, 11);	 // "convert_char_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(170, 11);	 // "convert_char_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(170, 11);	 // "convert_char_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble16_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(621, 11);	 // "convert_double16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(621, 11);	 // "convert_double16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(621, 11);	 // "convert_double16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(621, 11);	 // "convert_double16_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(445, 11);	 // "convert_int2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(445, 11);	 // "convert_int2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(445, 11);	 // "convert_int2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(445, 11);	 // "convert_int2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(456, 11);	 // "convert_int3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(456, 11);	 // "convert_int3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(456, 11);	 // "convert_int3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(456, 11);	 // "convert_int3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(467, 11);	 // "convert_int4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(467, 11);	 // "convert_int4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(467, 11);	 // "convert_int4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(467, 11);	 // "convert_int4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(478, 11);	 // "convert_int8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(478, 11);	 // "convert_int8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(478, 11);	 // "convert_int8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(478, 11);	 // "convert_int8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(632, 11);	 // "convert_long_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(632, 11);	 // "convert_long_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(632, 11);	 // "convert_long_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(632, 11);	 // "convert_long_sat_rtz"
        }
        break;
      case 'u':	 // 9 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt_sat_rt", 9) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(500, 11);	 // "convert_uint_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(500, 11);	 // "convert_uint_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(500, 11);	 // "convert_uint_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(500, 11);	 // "convert_uint_sat_rtz"
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort16_", 7) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[18] != 't')
              break;
            switch (Name[19]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(423, 11);	 // "convert_ushort16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(423, 11);	 // "convert_ushort16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(423, 11);	 // "convert_ushort16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(423, 11);	 // "convert_ushort16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+18, "at", 2) != 0)
              break;
            return std::make_pair(423, 11);	 // "convert_ushort16_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'd':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ot_4x8packed_", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 's':	 // 2 strings to match.
        switch (Name[15]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "_int", 4) != 0)
            break;
          return std::make_pair(93, 1);	 // "dot_4x8packed_ss_int"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+16, "_int", 4) != 0)
            break;
          return std::make_pair(93, 1);	 // "dot_4x8packed_su_int"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+15, "s_int", 5) != 0)
          break;
        return std::make_pair(93, 1);	 // "dot_4x8packed_us_int"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_linear_id", 15) != 0)
          break;
        return std::make_pair(767, 1);	 // "get_global_linear_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_array_size", 15) != 0)
          break;
        return std::make_pair(2630, 15);	 // "get_image_array_size"
      }
      break;
    case 's':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'r':	 // 3 strings to match.
        if (memcmp(Name.data()+11, "educe_", 6) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+18, "dd", 2) != 0)
            break;
          return std::make_pair(2739, 2);	 // "sub_group_reduce_add"
        case 'm':	 // 2 strings to match.
          switch (Name[18]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[19] != 'x')
              break;
            return std::make_pair(2739, 2);	 // "sub_group_reduce_max"
          case 'i':	 // 1 string to match.
            if (Name[19] != 'n')
              break;
            return std::make_pair(2739, 2);	 // "sub_group_reduce_min"
          }
          break;
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+11, "huffle_up", 9) != 0)
          break;
        return std::make_pair(38, 1);	 // "sub_group_shuffle_up"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_broadcast", 19) != 0)
        break;
      return std::make_pair(2680, 3);	 // "work_group_broadcast"
    }
    break;
  case 21:	 // 78 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ync_work_group_copy", 19) != 0)
          break;
        return std::make_pair(1480, 2);	 // "async_work_group_copy"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "omic_store_explicit", 19) != 0)
          break;
        return std::make_pair(1565, 42);	 // "atomic_store_explicit"
      }
      break;
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(181, 11);	 // "convert_char2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(181, 11);	 // "convert_char2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(181, 11);	 // "convert_char2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(181, 11);	 // "convert_char2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(192, 11);	 // "convert_char3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(192, 11);	 // "convert_char3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(192, 11);	 // "convert_char3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(192, 11);	 // "convert_char3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(203, 11);	 // "convert_char4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(203, 11);	 // "convert_char4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(203, 11);	 // "convert_char4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(203, 11);	 // "convert_char4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(214, 11);	 // "convert_char8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(214, 11);	 // "convert_char8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(214, 11);	 // "convert_char8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(214, 11);	 // "convert_char8_sat_rtz"
          }
          break;
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt16_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(489, 11);	 // "convert_int16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(489, 11);	 // "convert_int16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(489, 11);	 // "convert_int16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(489, 11);	 // "convert_int16_sat_rtz"
        }
        break;
      case 'l':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(643, 11);	 // "convert_long2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(643, 11);	 // "convert_long2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(643, 11);	 // "convert_long2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(643, 11);	 // "convert_long2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(654, 11);	 // "convert_long3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(654, 11);	 // "convert_long3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(654, 11);	 // "convert_long3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(654, 11);	 // "convert_long3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(665, 11);	 // "convert_long4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(665, 11);	 // "convert_long4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(665, 11);	 // "convert_long4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(665, 11);	 // "convert_long4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(676, 11);	 // "convert_long8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(676, 11);	 // "convert_long8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(676, 11);	 // "convert_long8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(676, 11);	 // "convert_long8_sat_rtz"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(302, 11);	 // "convert_short_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(302, 11);	 // "convert_short_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(302, 11);	 // "convert_short_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(302, 11);	 // "convert_short_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(236, 11);	 // "convert_uchar_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(236, 11);	 // "convert_uchar_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(236, 11);	 // "convert_uchar_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(236, 11);	 // "convert_uchar_sat_rtz"
          }
          break;
        case 'i':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(511, 11);	 // "convert_uint2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(511, 11);	 // "convert_uint2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(511, 11);	 // "convert_uint2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(511, 11);	 // "convert_uint2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(522, 11);	 // "convert_uint3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(522, 11);	 // "convert_uint3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(522, 11);	 // "convert_uint3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(522, 11);	 // "convert_uint3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(533, 11);	 // "convert_uint4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(533, 11);	 // "convert_uint4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(533, 11);	 // "convert_uint4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(533, 11);	 // "convert_uint4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(544, 11);	 // "convert_uint8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(544, 11);	 // "convert_uint8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(544, 11);	 // "convert_uint8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(544, 11);	 // "convert_uint8_sat_rtz"
            }
            break;
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(698, 11);	 // "convert_ulong_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(698, 11);	 // "convert_ulong_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(698, 11);	 // "convert_ulong_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(698, 11);	 // "convert_ulong_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_4x8packed_uu_uint", 20) != 0)
        break;
      return std::make_pair(92, 1);	 // "dot_4x8packed_uu_uint"
    case 'g':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_num_samples", 16) != 0)
          break;
        return std::make_pair(2719, 12);	 // "get_image_num_samples"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+5, "ub_group_", 9) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+15, "q_mask", 6) != 0)
            break;
          return std::make_pair(2751, 1);	 // "get_sub_group_eq_mask"
        case 'g':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2751, 1);	 // "get_sub_group_ge_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2751, 1);	 // "get_sub_group_gt_mask"
          }
          break;
        case 'l':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2751, 1);	 // "get_sub_group_le_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2751, 1);	 // "get_sub_group_lt_mask"
          }
          break;
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "t_user_event_status", 19) != 0)
          break;
        return std::make_pair(2689, 1);	 // "set_user_event_status"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_group_shuffle_xor", 19) != 0)
          break;
        return std::make_pair(37, 1);	 // "sub_group_shuffle_xor"
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ork_group_reduce_", 17) != 0)
        break;
      switch (Name[18]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+19, "dd", 2) != 0)
          break;
        return std::make_pair(2683, 1);	 // "work_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[19]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[20] != 'x')
            break;
          return std::make_pair(2683, 1);	 // "work_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[20] != 'n')
            break;
          return std::make_pair(2683, 1);	 // "work_group_reduce_min"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 68 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_work_item_fence", 21) != 0)
        break;
      return std::make_pair(1751, 1);	 // "atomic_work_item_fence"
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(225, 11);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(225, 11);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(225, 11);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(225, 11);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(687, 11);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(687, 11);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(687, 11);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(687, 11);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(313, 11);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(313, 11);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(313, 11);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(313, 11);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(324, 11);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(324, 11);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(324, 11);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(324, 11);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(335, 11);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(335, 11);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(335, 11);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(335, 11);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(346, 11);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(346, 11);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(346, 11);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(346, 11);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(247, 11);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(247, 11);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(247, 11);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(247, 11);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(258, 11);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(258, 11);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(258, 11);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(258, 11);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(269, 11);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(269, 11);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(269, 11);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(269, 11);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(280, 11);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(280, 11);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(280, 11);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(280, 11);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(555, 11);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(555, 11);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(555, 11);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(555, 11);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(709, 11);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(709, 11);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(709, 11);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(709, 11);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(720, 11);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(720, 11);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(720, 11);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(720, 11);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(731, 11);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(731, 11);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(731, 11);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(731, 11);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(742, 11);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(742, 11);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(742, 11);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(742, 11);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(368, 11);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(368, 11);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(368, 11);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(368, 11);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ax_sub_group_size", 17) != 0)
          break;
        return std::make_pair(2731, 1);	 // "get_max_sub_group_size"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_local_id", 17) != 0)
          break;
        return std::make_pair(2731, 1);	 // "get_sub_group_local_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_shuffle_down", 21) != 0)
        break;
      return std::make_pair(38, 1);	 // "sub_group_shuffle_down"
    }
    break;
  case 23:	 // 31 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_extract_signed", 22) != 0)
        break;
      return std::make_pair(54, 2);	 // "bitfield_extract_signed"
    case 'c':	 // 28 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(357, 11);	 // "convert_short16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(357, 11);	 // "convert_short16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(357, 11);	 // "convert_short16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(357, 11);	 // "convert_short16_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(291, 11);	 // "convert_uchar16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(291, 11);	 // "convert_uchar16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(291, 11);	 // "convert_uchar16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(291, 11);	 // "convert_uchar16_sat_rtz"
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(753, 11);	 // "convert_ulong16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(753, 11);	 // "convert_ulong16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(753, 11);	 // "convert_ulong16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(753, 11);	 // "convert_ulong16_sat_rtz"
          }
          break;
        case 's':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(379, 11);	 // "convert_ushort2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(379, 11);	 // "convert_ushort2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(379, 11);	 // "convert_ushort2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(379, 11);	 // "convert_ushort2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(390, 11);	 // "convert_ushort3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(390, 11);	 // "convert_ushort3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(390, 11);	 // "convert_ushort3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(390, 11);	 // "convert_ushort3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(401, 11);	 // "convert_ushort4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(401, 11);	 // "convert_ushort4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(401, 11);	 // "convert_ushort4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(401, 11);	 // "convert_ushort4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(412, 11);	 // "convert_ushort8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(412, 11);	 // "convert_ushort8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(412, 11);	 // "convert_ushort8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(412, 11);	 // "convert_ushort8_sat_rtz"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+5, "nqueued_local_size", 18) != 0)
          break;
        return std::make_pair(766, 1);	 // "get_enqueued_local_size"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_channel_order", 18) != 0)
          break;
        return std::make_pair(2537, 36);	 // "get_image_channel_order"
      }
      break;
    }
    break;
  case 24:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xchange_explicit", 16) != 0)
          break;
        return std::make_pair(1836, 42);	 // "atomic_exchange_explicit"
      case 'f':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "tch_or_explicit", 15) != 0)
            break;
          return std::make_pair(1962, 24);	 // "atomic_fetch_or_explicit"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+9, "ag_test_and_set", 15) != 0)
            break;
          return std::make_pair(1995, 3);	 // "atomic_flag_test_and_set"
        }
        break;
      }
      break;
    case 'c':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "onvert_ushort16_sat_rt", 22) != 0)
        break;
      switch (Name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(423, 11);	 // "convert_ushort16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(423, 11);	 // "convert_ushort16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(423, 11);	 // "convert_ushort16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(423, 11);	 // "convert_ushort16_sat_rtz"
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_mip_levels", 23) != 0)
        break;
      return std::make_pair(2698, 21);	 // "get_image_num_mip_levels"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_inverse_ballot", 23) != 0)
        break;
      return std::make_pair(2747, 1);	 // "sub_group_inverse_ballot"
    }
    break;
  case 25:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+15, "d_explicit", 10) != 0)
            break;
          return std::make_pair(1902, 48);	 // "atomic_fetch_add_explicit"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+15, "d_explicit", 10) != 0)
            break;
          return std::make_pair(1962, 24);	 // "atomic_fetch_and_explicit"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+15, "x_explicit", 10) != 0)
            break;
          return std::make_pair(1836, 42);	 // "atomic_fetch_max_explicit"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+15, "n_explicit", 10) != 0)
            break;
          return std::make_pair(1836, 42);	 // "atomic_fetch_min_explicit"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub_explicit", 11) != 0)
          break;
        return std::make_pair(1902, 48);	 // "atomic_fetch_sub_explicit"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or_explicit", 11) != 0)
          break;
        return std::make_pair(1962, 24);	 // "atomic_fetch_xor_explicit"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_extract_unsigned", 24) != 0)
        break;
      return std::make_pair(56, 2);	 // "bitfield_extract_unsigned"
    case 's':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 3 strings to match.
        switch (Name[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+12, "llot_find_", 10) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (memcmp(Name.data()+23, "sb", 2) != 0)
              break;
            return std::make_pair(2750, 1);	 // "sub_group_ballot_find_lsb"
          case 'm':	 // 1 string to match.
            if (memcmp(Name.data()+23, "sb", 2) != 0)
              break;
            return std::make_pair(2750, 1);	 // "sub_group_ballot_find_msb"
          }
          break;
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+12, "oadcast_first", 13) != 0)
            break;
          return std::make_pair(2745, 1);	 // "sub_group_broadcast_first"
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(Name.data()+11, "on_uniform_a", 12) != 0)
          break;
        switch (Name[23]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (Name[24] != 'l')
            break;
          return std::make_pair(2742, 1);	 // "sub_group_non_uniform_all"
        case 'n':	 // 1 string to match.
          if (Name[24] != 'y')
            break;
          return std::make_pair(2742, 1);	 // "sub_group_non_uniform_any"
        }
        break;
      }
      break;
    }
    break;
  case 26:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_flag_clear_explicit", 25) != 0)
        break;
      return std::make_pair(1989, 6);	 // "atomic_flag_clear_explicit"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_ballot_bit_count", 25) != 0)
        break;
      return std::make_pair(2749, 1);	 // "sub_group_ballot_bit_count"
    }
    break;
  case 27:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "get_", 4) != 0)
      break;
    switch (Name[4]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+5, "nqueued_num_sub_groups", 22) != 0)
        break;
      return std::make_pair(2732, 1);	 // "get_enqueued_num_sub_groups"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+5, "mage_channel_data_type", 22) != 0)
        break;
      return std::make_pair(2537, 36);	 // "get_image_channel_data_type"
    }
    break;
  case 28:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak", 27) != 0)
        break;
      return std::make_pair(1625, 42);	 // "atomic_compare_exchange_weak"
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "apture_event_profiling_info", 27) != 0)
        break;
      return std::make_pair(2690, 1);	 // "capture_event_profiling_info"
    case 'd':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ot_acc_sat_4x8packed_", 21) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 's':	 // 2 strings to match.
        switch (Name[23]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+24, "_int", 4) != 0)
            break;
          return std::make_pair(95, 1);	 // "dot_acc_sat_4x8packed_ss_int"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+24, "_int", 4) != 0)
            break;
          return std::make_pair(95, 1);	 // "dot_acc_sat_4x8packed_su_int"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+23, "s_int", 5) != 0)
          break;
        return std::make_pair(95, 1);	 // "dot_acc_sat_4x8packed_us_int"
      }
      break;
    case 's':	 // 7 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+11, "allot_bit_extract", 17) != 0)
          break;
        return std::make_pair(2748, 1);	 // "sub_group_ballot_bit_extract"
      case 's':	 // 6 strings to match.
        if (memcmp(Name.data()+11, "can_", 4) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "xclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(2739, 2);	 // "sub_group_scan_exclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(2739, 2);	 // "sub_group_scan_exclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(2739, 2);	 // "sub_group_scan_exclusive_min"
            }
            break;
          }
          break;
        case 'i':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "nclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(2739, 2);	 // "sub_group_scan_inclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(2739, 2);	 // "sub_group_scan_inclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(2739, 2);	 // "sub_group_scan_inclusive_min"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_strided_copy", 28) != 0)
        break;
      return std::make_pair(1482, 2);	 // "async_work_group_strided_copy"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_acc_sat_4x8packed_uu_uint", 28) != 0)
        break;
      return std::make_pair(94, 1);	 // "dot_acc_sat_4x8packed_uu_uint"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_or", 28) != 0)
        break;
      return std::make_pair(40, 1);	 // "sub_group_clustered_reduce_or"
    case 'w':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ork_group_scan_", 15) != 0)
        break;
      switch (Name[16]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "xclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2683, 1);	 // "work_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2683, 1);	 // "work_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2683, 1);	 // "work_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "nclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2683, 1);	 // "work_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2683, 1);	 // "work_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2683, 1);	 // "work_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 30:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_strong", 29) != 0)
        break;
      return std::make_pair(1625, 42);	 // "atomic_compare_exchange_strong"
    case 's':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_", 26) != 0)
        break;
      switch (Name[27]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[28]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[29] != 'd')
            break;
          return std::make_pair(39, 1);	 // "sub_group_clustered_reduce_add"
        case 'n':	 // 1 string to match.
          if (Name[29] != 'd')
            break;
          return std::make_pair(40, 1);	 // "sub_group_clustered_reduce_and"
        }
        break;
      case 'm':	 // 3 strings to match.
        switch (Name[28]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[29] != 'x')
            break;
          return std::make_pair(39, 1);	 // "sub_group_clustered_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[29] != 'n')
            break;
          return std::make_pair(39, 1);	 // "sub_group_clustered_reduce_min"
        case 'u':	 // 1 string to match.
          if (Name[29] != 'l')
            break;
          return std::make_pair(39, 1);	 // "sub_group_clustered_reduce_mul"
        }
        break;
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+28, "or", 2) != 0)
          break;
        return std::make_pair(40, 1);	 // "sub_group_clustered_reduce_xor"
      }
      break;
    }
    break;
  case 31:	 // 5 strings to match.
    if (memcmp(Name.data()+0, "sub_group_", 10) != 0)
      break;
    switch (Name[10]) {
    default: break;
    case 'b':	 // 2 strings to match.
      if (memcmp(Name.data()+11, "allot_", 6) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+18, "xclusive_scan", 13) != 0)
          break;
        return std::make_pair(2750, 1);	 // "sub_group_ballot_exclusive_scan"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+18, "nclusive_scan", 13) != 0)
          break;
        return std::make_pair(2750, 1);	 // "sub_group_ballot_inclusive_scan"
      }
      break;
    case 'n':	 // 3 strings to match.
      if (memcmp(Name.data()+11, "on_uniform_", 11) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+23, "ll_equal", 8) != 0)
          break;
        return std::make_pair(2743, 1);	 // "sub_group_non_uniform_all_equal"
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+23, "roadcast", 8) != 0)
          break;
        return std::make_pair(2744, 1);	 // "sub_group_non_uniform_broadcast"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+23, "educe_or", 8) != 0)
          break;
        return std::make_pair(13, 1);	 // "sub_group_non_uniform_reduce_or"
      }
      break;
    }
    break;
  case 32:	 // 6 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_reduce_", 29) != 0)
      break;
    switch (Name[29]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (Name[30]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (Name[31] != 'd')
          break;
        return std::make_pair(12, 1);	 // "sub_group_non_uniform_reduce_add"
      case 'n':	 // 1 string to match.
        if (Name[31] != 'd')
          break;
        return std::make_pair(13, 1);	 // "sub_group_non_uniform_reduce_and"
      }
      break;
    case 'm':	 // 3 strings to match.
      switch (Name[30]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[31] != 'x')
          break;
        return std::make_pair(12, 1);	 // "sub_group_non_uniform_reduce_max"
      case 'i':	 // 1 string to match.
        if (Name[31] != 'n')
          break;
        return std::make_pair(12, 1);	 // "sub_group_non_uniform_reduce_min"
      case 'u':	 // 1 string to match.
        if (Name[31] != 'l')
          break;
        return std::make_pair(12, 1);	 // "sub_group_non_uniform_reduce_mul"
      }
      break;
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+30, "or", 2) != 0)
        break;
      return std::make_pair(13, 1);	 // "sub_group_non_uniform_reduce_xor"
    }
    break;
  case 33:	 // 1 string to match.
    if (memcmp(Name.data()+0, "atomic_flag_test_and_set_explicit", 33) != 0)
      break;
    return std::make_pair(1998, 6);	 // "atomic_flag_test_and_set_explicit"
  case 37:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak_explicit", 36) != 0)
        break;
      return std::make_pair(1667, 84);	 // "atomic_compare_exchange_weak_explicit"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_logical_or", 36) != 0)
        break;
      return std::make_pair(52, 1);	 // "sub_group_clustered_reduce_logical_or"
    }
    break;
  case 38:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "sub_group_clustered_reduce_logical_", 35) != 0)
      break;
    switch (Name[35]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+36, "nd", 2) != 0)
        break;
      return std::make_pair(52, 1);	 // "sub_group_clustered_reduce_logical_and"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+36, "or", 2) != 0)
        break;
      return std::make_pair(52, 1);	 // "sub_group_clustered_reduce_logical_xor"
    }
    break;
  case 39:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_strong_explicit", 38) != 0)
        break;
      return std::make_pair(1667, 84);	 // "atomic_compare_exchange_strong_explicit"
    case 's':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ub_group_non_uniform_", 21) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+23, "educe_logical_or", 16) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_reduce_logical_or"
      case 's':	 // 2 strings to match.
        if (memcmp(Name.data()+23, "can_", 4) != 0)
          break;
        switch (Name[27]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+28, "xclusive_or", 11) != 0)
            break;
          return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_exclusive_or"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+28, "nclusive_or", 11) != 0)
            break;
          return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_inclusive_or"
        }
        break;
      }
      break;
    }
    break;
  case 40:	 // 14 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_", 22) != 0)
      break;
    switch (Name[22]) {
    default: break;
    case 'r':	 // 2 strings to match.
      if (memcmp(Name.data()+23, "educe_logical_", 14) != 0)
        break;
      switch (Name[37]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+38, "nd", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_reduce_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+38, "or", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_reduce_logical_xor"
      }
      break;
    case 's':	 // 12 strings to match.
      if (memcmp(Name.data()+23, "can_", 4) != 0)
        break;
      switch (Name[27]) {
      default: break;
      case 'e':	 // 6 strings to match.
        if (memcmp(Name.data()+28, "xclusive_", 9) != 0)
          break;
        switch (Name[37]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[38]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_exclusive_add"
          case 'n':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_exclusive_and"
          }
          break;
        case 'm':	 // 3 strings to match.
          switch (Name[38]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[39] != 'x')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[39] != 'n')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_exclusive_min"
          case 'u':	 // 1 string to match.
            if (Name[39] != 'l')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_exclusive_mul"
          }
          break;
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+38, "or", 2) != 0)
            break;
          return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_exclusive_xor"
        }
        break;
      case 'i':	 // 6 strings to match.
        if (memcmp(Name.data()+28, "nclusive_", 9) != 0)
          break;
        switch (Name[37]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[38]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_inclusive_add"
          case 'n':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_inclusive_and"
          }
          break;
        case 'm':	 // 3 strings to match.
          switch (Name[38]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[39] != 'x')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[39] != 'n')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_inclusive_min"
          case 'u':	 // 1 string to match.
            if (Name[39] != 'l')
              break;
            return std::make_pair(12, 1);	 // "sub_group_non_uniform_scan_inclusive_mul"
          }
          break;
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+38, "or", 2) != 0)
            break;
          return std::make_pair(13, 1);	 // "sub_group_non_uniform_scan_inclusive_xor"
        }
        break;
      }
      break;
    }
    break;
  case 47:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_scan_", 27) != 0)
      break;
    switch (Name[27]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+28, "xclusive_logical_or", 19) != 0)
        break;
      return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_or"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+28, "nclusive_logical_or", 19) != 0)
        break;
      return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_or"
    }
    break;
  case 48:	 // 4 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_scan_", 27) != 0)
      break;
    switch (Name[27]) {
    default: break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+28, "xclusive_logical_", 17) != 0)
        break;
      switch (Name[45]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+46, "nd", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+46, "or", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_xor"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (memcmp(Name.data()+28, "nclusive_logical_", 17) != 0)
        break;
      switch (Name[45]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+46, "nd", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+46, "or", 2) != 0)
          break;
        return std::make_pair(14, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_xor"
      }
      break;
    }
    break;
  }
  return std::make_pair(0, 0);
} // isOpenCLBuiltin


static QualType getOpenCLEnumType(Sema &S, llvm::StringRef Name);
static QualType getOpenCLTypedefType(Sema &S, llvm::StringRef Name);

// Convert an OpenCLTypeStruct type to a list of QualTypes.
// Generic types represent multiple types and vector sizes, thus a vector
// is returned. The conversion is done in two steps:
// Step 1: A switch statement fills a vector with scalar base types for the
//         Cartesian product of (vector sizes) x (types) for generic types,
//         or a single scalar type for non generic types.
// Step 2: Qualifiers and other type properties such as vector size are
//         applied.
static void OCL2Qual(Sema &S, const OpenCLTypeStruct &Ty,
                     llvm::SmallVectorImpl<QualType> &QT) {
  ASTContext &Context = S.Context;
  // Number of scalar types in the GenType.
  unsigned GenTypeNumTypes;
  // Pointer to the list of vector sizes for the GenType.
  llvm::ArrayRef<unsigned> GenVectorSizes;
  constexpr unsigned ListVec1[] = {1, };
  constexpr unsigned ListVec1234[] = {1, 2, 3, 4, };
  constexpr unsigned ListVecAndScalar[] = {1, 2, 3, 4, 8, 16, };
  constexpr unsigned ListVecNoScalar[] = {2, 3, 4, 8, 16, };

  switch (Ty.ID) {
    case OCLT_image2d_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAROTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAWOTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAARWTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAADepthROTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAADepthWOTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAADepthRWTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAAROTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAAWOTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAARWTy);
          break;
      }
      break;
    case OCLT_image1d_buffer_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dBufferROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dBufferRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dBufferWOTy);
          break;
      }
      break;
    case OCLT_image1d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dArrayWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayWOTy);
          break;
      }
      break;
    case OCLT_image1d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dWOTy);
          break;
      }
      break;
    case OCLT_image2d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dWOTy);
          break;
      }
      break;
    case OCLT_image3d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage3dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage3dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage3dWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthROTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthWOTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAADepthRWTy);
          break;
      }
      break;
    case OCLT_AGenType1: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(11);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_AGenTypeN: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(66);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AGenTypeNNoScalar: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(55);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_AI2UGenTypeN: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(48);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AIGenType1: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(8);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_AIGenTypeN: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(48);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AIGenTypeNNoScalar: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(40);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_CharShortGenType1: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_FGenTypeN: {
      SmallVector<QualType, 3> TypeList;
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(18);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeCharVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.CharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeCharVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.CharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeDoubleVec1234: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeDoubleVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeDoubleVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeFloatVec1234: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeFloatVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeFloatVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeHalfVec1234: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeHalfVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeHalfVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeIntVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.IntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeIntVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.IntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeLongVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeLongVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeShortVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.ShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeShortVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.ShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUCharVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUCharVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUIntVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedIntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUIntVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedIntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeULongVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeULongVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUShortVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUShortVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_IntLongFloatGenType1: {
      SmallVector<QualType, 7> TypeList;
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(7);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_SGenTypeN: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(24);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_UGenTypeN: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(24);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_atomic_double:
      QT.push_back(Context.getAtomicType(Context.DoubleTy));
      break;
    case OCLT_atomic_flag:
      QT.push_back(getOpenCLTypedefType(S, "atomic_flag"));
      break;
    case OCLT_atomic_float:
      QT.push_back(Context.getAtomicType(Context.FloatTy));
      break;
    case OCLT_atomic_half:
      QT.push_back(Context.getAtomicType(Context.HalfTy));
      break;
    case OCLT_atomic_int:
      QT.push_back(Context.getAtomicType(Context.IntTy));
      break;
    case OCLT_atomic_intptr_t:
      QT.push_back(Context.getAtomicType(Context.getIntPtrType()));
      break;
    case OCLT_atomic_long:
      QT.push_back(Context.getAtomicType(Context.LongTy));
      break;
    case OCLT_atomic_ptrdiff_t:
      QT.push_back(Context.getAtomicType(Context.getPointerDiffType()));
      break;
    case OCLT_atomic_size_t:
      QT.push_back(Context.getAtomicType(Context.getSizeType()));
      break;
    case OCLT_atomic_uint:
      QT.push_back(Context.getAtomicType(Context.UnsignedIntTy));
      break;
    case OCLT_atomic_uintptr_t:
      QT.push_back(Context.getAtomicType(Context.getUIntPtrType()));
      break;
    case OCLT_atomic_ulong:
      QT.push_back(Context.getAtomicType(Context.UnsignedLongTy));
      break;
    case OCLT_bool:
      QT.push_back(Context.BoolTy);
      break;
    case OCLT_char:
      QT.push_back(Context.CharTy);
      break;
    case OCLT_clk_event_t:
      QT.push_back(Context.OCLClkEventTy);
      break;
    case OCLT_clk_profiling_info:
      QT.push_back(getOpenCLTypedefType(S, "clk_profiling_info"));
      break;
    case OCLT_double:
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        QT.push_back(Context.DoubleTy);
      }
      break;
    case OCLT_event_t:
      QT.push_back(Context.OCLEventTy);
      break;
    case OCLT_float:
      QT.push_back(Context.FloatTy);
      break;
    case OCLT_half:
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        QT.push_back(Context.HalfTy);
      }
      break;
    case OCLT_int:
      QT.push_back(Context.IntTy);
      break;
    case OCLT_intptr_t:
      QT.push_back(Context.getIntPtrType());
      break;
    case OCLT_long:
      QT.push_back(Context.LongTy);
      break;
    case OCLT_cl_mem_fence_flags:
      QT.push_back(getOpenCLTypedefType(S, "cl_mem_fence_flags"));
      break;
    case OCLT_memory_order:
      QT.push_back(getOpenCLEnumType(S, "memory_order"));
      break;
    case OCLT_memory_scope:
      QT.push_back(getOpenCLEnumType(S, "memory_scope"));
      break;
    case OCLT_ndrange_t:
      QT.push_back(getOpenCLTypedefType(S, "ndrange_t"));
      break;
    case OCLT_ptrdiff_t:
      QT.push_back(Context.getPointerDiffType());
      break;
    case OCLT_queue_t:
      QT.push_back(Context.OCLQueueTy);
      break;
    case OCLT_reserve_id_t:
      QT.push_back(Context.OCLReserveIDTy);
      break;
    case OCLT_sampler_t:
      QT.push_back(Context.OCLSamplerTy);
      break;
    case OCLT_short:
      QT.push_back(Context.ShortTy);
      break;
    case OCLT_size_t:
      QT.push_back(Context.getSizeType());
      break;
    case OCLT_uchar:
      QT.push_back(Context.UnsignedCharTy);
      break;
    case OCLT_uint:
      QT.push_back(Context.UnsignedIntTy);
      break;
    case OCLT_uintptr_t:
      QT.push_back(Context.getUIntPtrType());
      break;
    case OCLT_ulong:
      QT.push_back(Context.UnsignedLongTy);
      break;
    case OCLT_ushort:
      QT.push_back(Context.UnsignedShortTy);
      break;
    case OCLT_void:
      QT.push_back(Context.VoidTy);
      break;
  } // end of switch (Ty.ID)

  // Construct the different vector types for each generic type.
  if (Ty.ID >= 51) {
    for (unsigned I = 0; I < QT.size(); I++) {
      // For scalars, size is 1.
      if (GenVectorSizes[I / GenTypeNumTypes] != 1) {
        QT[I] = Context.getExtVectorType(QT[I],
                          GenVectorSizes[I / GenTypeNumTypes]);
      }
    }
  }

  // Set vector size for non-generic vector types.
  if (Ty.VectorWidth > 1) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getExtVectorType(QT[Index], Ty.VectorWidth);
    }
  }

  if (Ty.IsVolatile != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getVolatileType(QT[Index]);
    }
  }

  if (Ty.IsConst != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getConstType(QT[Index]);
    }
  }

  // Transform the type to a pointer as the last step, if necessary.
  // Builtin functions only have pointers on [const|volatile], no
  // [const|volatile] pointers, so this is ok to do it as a last step.
  if (Ty.IsPointer != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getAddrSpaceQualType(QT[Index], Ty.AS);
      QT[Index] = Context.getPointerType(QT[Index]);
    }
  }

} // OCL2Qual
