#ifdef GET_OPCODE_NAMES
OP_AddSint8,
OP_AddUint8,
OP_AddSint16,
OP_AddUint16,
OP_AddSint32,
OP_AddUint32,
OP_AddSint64,
OP_AddUint64,
OP_AddBool,
#endif
#ifdef GET_INTERP
case OP_AddSint8: {
  if (!Add<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_AddUint8: {
  if (!Add<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_AddSint16: {
  if (!Add<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_AddUint16: {
  if (!Add<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_AddSint32: {
  if (!Add<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_AddUint32: {
  if (!Add<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_AddSint64: {
  if (!Add<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_AddUint64: {
  if (!Add<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_AddBool: {
  if (!Add<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_AddSint8:
  PrintName("AddSint8");
  OS << "\t" << "\n";
  continue;
case OP_AddUint8:
  PrintName("AddUint8");
  OS << "\t" << "\n";
  continue;
case OP_AddSint16:
  PrintName("AddSint16");
  OS << "\t" << "\n";
  continue;
case OP_AddUint16:
  PrintName("AddUint16");
  OS << "\t" << "\n";
  continue;
case OP_AddSint32:
  PrintName("AddSint32");
  OS << "\t" << "\n";
  continue;
case OP_AddUint32:
  PrintName("AddUint32");
  OS << "\t" << "\n";
  continue;
case OP_AddSint64:
  PrintName("AddSint64");
  OS << "\t" << "\n";
  continue;
case OP_AddUint64:
  PrintName("AddUint64");
  OS << "\t" << "\n";
  continue;
case OP_AddBool:
  PrintName("AddBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitAddSint8(const SourceInfo &);
bool emitAddUint8(const SourceInfo &);
bool emitAddSint16(const SourceInfo &);
bool emitAddUint16(const SourceInfo &);
bool emitAddSint32(const SourceInfo &);
bool emitAddUint32(const SourceInfo &);
bool emitAddSint64(const SourceInfo &);
bool emitAddUint64(const SourceInfo &);
bool emitAddBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitAdd(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitAdd(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitAddSint8(I);
  case PT_Uint8:
    return emitAddUint8(I);
  case PT_Sint16:
    return emitAddSint16(I);
  case PT_Uint16:
    return emitAddUint16(I);
  case PT_Sint32:
    return emitAddSint32(I);
  case PT_Uint32:
    return emitAddUint32(I);
  case PT_Sint64:
    return emitAddSint64(I);
  case PT_Uint64:
    return emitAddUint64(I);
  case PT_Bool:
    return emitAddBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitAddSint8(const SourceInfo &L) {
  return emitOp<>(OP_AddSint8, L);
}
bool ByteCodeEmitter::emitAddUint8(const SourceInfo &L) {
  return emitOp<>(OP_AddUint8, L);
}
bool ByteCodeEmitter::emitAddSint16(const SourceInfo &L) {
  return emitOp<>(OP_AddSint16, L);
}
bool ByteCodeEmitter::emitAddUint16(const SourceInfo &L) {
  return emitOp<>(OP_AddUint16, L);
}
bool ByteCodeEmitter::emitAddSint32(const SourceInfo &L) {
  return emitOp<>(OP_AddSint32, L);
}
bool ByteCodeEmitter::emitAddUint32(const SourceInfo &L) {
  return emitOp<>(OP_AddUint32, L);
}
bool ByteCodeEmitter::emitAddSint64(const SourceInfo &L) {
  return emitOp<>(OP_AddSint64, L);
}
bool ByteCodeEmitter::emitAddUint64(const SourceInfo &L) {
  return emitOp<>(OP_AddUint64, L);
}
bool ByteCodeEmitter::emitAddBool(const SourceInfo &L) {
  return emitOp<>(OP_AddBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitAddSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitAddUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitAddSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitAddUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitAddSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitAddUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitAddSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitAddUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitAddBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Add<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_AddOffsetSint8,
OP_AddOffsetUint8,
OP_AddOffsetSint16,
OP_AddOffsetUint16,
OP_AddOffsetSint32,
OP_AddOffsetUint32,
OP_AddOffsetSint64,
OP_AddOffsetUint64,
OP_AddOffsetBool,
#endif
#ifdef GET_INTERP
case OP_AddOffsetSint8: {
  if (!AddOffset<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetUint8: {
  if (!AddOffset<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetSint16: {
  if (!AddOffset<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetUint16: {
  if (!AddOffset<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetSint32: {
  if (!AddOffset<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetUint32: {
  if (!AddOffset<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetSint64: {
  if (!AddOffset<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetUint64: {
  if (!AddOffset<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_AddOffsetBool: {
  if (!AddOffset<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_AddOffsetSint8:
  PrintName("AddOffsetSint8");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetUint8:
  PrintName("AddOffsetUint8");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetSint16:
  PrintName("AddOffsetSint16");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetUint16:
  PrintName("AddOffsetUint16");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetSint32:
  PrintName("AddOffsetSint32");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetUint32:
  PrintName("AddOffsetUint32");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetSint64:
  PrintName("AddOffsetSint64");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetUint64:
  PrintName("AddOffsetUint64");
  OS << "\t" << "\n";
  continue;
case OP_AddOffsetBool:
  PrintName("AddOffsetBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitAddOffsetSint8(const SourceInfo &);
bool emitAddOffsetUint8(const SourceInfo &);
bool emitAddOffsetSint16(const SourceInfo &);
bool emitAddOffsetUint16(const SourceInfo &);
bool emitAddOffsetSint32(const SourceInfo &);
bool emitAddOffsetUint32(const SourceInfo &);
bool emitAddOffsetSint64(const SourceInfo &);
bool emitAddOffsetUint64(const SourceInfo &);
bool emitAddOffsetBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitAddOffset(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitAddOffset(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitAddOffsetSint8(I);
  case PT_Uint8:
    return emitAddOffsetUint8(I);
  case PT_Sint16:
    return emitAddOffsetSint16(I);
  case PT_Uint16:
    return emitAddOffsetUint16(I);
  case PT_Sint32:
    return emitAddOffsetSint32(I);
  case PT_Uint32:
    return emitAddOffsetUint32(I);
  case PT_Sint64:
    return emitAddOffsetSint64(I);
  case PT_Uint64:
    return emitAddOffsetUint64(I);
  case PT_Bool:
    return emitAddOffsetBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitAddOffsetSint8(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetSint8, L);
}
bool ByteCodeEmitter::emitAddOffsetUint8(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetUint8, L);
}
bool ByteCodeEmitter::emitAddOffsetSint16(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetSint16, L);
}
bool ByteCodeEmitter::emitAddOffsetUint16(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetUint16, L);
}
bool ByteCodeEmitter::emitAddOffsetSint32(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetSint32, L);
}
bool ByteCodeEmitter::emitAddOffsetUint32(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetUint32, L);
}
bool ByteCodeEmitter::emitAddOffsetSint64(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetSint64, L);
}
bool ByteCodeEmitter::emitAddOffsetUint64(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetUint64, L);
}
bool ByteCodeEmitter::emitAddOffsetBool(const SourceInfo &L) {
  return emitOp<>(OP_AddOffsetBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitAddOffsetSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitAddOffsetBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return AddOffset<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstBool,
#endif
#ifdef GET_INTERP
case OP_ConstBool: {
  auto V0 = ReadArg<bool>(S, PC);
  if (!Const<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstBool:
  PrintName("ConstBool");
  OS << "\t" << ReadArg<bool>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstBool(bool, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstBool(bool A0, const SourceInfo &L) {
  return emitOp<bool>(OP_ConstBool, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstBool(bool A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Bool>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstSint16,
#endif
#ifdef GET_INTERP
case OP_ConstSint16: {
  auto V0 = ReadArg<int16_t>(S, PC);
  if (!Const<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstSint16:
  PrintName("ConstSint16");
  OS << "\t" << ReadArg<int16_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstSint16(int16_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstSint16(int16_t A0, const SourceInfo &L) {
  return emitOp<int16_t>(OP_ConstSint16, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstSint16(int16_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Sint16>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstSint32,
#endif
#ifdef GET_INTERP
case OP_ConstSint32: {
  auto V0 = ReadArg<int32_t>(S, PC);
  if (!Const<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstSint32:
  PrintName("ConstSint32");
  OS << "\t" << ReadArg<int32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstSint32(int32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstSint32(int32_t A0, const SourceInfo &L) {
  return emitOp<int32_t>(OP_ConstSint32, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstSint32(int32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Sint32>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstSint64,
#endif
#ifdef GET_INTERP
case OP_ConstSint64: {
  auto V0 = ReadArg<int64_t>(S, PC);
  if (!Const<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstSint64:
  PrintName("ConstSint64");
  OS << "\t" << ReadArg<int64_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstSint64(int64_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstSint64(int64_t A0, const SourceInfo &L) {
  return emitOp<int64_t>(OP_ConstSint64, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstSint64(int64_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Sint64>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstSint8,
#endif
#ifdef GET_INTERP
case OP_ConstSint8: {
  auto V0 = ReadArg<int8_t>(S, PC);
  if (!Const<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstSint8:
  PrintName("ConstSint8");
  OS << "\t" << ReadArg<int8_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstSint8(int8_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstSint8(int8_t A0, const SourceInfo &L) {
  return emitOp<int8_t>(OP_ConstSint8, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstSint8(int8_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Sint8>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstUint16,
#endif
#ifdef GET_INTERP
case OP_ConstUint16: {
  auto V0 = ReadArg<uint16_t>(S, PC);
  if (!Const<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstUint16:
  PrintName("ConstUint16");
  OS << "\t" << ReadArg<uint16_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstUint16(uint16_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstUint16(uint16_t A0, const SourceInfo &L) {
  return emitOp<uint16_t>(OP_ConstUint16, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstUint16(uint16_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Uint16>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstUint32,
#endif
#ifdef GET_INTERP
case OP_ConstUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!Const<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstUint32:
  PrintName("ConstUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstUint32(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_ConstUint32, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Uint32>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstUint64,
#endif
#ifdef GET_INTERP
case OP_ConstUint64: {
  auto V0 = ReadArg<uint64_t>(S, PC);
  if (!Const<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstUint64:
  PrintName("ConstUint64");
  OS << "\t" << ReadArg<uint64_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstUint64(uint64_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstUint64(uint64_t A0, const SourceInfo &L) {
  return emitOp<uint64_t>(OP_ConstUint64, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstUint64(uint64_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Uint64>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ConstUint8,
#endif
#ifdef GET_INTERP
case OP_ConstUint8: {
  auto V0 = ReadArg<uint8_t>(S, PC);
  if (!Const<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ConstUint8:
  PrintName("ConstUint8");
  OS << "\t" << ReadArg<uint8_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitConstUint8(uint8_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitConstUint8(uint8_t A0, const SourceInfo &L) {
  return emitOp<uint8_t>(OP_ConstUint8, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitConstUint8(uint8_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Const<PT_Uint8>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_Destroy,
#endif
#ifdef GET_INTERP
case OP_Destroy: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!Destroy(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_Destroy:
  PrintName("Destroy");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitDestroy(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitDestroy(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_Destroy, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_DupSint8,
OP_DupUint8,
OP_DupSint16,
OP_DupUint16,
OP_DupSint32,
OP_DupUint32,
OP_DupSint64,
OP_DupUint64,
OP_DupBool,
OP_DupPtr,
#endif
#ifdef GET_INTERP
case OP_DupSint8: {
  if (!Dup<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_DupUint8: {
  if (!Dup<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_DupSint16: {
  if (!Dup<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_DupUint16: {
  if (!Dup<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_DupSint32: {
  if (!Dup<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_DupUint32: {
  if (!Dup<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_DupSint64: {
  if (!Dup<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_DupUint64: {
  if (!Dup<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_DupBool: {
  if (!Dup<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_DupPtr: {
  if (!Dup<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_DupSint8:
  PrintName("DupSint8");
  OS << "\t" << "\n";
  continue;
case OP_DupUint8:
  PrintName("DupUint8");
  OS << "\t" << "\n";
  continue;
case OP_DupSint16:
  PrintName("DupSint16");
  OS << "\t" << "\n";
  continue;
case OP_DupUint16:
  PrintName("DupUint16");
  OS << "\t" << "\n";
  continue;
case OP_DupSint32:
  PrintName("DupSint32");
  OS << "\t" << "\n";
  continue;
case OP_DupUint32:
  PrintName("DupUint32");
  OS << "\t" << "\n";
  continue;
case OP_DupSint64:
  PrintName("DupSint64");
  OS << "\t" << "\n";
  continue;
case OP_DupUint64:
  PrintName("DupUint64");
  OS << "\t" << "\n";
  continue;
case OP_DupBool:
  PrintName("DupBool");
  OS << "\t" << "\n";
  continue;
case OP_DupPtr:
  PrintName("DupPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitDupSint8(const SourceInfo &);
bool emitDupUint8(const SourceInfo &);
bool emitDupSint16(const SourceInfo &);
bool emitDupUint16(const SourceInfo &);
bool emitDupSint32(const SourceInfo &);
bool emitDupUint32(const SourceInfo &);
bool emitDupSint64(const SourceInfo &);
bool emitDupUint64(const SourceInfo &);
bool emitDupBool(const SourceInfo &);
bool emitDupPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitDup(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitDup(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitDupSint8(I);
  case PT_Uint8:
    return emitDupUint8(I);
  case PT_Sint16:
    return emitDupSint16(I);
  case PT_Uint16:
    return emitDupUint16(I);
  case PT_Sint32:
    return emitDupSint32(I);
  case PT_Uint32:
    return emitDupUint32(I);
  case PT_Sint64:
    return emitDupSint64(I);
  case PT_Uint64:
    return emitDupUint64(I);
  case PT_Bool:
    return emitDupBool(I);
  case PT_Ptr:
    return emitDupPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitDupSint8(const SourceInfo &L) {
  return emitOp<>(OP_DupSint8, L);
}
bool ByteCodeEmitter::emitDupUint8(const SourceInfo &L) {
  return emitOp<>(OP_DupUint8, L);
}
bool ByteCodeEmitter::emitDupSint16(const SourceInfo &L) {
  return emitOp<>(OP_DupSint16, L);
}
bool ByteCodeEmitter::emitDupUint16(const SourceInfo &L) {
  return emitOp<>(OP_DupUint16, L);
}
bool ByteCodeEmitter::emitDupSint32(const SourceInfo &L) {
  return emitOp<>(OP_DupSint32, L);
}
bool ByteCodeEmitter::emitDupUint32(const SourceInfo &L) {
  return emitOp<>(OP_DupUint32, L);
}
bool ByteCodeEmitter::emitDupSint64(const SourceInfo &L) {
  return emitOp<>(OP_DupSint64, L);
}
bool ByteCodeEmitter::emitDupUint64(const SourceInfo &L) {
  return emitOp<>(OP_DupUint64, L);
}
bool ByteCodeEmitter::emitDupBool(const SourceInfo &L) {
  return emitOp<>(OP_DupBool, L);
}
bool ByteCodeEmitter::emitDupPtr(const SourceInfo &L) {
  return emitOp<>(OP_DupPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitDupSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitDupUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitDupSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitDupUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitDupSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitDupUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitDupSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitDupUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitDupBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitDupPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Dup<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_EQSint8,
OP_EQUint8,
OP_EQSint16,
OP_EQUint16,
OP_EQSint32,
OP_EQUint32,
OP_EQSint64,
OP_EQUint64,
OP_EQBool,
OP_EQPtr,
#endif
#ifdef GET_INTERP
case OP_EQSint8: {
  if (!EQ<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_EQUint8: {
  if (!EQ<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_EQSint16: {
  if (!EQ<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_EQUint16: {
  if (!EQ<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_EQSint32: {
  if (!EQ<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_EQUint32: {
  if (!EQ<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_EQSint64: {
  if (!EQ<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_EQUint64: {
  if (!EQ<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_EQBool: {
  if (!EQ<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_EQPtr: {
  if (!EQ<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_EQSint8:
  PrintName("EQSint8");
  OS << "\t" << "\n";
  continue;
case OP_EQUint8:
  PrintName("EQUint8");
  OS << "\t" << "\n";
  continue;
case OP_EQSint16:
  PrintName("EQSint16");
  OS << "\t" << "\n";
  continue;
case OP_EQUint16:
  PrintName("EQUint16");
  OS << "\t" << "\n";
  continue;
case OP_EQSint32:
  PrintName("EQSint32");
  OS << "\t" << "\n";
  continue;
case OP_EQUint32:
  PrintName("EQUint32");
  OS << "\t" << "\n";
  continue;
case OP_EQSint64:
  PrintName("EQSint64");
  OS << "\t" << "\n";
  continue;
case OP_EQUint64:
  PrintName("EQUint64");
  OS << "\t" << "\n";
  continue;
case OP_EQBool:
  PrintName("EQBool");
  OS << "\t" << "\n";
  continue;
case OP_EQPtr:
  PrintName("EQPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitEQSint8(const SourceInfo &);
bool emitEQUint8(const SourceInfo &);
bool emitEQSint16(const SourceInfo &);
bool emitEQUint16(const SourceInfo &);
bool emitEQSint32(const SourceInfo &);
bool emitEQUint32(const SourceInfo &);
bool emitEQSint64(const SourceInfo &);
bool emitEQUint64(const SourceInfo &);
bool emitEQBool(const SourceInfo &);
bool emitEQPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitEQ(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitEQ(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitEQSint8(I);
  case PT_Uint8:
    return emitEQUint8(I);
  case PT_Sint16:
    return emitEQSint16(I);
  case PT_Uint16:
    return emitEQUint16(I);
  case PT_Sint32:
    return emitEQSint32(I);
  case PT_Uint32:
    return emitEQUint32(I);
  case PT_Sint64:
    return emitEQSint64(I);
  case PT_Uint64:
    return emitEQUint64(I);
  case PT_Bool:
    return emitEQBool(I);
  case PT_Ptr:
    return emitEQPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitEQSint8(const SourceInfo &L) {
  return emitOp<>(OP_EQSint8, L);
}
bool ByteCodeEmitter::emitEQUint8(const SourceInfo &L) {
  return emitOp<>(OP_EQUint8, L);
}
bool ByteCodeEmitter::emitEQSint16(const SourceInfo &L) {
  return emitOp<>(OP_EQSint16, L);
}
bool ByteCodeEmitter::emitEQUint16(const SourceInfo &L) {
  return emitOp<>(OP_EQUint16, L);
}
bool ByteCodeEmitter::emitEQSint32(const SourceInfo &L) {
  return emitOp<>(OP_EQSint32, L);
}
bool ByteCodeEmitter::emitEQUint32(const SourceInfo &L) {
  return emitOp<>(OP_EQUint32, L);
}
bool ByteCodeEmitter::emitEQSint64(const SourceInfo &L) {
  return emitOp<>(OP_EQSint64, L);
}
bool ByteCodeEmitter::emitEQUint64(const SourceInfo &L) {
  return emitOp<>(OP_EQUint64, L);
}
bool ByteCodeEmitter::emitEQBool(const SourceInfo &L) {
  return emitOp<>(OP_EQBool, L);
}
bool ByteCodeEmitter::emitEQPtr(const SourceInfo &L) {
  return emitOp<>(OP_EQPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitEQSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitEQUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitEQSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitEQUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitEQSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitEQUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitEQSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitEQUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitEQBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitEQPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return EQ<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ExpandPtr,
#endif
#ifdef GET_INTERP
case OP_ExpandPtr: {
  if (!ExpandPtr(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ExpandPtr:
  PrintName("ExpandPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitExpandPtr(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitExpandPtr(const SourceInfo &L) {
  return emitOp<>(OP_ExpandPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitExpandPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return ExpandPtr(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GESint8,
OP_GEUint8,
OP_GESint16,
OP_GEUint16,
OP_GESint32,
OP_GEUint32,
OP_GESint64,
OP_GEUint64,
OP_GEBool,
OP_GEPtr,
#endif
#ifdef GET_INTERP
case OP_GESint8: {
  if (!GE<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_GEUint8: {
  if (!GE<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_GESint16: {
  if (!GE<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_GEUint16: {
  if (!GE<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_GESint32: {
  if (!GE<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_GEUint32: {
  if (!GE<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_GESint64: {
  if (!GE<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_GEUint64: {
  if (!GE<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_GEBool: {
  if (!GE<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_GEPtr: {
  if (!GE<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GESint8:
  PrintName("GESint8");
  OS << "\t" << "\n";
  continue;
case OP_GEUint8:
  PrintName("GEUint8");
  OS << "\t" << "\n";
  continue;
case OP_GESint16:
  PrintName("GESint16");
  OS << "\t" << "\n";
  continue;
case OP_GEUint16:
  PrintName("GEUint16");
  OS << "\t" << "\n";
  continue;
case OP_GESint32:
  PrintName("GESint32");
  OS << "\t" << "\n";
  continue;
case OP_GEUint32:
  PrintName("GEUint32");
  OS << "\t" << "\n";
  continue;
case OP_GESint64:
  PrintName("GESint64");
  OS << "\t" << "\n";
  continue;
case OP_GEUint64:
  PrintName("GEUint64");
  OS << "\t" << "\n";
  continue;
case OP_GEBool:
  PrintName("GEBool");
  OS << "\t" << "\n";
  continue;
case OP_GEPtr:
  PrintName("GEPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGESint8(const SourceInfo &);
bool emitGEUint8(const SourceInfo &);
bool emitGESint16(const SourceInfo &);
bool emitGEUint16(const SourceInfo &);
bool emitGESint32(const SourceInfo &);
bool emitGEUint32(const SourceInfo &);
bool emitGESint64(const SourceInfo &);
bool emitGEUint64(const SourceInfo &);
bool emitGEBool(const SourceInfo &);
bool emitGEPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGE(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGE(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGESint8(I);
  case PT_Uint8:
    return emitGEUint8(I);
  case PT_Sint16:
    return emitGESint16(I);
  case PT_Uint16:
    return emitGEUint16(I);
  case PT_Sint32:
    return emitGESint32(I);
  case PT_Uint32:
    return emitGEUint32(I);
  case PT_Sint64:
    return emitGESint64(I);
  case PT_Uint64:
    return emitGEUint64(I);
  case PT_Bool:
    return emitGEBool(I);
  case PT_Ptr:
    return emitGEPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGESint8(const SourceInfo &L) {
  return emitOp<>(OP_GESint8, L);
}
bool ByteCodeEmitter::emitGEUint8(const SourceInfo &L) {
  return emitOp<>(OP_GEUint8, L);
}
bool ByteCodeEmitter::emitGESint16(const SourceInfo &L) {
  return emitOp<>(OP_GESint16, L);
}
bool ByteCodeEmitter::emitGEUint16(const SourceInfo &L) {
  return emitOp<>(OP_GEUint16, L);
}
bool ByteCodeEmitter::emitGESint32(const SourceInfo &L) {
  return emitOp<>(OP_GESint32, L);
}
bool ByteCodeEmitter::emitGEUint32(const SourceInfo &L) {
  return emitOp<>(OP_GEUint32, L);
}
bool ByteCodeEmitter::emitGESint64(const SourceInfo &L) {
  return emitOp<>(OP_GESint64, L);
}
bool ByteCodeEmitter::emitGEUint64(const SourceInfo &L) {
  return emitOp<>(OP_GEUint64, L);
}
bool ByteCodeEmitter::emitGEBool(const SourceInfo &L) {
  return emitOp<>(OP_GEBool, L);
}
bool ByteCodeEmitter::emitGEPtr(const SourceInfo &L) {
  return emitOp<>(OP_GEPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGESint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitGEUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitGESint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitGEUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitGESint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitGEUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitGESint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitGEUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitGEBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitGEPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GE<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GTSint8,
OP_GTUint8,
OP_GTSint16,
OP_GTUint16,
OP_GTSint32,
OP_GTUint32,
OP_GTSint64,
OP_GTUint64,
OP_GTBool,
OP_GTPtr,
#endif
#ifdef GET_INTERP
case OP_GTSint8: {
  if (!GT<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_GTUint8: {
  if (!GT<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_GTSint16: {
  if (!GT<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_GTUint16: {
  if (!GT<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_GTSint32: {
  if (!GT<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_GTUint32: {
  if (!GT<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_GTSint64: {
  if (!GT<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_GTUint64: {
  if (!GT<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_GTBool: {
  if (!GT<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_GTPtr: {
  if (!GT<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GTSint8:
  PrintName("GTSint8");
  OS << "\t" << "\n";
  continue;
case OP_GTUint8:
  PrintName("GTUint8");
  OS << "\t" << "\n";
  continue;
case OP_GTSint16:
  PrintName("GTSint16");
  OS << "\t" << "\n";
  continue;
case OP_GTUint16:
  PrintName("GTUint16");
  OS << "\t" << "\n";
  continue;
case OP_GTSint32:
  PrintName("GTSint32");
  OS << "\t" << "\n";
  continue;
case OP_GTUint32:
  PrintName("GTUint32");
  OS << "\t" << "\n";
  continue;
case OP_GTSint64:
  PrintName("GTSint64");
  OS << "\t" << "\n";
  continue;
case OP_GTUint64:
  PrintName("GTUint64");
  OS << "\t" << "\n";
  continue;
case OP_GTBool:
  PrintName("GTBool");
  OS << "\t" << "\n";
  continue;
case OP_GTPtr:
  PrintName("GTPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGTSint8(const SourceInfo &);
bool emitGTUint8(const SourceInfo &);
bool emitGTSint16(const SourceInfo &);
bool emitGTUint16(const SourceInfo &);
bool emitGTSint32(const SourceInfo &);
bool emitGTUint32(const SourceInfo &);
bool emitGTSint64(const SourceInfo &);
bool emitGTUint64(const SourceInfo &);
bool emitGTBool(const SourceInfo &);
bool emitGTPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGT(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGT(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGTSint8(I);
  case PT_Uint8:
    return emitGTUint8(I);
  case PT_Sint16:
    return emitGTSint16(I);
  case PT_Uint16:
    return emitGTUint16(I);
  case PT_Sint32:
    return emitGTSint32(I);
  case PT_Uint32:
    return emitGTUint32(I);
  case PT_Sint64:
    return emitGTSint64(I);
  case PT_Uint64:
    return emitGTUint64(I);
  case PT_Bool:
    return emitGTBool(I);
  case PT_Ptr:
    return emitGTPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGTSint8(const SourceInfo &L) {
  return emitOp<>(OP_GTSint8, L);
}
bool ByteCodeEmitter::emitGTUint8(const SourceInfo &L) {
  return emitOp<>(OP_GTUint8, L);
}
bool ByteCodeEmitter::emitGTSint16(const SourceInfo &L) {
  return emitOp<>(OP_GTSint16, L);
}
bool ByteCodeEmitter::emitGTUint16(const SourceInfo &L) {
  return emitOp<>(OP_GTUint16, L);
}
bool ByteCodeEmitter::emitGTSint32(const SourceInfo &L) {
  return emitOp<>(OP_GTSint32, L);
}
bool ByteCodeEmitter::emitGTUint32(const SourceInfo &L) {
  return emitOp<>(OP_GTUint32, L);
}
bool ByteCodeEmitter::emitGTSint64(const SourceInfo &L) {
  return emitOp<>(OP_GTSint64, L);
}
bool ByteCodeEmitter::emitGTUint64(const SourceInfo &L) {
  return emitOp<>(OP_GTUint64, L);
}
bool ByteCodeEmitter::emitGTBool(const SourceInfo &L) {
  return emitOp<>(OP_GTBool, L);
}
bool ByteCodeEmitter::emitGTPtr(const SourceInfo &L) {
  return emitOp<>(OP_GTPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGTSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitGTUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitGTSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitGTUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitGTSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitGTUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitGTSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitGTUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitGTBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitGTPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GT<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetFieldSint8,
OP_GetFieldUint8,
OP_GetFieldSint16,
OP_GetFieldUint16,
OP_GetFieldSint32,
OP_GetFieldUint32,
OP_GetFieldSint64,
OP_GetFieldUint64,
OP_GetFieldBool,
OP_GetFieldPtr,
#endif
#ifdef GET_INTERP
case OP_GetFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetFieldSint8:
  PrintName("GetFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldUint8:
  PrintName("GetFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldSint16:
  PrintName("GetFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldUint16:
  PrintName("GetFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldSint32:
  PrintName("GetFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldUint32:
  PrintName("GetFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldSint64:
  PrintName("GetFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldUint64:
  PrintName("GetFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldBool:
  PrintName("GetFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPtr:
  PrintName("GetFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetFieldSint8(uint32_t, const SourceInfo &);
bool emitGetFieldUint8(uint32_t, const SourceInfo &);
bool emitGetFieldSint16(uint32_t, const SourceInfo &);
bool emitGetFieldUint16(uint32_t, const SourceInfo &);
bool emitGetFieldSint32(uint32_t, const SourceInfo &);
bool emitGetFieldUint32(uint32_t, const SourceInfo &);
bool emitGetFieldSint64(uint32_t, const SourceInfo &);
bool emitGetFieldUint64(uint32_t, const SourceInfo &);
bool emitGetFieldBool(uint32_t, const SourceInfo &);
bool emitGetFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGetFieldSint8(A0, I);
  case PT_Uint8:
    return emitGetFieldUint8(A0, I);
  case PT_Sint16:
    return emitGetFieldSint16(A0, I);
  case PT_Uint16:
    return emitGetFieldUint16(A0, I);
  case PT_Sint32:
    return emitGetFieldSint32(A0, I);
  case PT_Uint32:
    return emitGetFieldUint32(A0, I);
  case PT_Sint64:
    return emitGetFieldSint64(A0, I);
  case PT_Uint64:
    return emitGetFieldUint64(A0, I);
  case PT_Bool:
    return emitGetFieldBool(A0, I);
  case PT_Ptr:
    return emitGetFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitGetFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitGetFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitGetFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitGetFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitGetFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitGetFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitGetFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitGetFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldBool, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetFieldPopSint8,
OP_GetFieldPopUint8,
OP_GetFieldPopSint16,
OP_GetFieldPopUint16,
OP_GetFieldPopSint32,
OP_GetFieldPopUint32,
OP_GetFieldPopSint64,
OP_GetFieldPopUint64,
OP_GetFieldPopBool,
OP_GetFieldPopPtr,
#endif
#ifdef GET_INTERP
case OP_GetFieldPopSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetFieldPopPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetFieldPop<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetFieldPopSint8:
  PrintName("GetFieldPopSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopUint8:
  PrintName("GetFieldPopUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopSint16:
  PrintName("GetFieldPopSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopUint16:
  PrintName("GetFieldPopUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopSint32:
  PrintName("GetFieldPopSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopUint32:
  PrintName("GetFieldPopUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopSint64:
  PrintName("GetFieldPopSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopUint64:
  PrintName("GetFieldPopUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopBool:
  PrintName("GetFieldPopBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetFieldPopPtr:
  PrintName("GetFieldPopPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetFieldPopSint8(uint32_t, const SourceInfo &);
bool emitGetFieldPopUint8(uint32_t, const SourceInfo &);
bool emitGetFieldPopSint16(uint32_t, const SourceInfo &);
bool emitGetFieldPopUint16(uint32_t, const SourceInfo &);
bool emitGetFieldPopSint32(uint32_t, const SourceInfo &);
bool emitGetFieldPopUint32(uint32_t, const SourceInfo &);
bool emitGetFieldPopSint64(uint32_t, const SourceInfo &);
bool emitGetFieldPopUint64(uint32_t, const SourceInfo &);
bool emitGetFieldPopBool(uint32_t, const SourceInfo &);
bool emitGetFieldPopPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetFieldPop(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetFieldPop(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGetFieldPopSint8(A0, I);
  case PT_Uint8:
    return emitGetFieldPopUint8(A0, I);
  case PT_Sint16:
    return emitGetFieldPopSint16(A0, I);
  case PT_Uint16:
    return emitGetFieldPopUint16(A0, I);
  case PT_Sint32:
    return emitGetFieldPopSint32(A0, I);
  case PT_Uint32:
    return emitGetFieldPopUint32(A0, I);
  case PT_Sint64:
    return emitGetFieldPopSint64(A0, I);
  case PT_Uint64:
    return emitGetFieldPopUint64(A0, I);
  case PT_Bool:
    return emitGetFieldPopBool(A0, I);
  case PT_Ptr:
    return emitGetFieldPopPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetFieldPopSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopSint8, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopUint8, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopSint16, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopUint16, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopSint32, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopUint32, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopSint64, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopUint64, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopBool, A0, L);
}
bool ByteCodeEmitter::emitGetFieldPopPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetFieldPopPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetFieldPopSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitGetFieldPopPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetFieldPop<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetGlobalSint8,
OP_GetGlobalUint8,
OP_GetGlobalSint16,
OP_GetGlobalUint16,
OP_GetGlobalSint32,
OP_GetGlobalUint32,
OP_GetGlobalSint64,
OP_GetGlobalUint64,
OP_GetGlobalBool,
OP_GetGlobalPtr,
#endif
#ifdef GET_INTERP
case OP_GetGlobalSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetGlobalPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetGlobal<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetGlobalSint8:
  PrintName("GetGlobalSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalUint8:
  PrintName("GetGlobalUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalSint16:
  PrintName("GetGlobalSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalUint16:
  PrintName("GetGlobalUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalSint32:
  PrintName("GetGlobalSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalUint32:
  PrintName("GetGlobalUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalSint64:
  PrintName("GetGlobalSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalUint64:
  PrintName("GetGlobalUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalBool:
  PrintName("GetGlobalBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetGlobalPtr:
  PrintName("GetGlobalPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetGlobalSint8(uint32_t, const SourceInfo &);
bool emitGetGlobalUint8(uint32_t, const SourceInfo &);
bool emitGetGlobalSint16(uint32_t, const SourceInfo &);
bool emitGetGlobalUint16(uint32_t, const SourceInfo &);
bool emitGetGlobalSint32(uint32_t, const SourceInfo &);
bool emitGetGlobalUint32(uint32_t, const SourceInfo &);
bool emitGetGlobalSint64(uint32_t, const SourceInfo &);
bool emitGetGlobalUint64(uint32_t, const SourceInfo &);
bool emitGetGlobalBool(uint32_t, const SourceInfo &);
bool emitGetGlobalPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetGlobal(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetGlobal(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGetGlobalSint8(A0, I);
  case PT_Uint8:
    return emitGetGlobalUint8(A0, I);
  case PT_Sint16:
    return emitGetGlobalSint16(A0, I);
  case PT_Uint16:
    return emitGetGlobalUint16(A0, I);
  case PT_Sint32:
    return emitGetGlobalSint32(A0, I);
  case PT_Uint32:
    return emitGetGlobalUint32(A0, I);
  case PT_Sint64:
    return emitGetGlobalSint64(A0, I);
  case PT_Uint64:
    return emitGetGlobalUint64(A0, I);
  case PT_Bool:
    return emitGetGlobalBool(A0, I);
  case PT_Ptr:
    return emitGetGlobalPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetGlobalSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalSint8, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalUint8, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalSint16, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalUint16, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalSint32, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalUint32, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalSint64, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalUint64, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalBool, A0, L);
}
bool ByteCodeEmitter::emitGetGlobalPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetGlobalPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetGlobalSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitGetGlobalPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetGlobal<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetLocalSint8,
OP_GetLocalUint8,
OP_GetLocalSint16,
OP_GetLocalUint16,
OP_GetLocalSint32,
OP_GetLocalUint32,
OP_GetLocalSint64,
OP_GetLocalUint64,
OP_GetLocalBool,
OP_GetLocalPtr,
#endif
#ifdef GET_INTERP
case OP_GetLocalSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetLocalPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetLocal<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetLocalSint8:
  PrintName("GetLocalSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalUint8:
  PrintName("GetLocalUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalSint16:
  PrintName("GetLocalSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalUint16:
  PrintName("GetLocalUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalSint32:
  PrintName("GetLocalSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalUint32:
  PrintName("GetLocalUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalSint64:
  PrintName("GetLocalSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalUint64:
  PrintName("GetLocalUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalBool:
  PrintName("GetLocalBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetLocalPtr:
  PrintName("GetLocalPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetLocalSint8(uint32_t, const SourceInfo &);
bool emitGetLocalUint8(uint32_t, const SourceInfo &);
bool emitGetLocalSint16(uint32_t, const SourceInfo &);
bool emitGetLocalUint16(uint32_t, const SourceInfo &);
bool emitGetLocalSint32(uint32_t, const SourceInfo &);
bool emitGetLocalUint32(uint32_t, const SourceInfo &);
bool emitGetLocalSint64(uint32_t, const SourceInfo &);
bool emitGetLocalUint64(uint32_t, const SourceInfo &);
bool emitGetLocalBool(uint32_t, const SourceInfo &);
bool emitGetLocalPtr(uint32_t, const SourceInfo &);
#if defined(GET_EVAL_PROTO)
template<PrimType>
bool emitGetLocal(uint32_t, const SourceInfo &);
#endif
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetLocal(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetLocal(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
#ifdef GET_LINK_IMPL
    return emitGetLocalSint8
#else
    return emitGetLocal<PT_Sint8>
#endif
      (A0, I);
  case PT_Uint8:
#ifdef GET_LINK_IMPL
    return emitGetLocalUint8
#else
    return emitGetLocal<PT_Uint8>
#endif
      (A0, I);
  case PT_Sint16:
#ifdef GET_LINK_IMPL
    return emitGetLocalSint16
#else
    return emitGetLocal<PT_Sint16>
#endif
      (A0, I);
  case PT_Uint16:
#ifdef GET_LINK_IMPL
    return emitGetLocalUint16
#else
    return emitGetLocal<PT_Uint16>
#endif
      (A0, I);
  case PT_Sint32:
#ifdef GET_LINK_IMPL
    return emitGetLocalSint32
#else
    return emitGetLocal<PT_Sint32>
#endif
      (A0, I);
  case PT_Uint32:
#ifdef GET_LINK_IMPL
    return emitGetLocalUint32
#else
    return emitGetLocal<PT_Uint32>
#endif
      (A0, I);
  case PT_Sint64:
#ifdef GET_LINK_IMPL
    return emitGetLocalSint64
#else
    return emitGetLocal<PT_Sint64>
#endif
      (A0, I);
  case PT_Uint64:
#ifdef GET_LINK_IMPL
    return emitGetLocalUint64
#else
    return emitGetLocal<PT_Uint64>
#endif
      (A0, I);
  case PT_Bool:
#ifdef GET_LINK_IMPL
    return emitGetLocalBool
#else
    return emitGetLocal<PT_Bool>
#endif
      (A0, I);
  case PT_Ptr:
#ifdef GET_LINK_IMPL
    return emitGetLocalPtr
#else
    return emitGetLocal<PT_Ptr>
#endif
      (A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetLocalSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalSint8, A0, L);
}
bool ByteCodeEmitter::emitGetLocalUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalUint8, A0, L);
}
bool ByteCodeEmitter::emitGetLocalSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalSint16, A0, L);
}
bool ByteCodeEmitter::emitGetLocalUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalUint16, A0, L);
}
bool ByteCodeEmitter::emitGetLocalSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalSint32, A0, L);
}
bool ByteCodeEmitter::emitGetLocalUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalUint32, A0, L);
}
bool ByteCodeEmitter::emitGetLocalSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalSint64, A0, L);
}
bool ByteCodeEmitter::emitGetLocalUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalUint64, A0, L);
}
bool ByteCodeEmitter::emitGetLocalBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalBool, A0, L);
}
bool ByteCodeEmitter::emitGetLocalPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetLocalPtr, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetParamSint8,
OP_GetParamUint8,
OP_GetParamSint16,
OP_GetParamUint16,
OP_GetParamSint32,
OP_GetParamUint32,
OP_GetParamSint64,
OP_GetParamUint64,
OP_GetParamBool,
OP_GetParamPtr,
#endif
#ifdef GET_INTERP
case OP_GetParamSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetParamPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetParam<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetParamSint8:
  PrintName("GetParamSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamUint8:
  PrintName("GetParamUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamSint16:
  PrintName("GetParamSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamUint16:
  PrintName("GetParamUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamSint32:
  PrintName("GetParamSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamUint32:
  PrintName("GetParamUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamSint64:
  PrintName("GetParamSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamUint64:
  PrintName("GetParamUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamBool:
  PrintName("GetParamBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetParamPtr:
  PrintName("GetParamPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetParamSint8(uint32_t, const SourceInfo &);
bool emitGetParamUint8(uint32_t, const SourceInfo &);
bool emitGetParamSint16(uint32_t, const SourceInfo &);
bool emitGetParamUint16(uint32_t, const SourceInfo &);
bool emitGetParamSint32(uint32_t, const SourceInfo &);
bool emitGetParamUint32(uint32_t, const SourceInfo &);
bool emitGetParamSint64(uint32_t, const SourceInfo &);
bool emitGetParamUint64(uint32_t, const SourceInfo &);
bool emitGetParamBool(uint32_t, const SourceInfo &);
bool emitGetParamPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetParam(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetParam(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGetParamSint8(A0, I);
  case PT_Uint8:
    return emitGetParamUint8(A0, I);
  case PT_Sint16:
    return emitGetParamSint16(A0, I);
  case PT_Uint16:
    return emitGetParamUint16(A0, I);
  case PT_Sint32:
    return emitGetParamSint32(A0, I);
  case PT_Uint32:
    return emitGetParamUint32(A0, I);
  case PT_Sint64:
    return emitGetParamSint64(A0, I);
  case PT_Uint64:
    return emitGetParamUint64(A0, I);
  case PT_Bool:
    return emitGetParamBool(A0, I);
  case PT_Ptr:
    return emitGetParamPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetParamSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamSint8, A0, L);
}
bool ByteCodeEmitter::emitGetParamUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamUint8, A0, L);
}
bool ByteCodeEmitter::emitGetParamSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamSint16, A0, L);
}
bool ByteCodeEmitter::emitGetParamUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamUint16, A0, L);
}
bool ByteCodeEmitter::emitGetParamSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamSint32, A0, L);
}
bool ByteCodeEmitter::emitGetParamUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamUint32, A0, L);
}
bool ByteCodeEmitter::emitGetParamSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamSint64, A0, L);
}
bool ByteCodeEmitter::emitGetParamUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamUint64, A0, L);
}
bool ByteCodeEmitter::emitGetParamBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamBool, A0, L);
}
bool ByteCodeEmitter::emitGetParamPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetParamPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetParamSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitGetParamPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetParam<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrActiveField,
#endif
#ifdef GET_INTERP
case OP_GetPtrActiveField: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrActiveField(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrActiveField:
  PrintName("GetPtrActiveField");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrActiveField(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrActiveField(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrActiveField, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrActiveField(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrActiveField(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrActiveThisField,
#endif
#ifdef GET_INTERP
case OP_GetPtrActiveThisField: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrActiveThisField(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrActiveThisField:
  PrintName("GetPtrActiveThisField");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrActiveThisField(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrActiveThisField(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrActiveThisField, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrActiveThisField(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrActiveThisField(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrBase,
#endif
#ifdef GET_INTERP
case OP_GetPtrBase: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrBase(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrBase:
  PrintName("GetPtrBase");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrBase(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrBase(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrBase, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrBase(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrBase(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrField,
#endif
#ifdef GET_INTERP
case OP_GetPtrField: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrField(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrField:
  PrintName("GetPtrField");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrField(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrField(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrField, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrField(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrField(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrGlobal,
#endif
#ifdef GET_INTERP
case OP_GetPtrGlobal: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrGlobal(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrGlobal:
  PrintName("GetPtrGlobal");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrGlobal(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrGlobal(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrGlobal, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrGlobal(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrGlobal(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrLocal,
#endif
#ifdef GET_INTERP
case OP_GetPtrLocal: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrLocal(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrLocal:
  PrintName("GetPtrLocal");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrLocal(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrLocal(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrLocal, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrParam,
#endif
#ifdef GET_INTERP
case OP_GetPtrParam: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrParam(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrParam:
  PrintName("GetPtrParam");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrParam(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrParam(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrParam, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrParam(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrParam(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrThisBase,
#endif
#ifdef GET_INTERP
case OP_GetPtrThisBase: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrThisBase(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrThisBase:
  PrintName("GetPtrThisBase");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrThisBase(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrThisBase(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrThisBase, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrThisBase(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrThisBase(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrThisField,
#endif
#ifdef GET_INTERP
case OP_GetPtrThisField: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetPtrThisField(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrThisField:
  PrintName("GetPtrThisField");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrThisField(uint32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrThisField(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetPtrThisField, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrThisField(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrThisField(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrThisVirtBase,
#endif
#ifdef GET_INTERP
case OP_GetPtrThisVirtBase: {
  auto V0 = ReadArg<const RecordDecl *>(S, PC);
  if (!GetPtrThisVirtBase(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrThisVirtBase:
  PrintName("GetPtrThisVirtBase");
  OS << "\t" << ReadArg<const RecordDecl *>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrThisVirtBase(const RecordDecl *, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrThisVirtBase(const RecordDecl * A0, const SourceInfo &L) {
  return emitOp<const RecordDecl *>(OP_GetPtrThisVirtBase, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrThisVirtBase(const RecordDecl * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrThisVirtBase(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetPtrVirtBase,
#endif
#ifdef GET_INTERP
case OP_GetPtrVirtBase: {
  auto V0 = ReadArg<const RecordDecl *>(S, PC);
  if (!GetPtrVirtBase(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetPtrVirtBase:
  PrintName("GetPtrVirtBase");
  OS << "\t" << ReadArg<const RecordDecl *>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetPtrVirtBase(const RecordDecl *, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetPtrVirtBase(const RecordDecl * A0, const SourceInfo &L) {
  return emitOp<const RecordDecl *>(OP_GetPtrVirtBase, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetPtrVirtBase(const RecordDecl * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetPtrVirtBase(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_GetThisFieldSint8,
OP_GetThisFieldUint8,
OP_GetThisFieldSint16,
OP_GetThisFieldUint16,
OP_GetThisFieldSint32,
OP_GetThisFieldUint32,
OP_GetThisFieldSint64,
OP_GetThisFieldUint64,
OP_GetThisFieldBool,
OP_GetThisFieldPtr,
#endif
#ifdef GET_INTERP
case OP_GetThisFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_GetThisFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!GetThisField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_GetThisFieldSint8:
  PrintName("GetThisFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldUint8:
  PrintName("GetThisFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldSint16:
  PrintName("GetThisFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldUint16:
  PrintName("GetThisFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldSint32:
  PrintName("GetThisFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldUint32:
  PrintName("GetThisFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldSint64:
  PrintName("GetThisFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldUint64:
  PrintName("GetThisFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldBool:
  PrintName("GetThisFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_GetThisFieldPtr:
  PrintName("GetThisFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetThisFieldSint8(uint32_t, const SourceInfo &);
bool emitGetThisFieldUint8(uint32_t, const SourceInfo &);
bool emitGetThisFieldSint16(uint32_t, const SourceInfo &);
bool emitGetThisFieldUint16(uint32_t, const SourceInfo &);
bool emitGetThisFieldSint32(uint32_t, const SourceInfo &);
bool emitGetThisFieldUint32(uint32_t, const SourceInfo &);
bool emitGetThisFieldSint64(uint32_t, const SourceInfo &);
bool emitGetThisFieldUint64(uint32_t, const SourceInfo &);
bool emitGetThisFieldBool(uint32_t, const SourceInfo &);
bool emitGetThisFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitGetThisField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitGetThisField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitGetThisFieldSint8(A0, I);
  case PT_Uint8:
    return emitGetThisFieldUint8(A0, I);
  case PT_Sint16:
    return emitGetThisFieldSint16(A0, I);
  case PT_Uint16:
    return emitGetThisFieldUint16(A0, I);
  case PT_Sint32:
    return emitGetThisFieldSint32(A0, I);
  case PT_Uint32:
    return emitGetThisFieldUint32(A0, I);
  case PT_Sint64:
    return emitGetThisFieldSint64(A0, I);
  case PT_Uint64:
    return emitGetThisFieldUint64(A0, I);
  case PT_Bool:
    return emitGetThisFieldBool(A0, I);
  case PT_Ptr:
    return emitGetThisFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitGetThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldBool, A0, L);
}
bool ByteCodeEmitter::emitGetThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_GetThisFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitGetThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitGetThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return GetThisField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitBitFieldSint8,
OP_InitBitFieldUint8,
OP_InitBitFieldSint16,
OP_InitBitFieldUint16,
OP_InitBitFieldSint32,
OP_InitBitFieldUint32,
OP_InitBitFieldSint64,
OP_InitBitFieldUint64,
OP_InitBitFieldBool,
#endif
#ifdef GET_INTERP
case OP_InitBitFieldSint8: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldUint8: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldSint16: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldUint16: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldSint32: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldUint32: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldSint64: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldUint64: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitBitFieldBool: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitBitField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitBitFieldSint8:
  PrintName("InitBitFieldSint8");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldUint8:
  PrintName("InitBitFieldUint8");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldSint16:
  PrintName("InitBitFieldSint16");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldUint16:
  PrintName("InitBitFieldUint16");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldSint32:
  PrintName("InitBitFieldSint32");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldUint32:
  PrintName("InitBitFieldUint32");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldSint64:
  PrintName("InitBitFieldSint64");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldUint64:
  PrintName("InitBitFieldUint64");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitBitFieldBool:
  PrintName("InitBitFieldBool");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitBitFieldSint8(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldUint8(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldSint16(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldUint16(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldSint32(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldUint32(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldSint64(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldUint64(const Record::Field *, const SourceInfo &);
bool emitInitBitFieldBool(const Record::Field *, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitBitField(PrimType, const Record::Field *, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitBitField(PrimType T0, const Record::Field * A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitBitFieldSint8(A0, I);
  case PT_Uint8:
    return emitInitBitFieldUint8(A0, I);
  case PT_Sint16:
    return emitInitBitFieldSint16(A0, I);
  case PT_Uint16:
    return emitInitBitFieldUint16(A0, I);
  case PT_Sint32:
    return emitInitBitFieldSint32(A0, I);
  case PT_Uint32:
    return emitInitBitFieldUint32(A0, I);
  case PT_Sint64:
    return emitInitBitFieldSint64(A0, I);
  case PT_Uint64:
    return emitInitBitFieldUint64(A0, I);
  case PT_Bool:
    return emitInitBitFieldBool(A0, I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitBitFieldSint8(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldUint8(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldSint16(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldUint16(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldSint32(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldUint32(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldSint64(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldUint64(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitInitBitFieldBool(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitBitFieldBool, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitBitFieldSint8(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldUint8(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldSint16(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldUint16(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldSint32(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldUint32(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldSint64(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldUint64(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitBitFieldBool(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitBitField<PT_Bool>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitElemSint8,
OP_InitElemUint8,
OP_InitElemSint16,
OP_InitElemUint16,
OP_InitElemSint32,
OP_InitElemUint32,
OP_InitElemSint64,
OP_InitElemUint64,
OP_InitElemBool,
OP_InitElemPtr,
#endif
#ifdef GET_INTERP
case OP_InitElemSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElem<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitElemSint8:
  PrintName("InitElemSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemUint8:
  PrintName("InitElemUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemSint16:
  PrintName("InitElemSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemUint16:
  PrintName("InitElemUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemSint32:
  PrintName("InitElemSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemUint32:
  PrintName("InitElemUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemSint64:
  PrintName("InitElemSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemUint64:
  PrintName("InitElemUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemBool:
  PrintName("InitElemBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPtr:
  PrintName("InitElemPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitElemSint8(uint32_t, const SourceInfo &);
bool emitInitElemUint8(uint32_t, const SourceInfo &);
bool emitInitElemSint16(uint32_t, const SourceInfo &);
bool emitInitElemUint16(uint32_t, const SourceInfo &);
bool emitInitElemSint32(uint32_t, const SourceInfo &);
bool emitInitElemUint32(uint32_t, const SourceInfo &);
bool emitInitElemSint64(uint32_t, const SourceInfo &);
bool emitInitElemUint64(uint32_t, const SourceInfo &);
bool emitInitElemBool(uint32_t, const SourceInfo &);
bool emitInitElemPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitElem(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitElem(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitElemSint8(A0, I);
  case PT_Uint8:
    return emitInitElemUint8(A0, I);
  case PT_Sint16:
    return emitInitElemSint16(A0, I);
  case PT_Uint16:
    return emitInitElemUint16(A0, I);
  case PT_Sint32:
    return emitInitElemSint32(A0, I);
  case PT_Uint32:
    return emitInitElemUint32(A0, I);
  case PT_Sint64:
    return emitInitElemSint64(A0, I);
  case PT_Uint64:
    return emitInitElemUint64(A0, I);
  case PT_Bool:
    return emitInitElemBool(A0, I);
  case PT_Ptr:
    return emitInitElemPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitElemSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemSint8, A0, L);
}
bool ByteCodeEmitter::emitInitElemUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemUint8, A0, L);
}
bool ByteCodeEmitter::emitInitElemSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemSint16, A0, L);
}
bool ByteCodeEmitter::emitInitElemUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemUint16, A0, L);
}
bool ByteCodeEmitter::emitInitElemSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemSint32, A0, L);
}
bool ByteCodeEmitter::emitInitElemUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemUint32, A0, L);
}
bool ByteCodeEmitter::emitInitElemSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemSint64, A0, L);
}
bool ByteCodeEmitter::emitInitElemUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemUint64, A0, L);
}
bool ByteCodeEmitter::emitInitElemBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemBool, A0, L);
}
bool ByteCodeEmitter::emitInitElemPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitElemSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElem<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitElemPopSint8,
OP_InitElemPopUint8,
OP_InitElemPopSint16,
OP_InitElemPopUint16,
OP_InitElemPopSint32,
OP_InitElemPopUint32,
OP_InitElemPopSint64,
OP_InitElemPopUint64,
OP_InitElemPopBool,
OP_InitElemPopPtr,
#endif
#ifdef GET_INTERP
case OP_InitElemPopSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitElemPopPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitElemPop<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitElemPopSint8:
  PrintName("InitElemPopSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopUint8:
  PrintName("InitElemPopUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopSint16:
  PrintName("InitElemPopSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopUint16:
  PrintName("InitElemPopUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopSint32:
  PrintName("InitElemPopSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopUint32:
  PrintName("InitElemPopUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopSint64:
  PrintName("InitElemPopSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopUint64:
  PrintName("InitElemPopUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopBool:
  PrintName("InitElemPopBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitElemPopPtr:
  PrintName("InitElemPopPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitElemPopSint8(uint32_t, const SourceInfo &);
bool emitInitElemPopUint8(uint32_t, const SourceInfo &);
bool emitInitElemPopSint16(uint32_t, const SourceInfo &);
bool emitInitElemPopUint16(uint32_t, const SourceInfo &);
bool emitInitElemPopSint32(uint32_t, const SourceInfo &);
bool emitInitElemPopUint32(uint32_t, const SourceInfo &);
bool emitInitElemPopSint64(uint32_t, const SourceInfo &);
bool emitInitElemPopUint64(uint32_t, const SourceInfo &);
bool emitInitElemPopBool(uint32_t, const SourceInfo &);
bool emitInitElemPopPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitElemPop(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitElemPop(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitElemPopSint8(A0, I);
  case PT_Uint8:
    return emitInitElemPopUint8(A0, I);
  case PT_Sint16:
    return emitInitElemPopSint16(A0, I);
  case PT_Uint16:
    return emitInitElemPopUint16(A0, I);
  case PT_Sint32:
    return emitInitElemPopSint32(A0, I);
  case PT_Uint32:
    return emitInitElemPopUint32(A0, I);
  case PT_Sint64:
    return emitInitElemPopSint64(A0, I);
  case PT_Uint64:
    return emitInitElemPopUint64(A0, I);
  case PT_Bool:
    return emitInitElemPopBool(A0, I);
  case PT_Ptr:
    return emitInitElemPopPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitElemPopSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopSint8, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopUint8, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopSint16, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopUint16, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopSint32, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopUint32, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopSint64, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopUint64, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopBool, A0, L);
}
bool ByteCodeEmitter::emitInitElemPopPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitElemPopPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitElemPopSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitElemPopPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitElemPop<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitFieldSint8,
OP_InitFieldUint8,
OP_InitFieldSint16,
OP_InitFieldUint16,
OP_InitFieldSint32,
OP_InitFieldUint32,
OP_InitFieldSint64,
OP_InitFieldUint64,
OP_InitFieldBool,
OP_InitFieldPtr,
#endif
#ifdef GET_INTERP
case OP_InitFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitFieldSint8:
  PrintName("InitFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldUint8:
  PrintName("InitFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldSint16:
  PrintName("InitFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldUint16:
  PrintName("InitFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldSint32:
  PrintName("InitFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldUint32:
  PrintName("InitFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldSint64:
  PrintName("InitFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldUint64:
  PrintName("InitFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldBool:
  PrintName("InitFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldPtr:
  PrintName("InitFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitFieldSint8(uint32_t, const SourceInfo &);
bool emitInitFieldUint8(uint32_t, const SourceInfo &);
bool emitInitFieldSint16(uint32_t, const SourceInfo &);
bool emitInitFieldUint16(uint32_t, const SourceInfo &);
bool emitInitFieldSint32(uint32_t, const SourceInfo &);
bool emitInitFieldUint32(uint32_t, const SourceInfo &);
bool emitInitFieldSint64(uint32_t, const SourceInfo &);
bool emitInitFieldUint64(uint32_t, const SourceInfo &);
bool emitInitFieldBool(uint32_t, const SourceInfo &);
bool emitInitFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitFieldSint8(A0, I);
  case PT_Uint8:
    return emitInitFieldUint8(A0, I);
  case PT_Sint16:
    return emitInitFieldSint16(A0, I);
  case PT_Uint16:
    return emitInitFieldUint16(A0, I);
  case PT_Sint32:
    return emitInitFieldSint32(A0, I);
  case PT_Uint32:
    return emitInitFieldUint32(A0, I);
  case PT_Sint64:
    return emitInitFieldSint64(A0, I);
  case PT_Uint64:
    return emitInitFieldUint64(A0, I);
  case PT_Bool:
    return emitInitFieldBool(A0, I);
  case PT_Ptr:
    return emitInitFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitInitFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitInitFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitInitFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitInitFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitInitFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitInitFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitInitFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitInitFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldBool, A0, L);
}
bool ByteCodeEmitter::emitInitFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitFieldActiveSint8,
OP_InitFieldActiveUint8,
OP_InitFieldActiveSint16,
OP_InitFieldActiveUint16,
OP_InitFieldActiveSint32,
OP_InitFieldActiveUint32,
OP_InitFieldActiveSint64,
OP_InitFieldActiveUint64,
OP_InitFieldActiveBool,
OP_InitFieldActivePtr,
#endif
#ifdef GET_INTERP
case OP_InitFieldActiveSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActiveBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitFieldActivePtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitFieldActive<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitFieldActiveSint8:
  PrintName("InitFieldActiveSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveUint8:
  PrintName("InitFieldActiveUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveSint16:
  PrintName("InitFieldActiveSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveUint16:
  PrintName("InitFieldActiveUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveSint32:
  PrintName("InitFieldActiveSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveUint32:
  PrintName("InitFieldActiveUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveSint64:
  PrintName("InitFieldActiveSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveUint64:
  PrintName("InitFieldActiveUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActiveBool:
  PrintName("InitFieldActiveBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitFieldActivePtr:
  PrintName("InitFieldActivePtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitFieldActiveSint8(uint32_t, const SourceInfo &);
bool emitInitFieldActiveUint8(uint32_t, const SourceInfo &);
bool emitInitFieldActiveSint16(uint32_t, const SourceInfo &);
bool emitInitFieldActiveUint16(uint32_t, const SourceInfo &);
bool emitInitFieldActiveSint32(uint32_t, const SourceInfo &);
bool emitInitFieldActiveUint32(uint32_t, const SourceInfo &);
bool emitInitFieldActiveSint64(uint32_t, const SourceInfo &);
bool emitInitFieldActiveUint64(uint32_t, const SourceInfo &);
bool emitInitFieldActiveBool(uint32_t, const SourceInfo &);
bool emitInitFieldActivePtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitFieldActive(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitFieldActive(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitFieldActiveSint8(A0, I);
  case PT_Uint8:
    return emitInitFieldActiveUint8(A0, I);
  case PT_Sint16:
    return emitInitFieldActiveSint16(A0, I);
  case PT_Uint16:
    return emitInitFieldActiveUint16(A0, I);
  case PT_Sint32:
    return emitInitFieldActiveSint32(A0, I);
  case PT_Uint32:
    return emitInitFieldActiveUint32(A0, I);
  case PT_Sint64:
    return emitInitFieldActiveSint64(A0, I);
  case PT_Uint64:
    return emitInitFieldActiveUint64(A0, I);
  case PT_Bool:
    return emitInitFieldActiveBool(A0, I);
  case PT_Ptr:
    return emitInitFieldActivePtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitFieldActiveSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveSint8, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveUint8, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveSint16, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveUint16, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveSint32, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveUint32, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveSint64, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveUint64, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActiveBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActiveBool, A0, L);
}
bool ByteCodeEmitter::emitInitFieldActivePtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitFieldActivePtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitFieldActiveSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActiveBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitFieldActivePtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitFieldActive<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitGlobalSint8,
OP_InitGlobalUint8,
OP_InitGlobalSint16,
OP_InitGlobalUint16,
OP_InitGlobalSint32,
OP_InitGlobalUint32,
OP_InitGlobalSint64,
OP_InitGlobalUint64,
OP_InitGlobalBool,
OP_InitGlobalPtr,
#endif
#ifdef GET_INTERP
case OP_InitGlobalSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitGlobalPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitGlobal<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitGlobalSint8:
  PrintName("InitGlobalSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalUint8:
  PrintName("InitGlobalUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalSint16:
  PrintName("InitGlobalSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalUint16:
  PrintName("InitGlobalUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalSint32:
  PrintName("InitGlobalSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalUint32:
  PrintName("InitGlobalUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalSint64:
  PrintName("InitGlobalSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalUint64:
  PrintName("InitGlobalUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalBool:
  PrintName("InitGlobalBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitGlobalPtr:
  PrintName("InitGlobalPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitGlobalSint8(uint32_t, const SourceInfo &);
bool emitInitGlobalUint8(uint32_t, const SourceInfo &);
bool emitInitGlobalSint16(uint32_t, const SourceInfo &);
bool emitInitGlobalUint16(uint32_t, const SourceInfo &);
bool emitInitGlobalSint32(uint32_t, const SourceInfo &);
bool emitInitGlobalUint32(uint32_t, const SourceInfo &);
bool emitInitGlobalSint64(uint32_t, const SourceInfo &);
bool emitInitGlobalUint64(uint32_t, const SourceInfo &);
bool emitInitGlobalBool(uint32_t, const SourceInfo &);
bool emitInitGlobalPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitGlobal(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitGlobal(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitGlobalSint8(A0, I);
  case PT_Uint8:
    return emitInitGlobalUint8(A0, I);
  case PT_Sint16:
    return emitInitGlobalSint16(A0, I);
  case PT_Uint16:
    return emitInitGlobalUint16(A0, I);
  case PT_Sint32:
    return emitInitGlobalSint32(A0, I);
  case PT_Uint32:
    return emitInitGlobalUint32(A0, I);
  case PT_Sint64:
    return emitInitGlobalSint64(A0, I);
  case PT_Uint64:
    return emitInitGlobalUint64(A0, I);
  case PT_Bool:
    return emitInitGlobalBool(A0, I);
  case PT_Ptr:
    return emitInitGlobalPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitGlobalSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalSint8, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalUint8, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalSint16, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalUint16, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalSint32, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalUint32, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalSint64, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalUint64, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalBool, A0, L);
}
bool ByteCodeEmitter::emitInitGlobalPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitGlobalPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitGlobalSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitGlobalPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitGlobal<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitPopSint8,
OP_InitPopUint8,
OP_InitPopSint16,
OP_InitPopUint16,
OP_InitPopSint32,
OP_InitPopUint32,
OP_InitPopSint64,
OP_InitPopUint64,
OP_InitPopBool,
OP_InitPopPtr,
#endif
#ifdef GET_INTERP
case OP_InitPopSint8: {
  if (!InitPop<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopUint8: {
  if (!InitPop<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopSint16: {
  if (!InitPop<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopUint16: {
  if (!InitPop<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopSint32: {
  if (!InitPop<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopUint32: {
  if (!InitPop<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopSint64: {
  if (!InitPop<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopUint64: {
  if (!InitPop<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopBool: {
  if (!InitPop<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_InitPopPtr: {
  if (!InitPop<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitPopSint8:
  PrintName("InitPopSint8");
  OS << "\t" << "\n";
  continue;
case OP_InitPopUint8:
  PrintName("InitPopUint8");
  OS << "\t" << "\n";
  continue;
case OP_InitPopSint16:
  PrintName("InitPopSint16");
  OS << "\t" << "\n";
  continue;
case OP_InitPopUint16:
  PrintName("InitPopUint16");
  OS << "\t" << "\n";
  continue;
case OP_InitPopSint32:
  PrintName("InitPopSint32");
  OS << "\t" << "\n";
  continue;
case OP_InitPopUint32:
  PrintName("InitPopUint32");
  OS << "\t" << "\n";
  continue;
case OP_InitPopSint64:
  PrintName("InitPopSint64");
  OS << "\t" << "\n";
  continue;
case OP_InitPopUint64:
  PrintName("InitPopUint64");
  OS << "\t" << "\n";
  continue;
case OP_InitPopBool:
  PrintName("InitPopBool");
  OS << "\t" << "\n";
  continue;
case OP_InitPopPtr:
  PrintName("InitPopPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitPopSint8(const SourceInfo &);
bool emitInitPopUint8(const SourceInfo &);
bool emitInitPopSint16(const SourceInfo &);
bool emitInitPopUint16(const SourceInfo &);
bool emitInitPopSint32(const SourceInfo &);
bool emitInitPopUint32(const SourceInfo &);
bool emitInitPopSint64(const SourceInfo &);
bool emitInitPopUint64(const SourceInfo &);
bool emitInitPopBool(const SourceInfo &);
bool emitInitPopPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitPop(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitPop(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitPopSint8(I);
  case PT_Uint8:
    return emitInitPopUint8(I);
  case PT_Sint16:
    return emitInitPopSint16(I);
  case PT_Uint16:
    return emitInitPopUint16(I);
  case PT_Sint32:
    return emitInitPopSint32(I);
  case PT_Uint32:
    return emitInitPopUint32(I);
  case PT_Sint64:
    return emitInitPopSint64(I);
  case PT_Uint64:
    return emitInitPopUint64(I);
  case PT_Bool:
    return emitInitPopBool(I);
  case PT_Ptr:
    return emitInitPopPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitPopSint8(const SourceInfo &L) {
  return emitOp<>(OP_InitPopSint8, L);
}
bool ByteCodeEmitter::emitInitPopUint8(const SourceInfo &L) {
  return emitOp<>(OP_InitPopUint8, L);
}
bool ByteCodeEmitter::emitInitPopSint16(const SourceInfo &L) {
  return emitOp<>(OP_InitPopSint16, L);
}
bool ByteCodeEmitter::emitInitPopUint16(const SourceInfo &L) {
  return emitOp<>(OP_InitPopUint16, L);
}
bool ByteCodeEmitter::emitInitPopSint32(const SourceInfo &L) {
  return emitOp<>(OP_InitPopSint32, L);
}
bool ByteCodeEmitter::emitInitPopUint32(const SourceInfo &L) {
  return emitOp<>(OP_InitPopUint32, L);
}
bool ByteCodeEmitter::emitInitPopSint64(const SourceInfo &L) {
  return emitOp<>(OP_InitPopSint64, L);
}
bool ByteCodeEmitter::emitInitPopUint64(const SourceInfo &L) {
  return emitOp<>(OP_InitPopUint64, L);
}
bool ByteCodeEmitter::emitInitPopBool(const SourceInfo &L) {
  return emitOp<>(OP_InitPopBool, L);
}
bool ByteCodeEmitter::emitInitPopPtr(const SourceInfo &L) {
  return emitOp<>(OP_InitPopPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitPopSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitInitPopUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitInitPopSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitInitPopUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitInitPopSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitInitPopUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitInitPopSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitInitPopUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitInitPopBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitInitPopPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitPop<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitThisBitFieldSint8,
OP_InitThisBitFieldUint8,
OP_InitThisBitFieldSint16,
OP_InitThisBitFieldUint16,
OP_InitThisBitFieldSint32,
OP_InitThisBitFieldUint32,
OP_InitThisBitFieldSint64,
OP_InitThisBitFieldUint64,
OP_InitThisBitFieldBool,
#endif
#ifdef GET_INTERP
case OP_InitThisBitFieldSint8: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldUint8: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldSint16: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldUint16: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldSint32: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldUint32: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldSint64: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldUint64: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisBitFieldBool: {
  auto V0 = ReadArg<const Record::Field *>(S, PC);
  if (!InitThisBitField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitThisBitFieldSint8:
  PrintName("InitThisBitFieldSint8");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldUint8:
  PrintName("InitThisBitFieldUint8");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldSint16:
  PrintName("InitThisBitFieldSint16");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldUint16:
  PrintName("InitThisBitFieldUint16");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldSint32:
  PrintName("InitThisBitFieldSint32");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldUint32:
  PrintName("InitThisBitFieldUint32");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldSint64:
  PrintName("InitThisBitFieldSint64");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldUint64:
  PrintName("InitThisBitFieldUint64");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
case OP_InitThisBitFieldBool:
  PrintName("InitThisBitFieldBool");
  OS << "\t" << ReadArg<const Record::Field *>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisBitFieldSint8(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldUint8(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldSint16(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldUint16(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldSint32(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldUint32(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldSint64(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldUint64(const Record::Field *, const SourceInfo &);
bool emitInitThisBitFieldBool(const Record::Field *, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisBitField(PrimType, const Record::Field *, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitThisBitField(PrimType T0, const Record::Field * A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitThisBitFieldSint8(A0, I);
  case PT_Uint8:
    return emitInitThisBitFieldUint8(A0, I);
  case PT_Sint16:
    return emitInitThisBitFieldSint16(A0, I);
  case PT_Uint16:
    return emitInitThisBitFieldUint16(A0, I);
  case PT_Sint32:
    return emitInitThisBitFieldSint32(A0, I);
  case PT_Uint32:
    return emitInitThisBitFieldUint32(A0, I);
  case PT_Sint64:
    return emitInitThisBitFieldSint64(A0, I);
  case PT_Uint64:
    return emitInitThisBitFieldUint64(A0, I);
  case PT_Bool:
    return emitInitThisBitFieldBool(A0, I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitThisBitFieldSint8(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldUint8(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldSint16(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldUint16(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldSint32(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldUint32(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldSint64(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldUint64(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisBitFieldBool(const Record::Field * A0, const SourceInfo &L) {
  return emitOp<const Record::Field *>(OP_InitThisBitFieldBool, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitThisBitFieldSint8(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldUint8(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldSint16(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldUint16(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldSint32(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldUint32(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldSint64(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldUint64(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisBitFieldBool(const Record::Field * A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisBitField<PT_Bool>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitThisFieldSint8,
OP_InitThisFieldUint8,
OP_InitThisFieldSint16,
OP_InitThisFieldUint16,
OP_InitThisFieldSint32,
OP_InitThisFieldUint32,
OP_InitThisFieldSint64,
OP_InitThisFieldUint64,
OP_InitThisFieldBool,
OP_InitThisFieldPtr,
#endif
#ifdef GET_INTERP
case OP_InitThisFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitThisFieldSint8:
  PrintName("InitThisFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldUint8:
  PrintName("InitThisFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldSint16:
  PrintName("InitThisFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldUint16:
  PrintName("InitThisFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldSint32:
  PrintName("InitThisFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldUint32:
  PrintName("InitThisFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldSint64:
  PrintName("InitThisFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldUint64:
  PrintName("InitThisFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldBool:
  PrintName("InitThisFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldPtr:
  PrintName("InitThisFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisFieldSint8(uint32_t, const SourceInfo &);
bool emitInitThisFieldUint8(uint32_t, const SourceInfo &);
bool emitInitThisFieldSint16(uint32_t, const SourceInfo &);
bool emitInitThisFieldUint16(uint32_t, const SourceInfo &);
bool emitInitThisFieldSint32(uint32_t, const SourceInfo &);
bool emitInitThisFieldUint32(uint32_t, const SourceInfo &);
bool emitInitThisFieldSint64(uint32_t, const SourceInfo &);
bool emitInitThisFieldUint64(uint32_t, const SourceInfo &);
bool emitInitThisFieldBool(uint32_t, const SourceInfo &);
bool emitInitThisFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitThisField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitThisFieldSint8(A0, I);
  case PT_Uint8:
    return emitInitThisFieldUint8(A0, I);
  case PT_Sint16:
    return emitInitThisFieldSint16(A0, I);
  case PT_Uint16:
    return emitInitThisFieldUint16(A0, I);
  case PT_Sint32:
    return emitInitThisFieldSint32(A0, I);
  case PT_Uint32:
    return emitInitThisFieldUint32(A0, I);
  case PT_Sint64:
    return emitInitThisFieldSint64(A0, I);
  case PT_Uint64:
    return emitInitThisFieldUint64(A0, I);
  case PT_Bool:
    return emitInitThisFieldBool(A0, I);
  case PT_Ptr:
    return emitInitThisFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldBool, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_InitThisFieldActiveSint8,
OP_InitThisFieldActiveUint8,
OP_InitThisFieldActiveSint16,
OP_InitThisFieldActiveUint16,
OP_InitThisFieldActiveSint32,
OP_InitThisFieldActiveUint32,
OP_InitThisFieldActiveSint64,
OP_InitThisFieldActiveUint64,
OP_InitThisFieldActiveBool,
OP_InitThisFieldActivePtr,
#endif
#ifdef GET_INTERP
case OP_InitThisFieldActiveSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActiveBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_InitThisFieldActivePtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!InitThisFieldActive<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_InitThisFieldActiveSint8:
  PrintName("InitThisFieldActiveSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveUint8:
  PrintName("InitThisFieldActiveUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveSint16:
  PrintName("InitThisFieldActiveSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveUint16:
  PrintName("InitThisFieldActiveUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveSint32:
  PrintName("InitThisFieldActiveSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveUint32:
  PrintName("InitThisFieldActiveUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveSint64:
  PrintName("InitThisFieldActiveSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveUint64:
  PrintName("InitThisFieldActiveUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActiveBool:
  PrintName("InitThisFieldActiveBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_InitThisFieldActivePtr:
  PrintName("InitThisFieldActivePtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisFieldActiveSint8(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveUint8(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveSint16(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveUint16(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveSint32(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveUint32(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveSint64(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveUint64(uint32_t, const SourceInfo &);
bool emitInitThisFieldActiveBool(uint32_t, const SourceInfo &);
bool emitInitThisFieldActivePtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitInitThisFieldActive(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitInitThisFieldActive(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitInitThisFieldActiveSint8(A0, I);
  case PT_Uint8:
    return emitInitThisFieldActiveUint8(A0, I);
  case PT_Sint16:
    return emitInitThisFieldActiveSint16(A0, I);
  case PT_Uint16:
    return emitInitThisFieldActiveUint16(A0, I);
  case PT_Sint32:
    return emitInitThisFieldActiveSint32(A0, I);
  case PT_Uint32:
    return emitInitThisFieldActiveUint32(A0, I);
  case PT_Sint64:
    return emitInitThisFieldActiveSint64(A0, I);
  case PT_Uint64:
    return emitInitThisFieldActiveUint64(A0, I);
  case PT_Bool:
    return emitInitThisFieldActiveBool(A0, I);
  case PT_Ptr:
    return emitInitThisFieldActivePtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitInitThisFieldActiveSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveSint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveUint8, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveSint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveUint16, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveSint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveUint32, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveSint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveUint64, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActiveBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActiveBool, A0, L);
}
bool ByteCodeEmitter::emitInitThisFieldActivePtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_InitThisFieldActivePtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitInitThisFieldActiveSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActiveBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitInitThisFieldActivePtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return InitThisFieldActive<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_Jf,
#endif
#ifdef GET_INTERP
case OP_Jf: {
  auto V0 = ReadArg<int32_t>(S, PC);
  if (!Jf(S, PC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_Jf:
  PrintName("Jf");
  OS << "\t" << ReadArg<int32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitJf(int32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitJf(int32_t A0, const SourceInfo &L) {
  return emitOp<int32_t>(OP_Jf, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_Jmp,
#endif
#ifdef GET_INTERP
case OP_Jmp: {
  auto V0 = ReadArg<int32_t>(S, PC);
  if (!Jmp(S, PC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_Jmp:
  PrintName("Jmp");
  OS << "\t" << ReadArg<int32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitJmp(int32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitJmp(int32_t A0, const SourceInfo &L) {
  return emitOp<int32_t>(OP_Jmp, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_Jt,
#endif
#ifdef GET_INTERP
case OP_Jt: {
  auto V0 = ReadArg<int32_t>(S, PC);
  if (!Jt(S, PC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_Jt:
  PrintName("Jt");
  OS << "\t" << ReadArg<int32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitJt(int32_t, const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitJt(int32_t A0, const SourceInfo &L) {
  return emitOp<int32_t>(OP_Jt, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_LESint8,
OP_LEUint8,
OP_LESint16,
OP_LEUint16,
OP_LESint32,
OP_LEUint32,
OP_LESint64,
OP_LEUint64,
OP_LEBool,
OP_LEPtr,
#endif
#ifdef GET_INTERP
case OP_LESint8: {
  if (!LE<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_LEUint8: {
  if (!LE<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_LESint16: {
  if (!LE<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_LEUint16: {
  if (!LE<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_LESint32: {
  if (!LE<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_LEUint32: {
  if (!LE<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_LESint64: {
  if (!LE<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_LEUint64: {
  if (!LE<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_LEBool: {
  if (!LE<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_LEPtr: {
  if (!LE<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_LESint8:
  PrintName("LESint8");
  OS << "\t" << "\n";
  continue;
case OP_LEUint8:
  PrintName("LEUint8");
  OS << "\t" << "\n";
  continue;
case OP_LESint16:
  PrintName("LESint16");
  OS << "\t" << "\n";
  continue;
case OP_LEUint16:
  PrintName("LEUint16");
  OS << "\t" << "\n";
  continue;
case OP_LESint32:
  PrintName("LESint32");
  OS << "\t" << "\n";
  continue;
case OP_LEUint32:
  PrintName("LEUint32");
  OS << "\t" << "\n";
  continue;
case OP_LESint64:
  PrintName("LESint64");
  OS << "\t" << "\n";
  continue;
case OP_LEUint64:
  PrintName("LEUint64");
  OS << "\t" << "\n";
  continue;
case OP_LEBool:
  PrintName("LEBool");
  OS << "\t" << "\n";
  continue;
case OP_LEPtr:
  PrintName("LEPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLESint8(const SourceInfo &);
bool emitLEUint8(const SourceInfo &);
bool emitLESint16(const SourceInfo &);
bool emitLEUint16(const SourceInfo &);
bool emitLESint32(const SourceInfo &);
bool emitLEUint32(const SourceInfo &);
bool emitLESint64(const SourceInfo &);
bool emitLEUint64(const SourceInfo &);
bool emitLEBool(const SourceInfo &);
bool emitLEPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLE(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitLE(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitLESint8(I);
  case PT_Uint8:
    return emitLEUint8(I);
  case PT_Sint16:
    return emitLESint16(I);
  case PT_Uint16:
    return emitLEUint16(I);
  case PT_Sint32:
    return emitLESint32(I);
  case PT_Uint32:
    return emitLEUint32(I);
  case PT_Sint64:
    return emitLESint64(I);
  case PT_Uint64:
    return emitLEUint64(I);
  case PT_Bool:
    return emitLEBool(I);
  case PT_Ptr:
    return emitLEPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitLESint8(const SourceInfo &L) {
  return emitOp<>(OP_LESint8, L);
}
bool ByteCodeEmitter::emitLEUint8(const SourceInfo &L) {
  return emitOp<>(OP_LEUint8, L);
}
bool ByteCodeEmitter::emitLESint16(const SourceInfo &L) {
  return emitOp<>(OP_LESint16, L);
}
bool ByteCodeEmitter::emitLEUint16(const SourceInfo &L) {
  return emitOp<>(OP_LEUint16, L);
}
bool ByteCodeEmitter::emitLESint32(const SourceInfo &L) {
  return emitOp<>(OP_LESint32, L);
}
bool ByteCodeEmitter::emitLEUint32(const SourceInfo &L) {
  return emitOp<>(OP_LEUint32, L);
}
bool ByteCodeEmitter::emitLESint64(const SourceInfo &L) {
  return emitOp<>(OP_LESint64, L);
}
bool ByteCodeEmitter::emitLEUint64(const SourceInfo &L) {
  return emitOp<>(OP_LEUint64, L);
}
bool ByteCodeEmitter::emitLEBool(const SourceInfo &L) {
  return emitOp<>(OP_LEBool, L);
}
bool ByteCodeEmitter::emitLEPtr(const SourceInfo &L) {
  return emitOp<>(OP_LEPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitLESint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitLEUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitLESint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitLEUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitLESint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitLEUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitLESint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitLEUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitLEBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitLEPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LE<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_LTSint8,
OP_LTUint8,
OP_LTSint16,
OP_LTUint16,
OP_LTSint32,
OP_LTUint32,
OP_LTSint64,
OP_LTUint64,
OP_LTBool,
OP_LTPtr,
#endif
#ifdef GET_INTERP
case OP_LTSint8: {
  if (!LT<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_LTUint8: {
  if (!LT<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_LTSint16: {
  if (!LT<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_LTUint16: {
  if (!LT<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_LTSint32: {
  if (!LT<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_LTUint32: {
  if (!LT<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_LTSint64: {
  if (!LT<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_LTUint64: {
  if (!LT<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_LTBool: {
  if (!LT<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_LTPtr: {
  if (!LT<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_LTSint8:
  PrintName("LTSint8");
  OS << "\t" << "\n";
  continue;
case OP_LTUint8:
  PrintName("LTUint8");
  OS << "\t" << "\n";
  continue;
case OP_LTSint16:
  PrintName("LTSint16");
  OS << "\t" << "\n";
  continue;
case OP_LTUint16:
  PrintName("LTUint16");
  OS << "\t" << "\n";
  continue;
case OP_LTSint32:
  PrintName("LTSint32");
  OS << "\t" << "\n";
  continue;
case OP_LTUint32:
  PrintName("LTUint32");
  OS << "\t" << "\n";
  continue;
case OP_LTSint64:
  PrintName("LTSint64");
  OS << "\t" << "\n";
  continue;
case OP_LTUint64:
  PrintName("LTUint64");
  OS << "\t" << "\n";
  continue;
case OP_LTBool:
  PrintName("LTBool");
  OS << "\t" << "\n";
  continue;
case OP_LTPtr:
  PrintName("LTPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLTSint8(const SourceInfo &);
bool emitLTUint8(const SourceInfo &);
bool emitLTSint16(const SourceInfo &);
bool emitLTUint16(const SourceInfo &);
bool emitLTSint32(const SourceInfo &);
bool emitLTUint32(const SourceInfo &);
bool emitLTSint64(const SourceInfo &);
bool emitLTUint64(const SourceInfo &);
bool emitLTBool(const SourceInfo &);
bool emitLTPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLT(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitLT(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitLTSint8(I);
  case PT_Uint8:
    return emitLTUint8(I);
  case PT_Sint16:
    return emitLTSint16(I);
  case PT_Uint16:
    return emitLTUint16(I);
  case PT_Sint32:
    return emitLTSint32(I);
  case PT_Uint32:
    return emitLTUint32(I);
  case PT_Sint64:
    return emitLTSint64(I);
  case PT_Uint64:
    return emitLTUint64(I);
  case PT_Bool:
    return emitLTBool(I);
  case PT_Ptr:
    return emitLTPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitLTSint8(const SourceInfo &L) {
  return emitOp<>(OP_LTSint8, L);
}
bool ByteCodeEmitter::emitLTUint8(const SourceInfo &L) {
  return emitOp<>(OP_LTUint8, L);
}
bool ByteCodeEmitter::emitLTSint16(const SourceInfo &L) {
  return emitOp<>(OP_LTSint16, L);
}
bool ByteCodeEmitter::emitLTUint16(const SourceInfo &L) {
  return emitOp<>(OP_LTUint16, L);
}
bool ByteCodeEmitter::emitLTSint32(const SourceInfo &L) {
  return emitOp<>(OP_LTSint32, L);
}
bool ByteCodeEmitter::emitLTUint32(const SourceInfo &L) {
  return emitOp<>(OP_LTUint32, L);
}
bool ByteCodeEmitter::emitLTSint64(const SourceInfo &L) {
  return emitOp<>(OP_LTSint64, L);
}
bool ByteCodeEmitter::emitLTUint64(const SourceInfo &L) {
  return emitOp<>(OP_LTUint64, L);
}
bool ByteCodeEmitter::emitLTBool(const SourceInfo &L) {
  return emitOp<>(OP_LTBool, L);
}
bool ByteCodeEmitter::emitLTPtr(const SourceInfo &L) {
  return emitOp<>(OP_LTPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitLTSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitLTUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitLTSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitLTUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitLTSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitLTUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitLTSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitLTUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitLTBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitLTPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LT<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_LoadSint8,
OP_LoadUint8,
OP_LoadSint16,
OP_LoadUint16,
OP_LoadSint32,
OP_LoadUint32,
OP_LoadSint64,
OP_LoadUint64,
OP_LoadBool,
OP_LoadPtr,
#endif
#ifdef GET_INTERP
case OP_LoadSint8: {
  if (!Load<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_LoadUint8: {
  if (!Load<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_LoadSint16: {
  if (!Load<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_LoadUint16: {
  if (!Load<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_LoadSint32: {
  if (!Load<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_LoadUint32: {
  if (!Load<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_LoadSint64: {
  if (!Load<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_LoadUint64: {
  if (!Load<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_LoadBool: {
  if (!Load<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPtr: {
  if (!Load<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_LoadSint8:
  PrintName("LoadSint8");
  OS << "\t" << "\n";
  continue;
case OP_LoadUint8:
  PrintName("LoadUint8");
  OS << "\t" << "\n";
  continue;
case OP_LoadSint16:
  PrintName("LoadSint16");
  OS << "\t" << "\n";
  continue;
case OP_LoadUint16:
  PrintName("LoadUint16");
  OS << "\t" << "\n";
  continue;
case OP_LoadSint32:
  PrintName("LoadSint32");
  OS << "\t" << "\n";
  continue;
case OP_LoadUint32:
  PrintName("LoadUint32");
  OS << "\t" << "\n";
  continue;
case OP_LoadSint64:
  PrintName("LoadSint64");
  OS << "\t" << "\n";
  continue;
case OP_LoadUint64:
  PrintName("LoadUint64");
  OS << "\t" << "\n";
  continue;
case OP_LoadBool:
  PrintName("LoadBool");
  OS << "\t" << "\n";
  continue;
case OP_LoadPtr:
  PrintName("LoadPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLoadSint8(const SourceInfo &);
bool emitLoadUint8(const SourceInfo &);
bool emitLoadSint16(const SourceInfo &);
bool emitLoadUint16(const SourceInfo &);
bool emitLoadSint32(const SourceInfo &);
bool emitLoadUint32(const SourceInfo &);
bool emitLoadSint64(const SourceInfo &);
bool emitLoadUint64(const SourceInfo &);
bool emitLoadBool(const SourceInfo &);
bool emitLoadPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLoad(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitLoad(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitLoadSint8(I);
  case PT_Uint8:
    return emitLoadUint8(I);
  case PT_Sint16:
    return emitLoadSint16(I);
  case PT_Uint16:
    return emitLoadUint16(I);
  case PT_Sint32:
    return emitLoadSint32(I);
  case PT_Uint32:
    return emitLoadUint32(I);
  case PT_Sint64:
    return emitLoadSint64(I);
  case PT_Uint64:
    return emitLoadUint64(I);
  case PT_Bool:
    return emitLoadBool(I);
  case PT_Ptr:
    return emitLoadPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitLoadSint8(const SourceInfo &L) {
  return emitOp<>(OP_LoadSint8, L);
}
bool ByteCodeEmitter::emitLoadUint8(const SourceInfo &L) {
  return emitOp<>(OP_LoadUint8, L);
}
bool ByteCodeEmitter::emitLoadSint16(const SourceInfo &L) {
  return emitOp<>(OP_LoadSint16, L);
}
bool ByteCodeEmitter::emitLoadUint16(const SourceInfo &L) {
  return emitOp<>(OP_LoadUint16, L);
}
bool ByteCodeEmitter::emitLoadSint32(const SourceInfo &L) {
  return emitOp<>(OP_LoadSint32, L);
}
bool ByteCodeEmitter::emitLoadUint32(const SourceInfo &L) {
  return emitOp<>(OP_LoadUint32, L);
}
bool ByteCodeEmitter::emitLoadSint64(const SourceInfo &L) {
  return emitOp<>(OP_LoadSint64, L);
}
bool ByteCodeEmitter::emitLoadUint64(const SourceInfo &L) {
  return emitOp<>(OP_LoadUint64, L);
}
bool ByteCodeEmitter::emitLoadBool(const SourceInfo &L) {
  return emitOp<>(OP_LoadBool, L);
}
bool ByteCodeEmitter::emitLoadPtr(const SourceInfo &L) {
  return emitOp<>(OP_LoadPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitLoadSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitLoadUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitLoadSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitLoadUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitLoadSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitLoadUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitLoadSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitLoadUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitLoadBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitLoadPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Load<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_LoadPopSint8,
OP_LoadPopUint8,
OP_LoadPopSint16,
OP_LoadPopUint16,
OP_LoadPopSint32,
OP_LoadPopUint32,
OP_LoadPopSint64,
OP_LoadPopUint64,
OP_LoadPopBool,
OP_LoadPopPtr,
#endif
#ifdef GET_INTERP
case OP_LoadPopSint8: {
  if (!LoadPop<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopUint8: {
  if (!LoadPop<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopSint16: {
  if (!LoadPop<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopUint16: {
  if (!LoadPop<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopSint32: {
  if (!LoadPop<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopUint32: {
  if (!LoadPop<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopSint64: {
  if (!LoadPop<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopUint64: {
  if (!LoadPop<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopBool: {
  if (!LoadPop<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_LoadPopPtr: {
  if (!LoadPop<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_LoadPopSint8:
  PrintName("LoadPopSint8");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopUint8:
  PrintName("LoadPopUint8");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopSint16:
  PrintName("LoadPopSint16");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopUint16:
  PrintName("LoadPopUint16");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopSint32:
  PrintName("LoadPopSint32");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopUint32:
  PrintName("LoadPopUint32");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopSint64:
  PrintName("LoadPopSint64");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopUint64:
  PrintName("LoadPopUint64");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopBool:
  PrintName("LoadPopBool");
  OS << "\t" << "\n";
  continue;
case OP_LoadPopPtr:
  PrintName("LoadPopPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLoadPopSint8(const SourceInfo &);
bool emitLoadPopUint8(const SourceInfo &);
bool emitLoadPopSint16(const SourceInfo &);
bool emitLoadPopUint16(const SourceInfo &);
bool emitLoadPopSint32(const SourceInfo &);
bool emitLoadPopUint32(const SourceInfo &);
bool emitLoadPopSint64(const SourceInfo &);
bool emitLoadPopUint64(const SourceInfo &);
bool emitLoadPopBool(const SourceInfo &);
bool emitLoadPopPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitLoadPop(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitLoadPop(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitLoadPopSint8(I);
  case PT_Uint8:
    return emitLoadPopUint8(I);
  case PT_Sint16:
    return emitLoadPopSint16(I);
  case PT_Uint16:
    return emitLoadPopUint16(I);
  case PT_Sint32:
    return emitLoadPopSint32(I);
  case PT_Uint32:
    return emitLoadPopUint32(I);
  case PT_Sint64:
    return emitLoadPopSint64(I);
  case PT_Uint64:
    return emitLoadPopUint64(I);
  case PT_Bool:
    return emitLoadPopBool(I);
  case PT_Ptr:
    return emitLoadPopPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitLoadPopSint8(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopSint8, L);
}
bool ByteCodeEmitter::emitLoadPopUint8(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopUint8, L);
}
bool ByteCodeEmitter::emitLoadPopSint16(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopSint16, L);
}
bool ByteCodeEmitter::emitLoadPopUint16(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopUint16, L);
}
bool ByteCodeEmitter::emitLoadPopSint32(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopSint32, L);
}
bool ByteCodeEmitter::emitLoadPopUint32(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopUint32, L);
}
bool ByteCodeEmitter::emitLoadPopSint64(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopSint64, L);
}
bool ByteCodeEmitter::emitLoadPopUint64(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopUint64, L);
}
bool ByteCodeEmitter::emitLoadPopBool(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopBool, L);
}
bool ByteCodeEmitter::emitLoadPopPtr(const SourceInfo &L) {
  return emitOp<>(OP_LoadPopPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitLoadPopSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitLoadPopUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitLoadPopSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitLoadPopUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitLoadPopSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitLoadPopUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitLoadPopSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitLoadPopUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitLoadPopBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitLoadPopPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return LoadPop<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_MulSint8,
OP_MulUint8,
OP_MulSint16,
OP_MulUint16,
OP_MulSint32,
OP_MulUint32,
OP_MulSint64,
OP_MulUint64,
OP_MulBool,
#endif
#ifdef GET_INTERP
case OP_MulSint8: {
  if (!Mul<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_MulUint8: {
  if (!Mul<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_MulSint16: {
  if (!Mul<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_MulUint16: {
  if (!Mul<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_MulSint32: {
  if (!Mul<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_MulUint32: {
  if (!Mul<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_MulSint64: {
  if (!Mul<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_MulUint64: {
  if (!Mul<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_MulBool: {
  if (!Mul<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_MulSint8:
  PrintName("MulSint8");
  OS << "\t" << "\n";
  continue;
case OP_MulUint8:
  PrintName("MulUint8");
  OS << "\t" << "\n";
  continue;
case OP_MulSint16:
  PrintName("MulSint16");
  OS << "\t" << "\n";
  continue;
case OP_MulUint16:
  PrintName("MulUint16");
  OS << "\t" << "\n";
  continue;
case OP_MulSint32:
  PrintName("MulSint32");
  OS << "\t" << "\n";
  continue;
case OP_MulUint32:
  PrintName("MulUint32");
  OS << "\t" << "\n";
  continue;
case OP_MulSint64:
  PrintName("MulSint64");
  OS << "\t" << "\n";
  continue;
case OP_MulUint64:
  PrintName("MulUint64");
  OS << "\t" << "\n";
  continue;
case OP_MulBool:
  PrintName("MulBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitMulSint8(const SourceInfo &);
bool emitMulUint8(const SourceInfo &);
bool emitMulSint16(const SourceInfo &);
bool emitMulUint16(const SourceInfo &);
bool emitMulSint32(const SourceInfo &);
bool emitMulUint32(const SourceInfo &);
bool emitMulSint64(const SourceInfo &);
bool emitMulUint64(const SourceInfo &);
bool emitMulBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitMul(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitMul(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitMulSint8(I);
  case PT_Uint8:
    return emitMulUint8(I);
  case PT_Sint16:
    return emitMulSint16(I);
  case PT_Uint16:
    return emitMulUint16(I);
  case PT_Sint32:
    return emitMulSint32(I);
  case PT_Uint32:
    return emitMulUint32(I);
  case PT_Sint64:
    return emitMulSint64(I);
  case PT_Uint64:
    return emitMulUint64(I);
  case PT_Bool:
    return emitMulBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitMulSint8(const SourceInfo &L) {
  return emitOp<>(OP_MulSint8, L);
}
bool ByteCodeEmitter::emitMulUint8(const SourceInfo &L) {
  return emitOp<>(OP_MulUint8, L);
}
bool ByteCodeEmitter::emitMulSint16(const SourceInfo &L) {
  return emitOp<>(OP_MulSint16, L);
}
bool ByteCodeEmitter::emitMulUint16(const SourceInfo &L) {
  return emitOp<>(OP_MulUint16, L);
}
bool ByteCodeEmitter::emitMulSint32(const SourceInfo &L) {
  return emitOp<>(OP_MulSint32, L);
}
bool ByteCodeEmitter::emitMulUint32(const SourceInfo &L) {
  return emitOp<>(OP_MulUint32, L);
}
bool ByteCodeEmitter::emitMulSint64(const SourceInfo &L) {
  return emitOp<>(OP_MulSint64, L);
}
bool ByteCodeEmitter::emitMulUint64(const SourceInfo &L) {
  return emitOp<>(OP_MulUint64, L);
}
bool ByteCodeEmitter::emitMulBool(const SourceInfo &L) {
  return emitOp<>(OP_MulBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitMulSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitMulUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitMulSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitMulUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitMulSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitMulUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitMulSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitMulUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitMulBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Mul<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_NESint8,
OP_NEUint8,
OP_NESint16,
OP_NEUint16,
OP_NESint32,
OP_NEUint32,
OP_NESint64,
OP_NEUint64,
OP_NEBool,
OP_NEPtr,
#endif
#ifdef GET_INTERP
case OP_NESint8: {
  if (!NE<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_NEUint8: {
  if (!NE<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_NESint16: {
  if (!NE<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_NEUint16: {
  if (!NE<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_NESint32: {
  if (!NE<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_NEUint32: {
  if (!NE<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_NESint64: {
  if (!NE<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_NEUint64: {
  if (!NE<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_NEBool: {
  if (!NE<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_NEPtr: {
  if (!NE<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_NESint8:
  PrintName("NESint8");
  OS << "\t" << "\n";
  continue;
case OP_NEUint8:
  PrintName("NEUint8");
  OS << "\t" << "\n";
  continue;
case OP_NESint16:
  PrintName("NESint16");
  OS << "\t" << "\n";
  continue;
case OP_NEUint16:
  PrintName("NEUint16");
  OS << "\t" << "\n";
  continue;
case OP_NESint32:
  PrintName("NESint32");
  OS << "\t" << "\n";
  continue;
case OP_NEUint32:
  PrintName("NEUint32");
  OS << "\t" << "\n";
  continue;
case OP_NESint64:
  PrintName("NESint64");
  OS << "\t" << "\n";
  continue;
case OP_NEUint64:
  PrintName("NEUint64");
  OS << "\t" << "\n";
  continue;
case OP_NEBool:
  PrintName("NEBool");
  OS << "\t" << "\n";
  continue;
case OP_NEPtr:
  PrintName("NEPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitNESint8(const SourceInfo &);
bool emitNEUint8(const SourceInfo &);
bool emitNESint16(const SourceInfo &);
bool emitNEUint16(const SourceInfo &);
bool emitNESint32(const SourceInfo &);
bool emitNEUint32(const SourceInfo &);
bool emitNESint64(const SourceInfo &);
bool emitNEUint64(const SourceInfo &);
bool emitNEBool(const SourceInfo &);
bool emitNEPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitNE(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitNE(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitNESint8(I);
  case PT_Uint8:
    return emitNEUint8(I);
  case PT_Sint16:
    return emitNESint16(I);
  case PT_Uint16:
    return emitNEUint16(I);
  case PT_Sint32:
    return emitNESint32(I);
  case PT_Uint32:
    return emitNEUint32(I);
  case PT_Sint64:
    return emitNESint64(I);
  case PT_Uint64:
    return emitNEUint64(I);
  case PT_Bool:
    return emitNEBool(I);
  case PT_Ptr:
    return emitNEPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitNESint8(const SourceInfo &L) {
  return emitOp<>(OP_NESint8, L);
}
bool ByteCodeEmitter::emitNEUint8(const SourceInfo &L) {
  return emitOp<>(OP_NEUint8, L);
}
bool ByteCodeEmitter::emitNESint16(const SourceInfo &L) {
  return emitOp<>(OP_NESint16, L);
}
bool ByteCodeEmitter::emitNEUint16(const SourceInfo &L) {
  return emitOp<>(OP_NEUint16, L);
}
bool ByteCodeEmitter::emitNESint32(const SourceInfo &L) {
  return emitOp<>(OP_NESint32, L);
}
bool ByteCodeEmitter::emitNEUint32(const SourceInfo &L) {
  return emitOp<>(OP_NEUint32, L);
}
bool ByteCodeEmitter::emitNESint64(const SourceInfo &L) {
  return emitOp<>(OP_NESint64, L);
}
bool ByteCodeEmitter::emitNEUint64(const SourceInfo &L) {
  return emitOp<>(OP_NEUint64, L);
}
bool ByteCodeEmitter::emitNEBool(const SourceInfo &L) {
  return emitOp<>(OP_NEBool, L);
}
bool ByteCodeEmitter::emitNEPtr(const SourceInfo &L) {
  return emitOp<>(OP_NEPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitNESint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitNEUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitNESint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitNEUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitNESint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitNEUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitNESint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitNEUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitNEBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitNEPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NE<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_NarrowPtr,
#endif
#ifdef GET_INTERP
case OP_NarrowPtr: {
  if (!NarrowPtr(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_NarrowPtr:
  PrintName("NarrowPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitNarrowPtr(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitNarrowPtr(const SourceInfo &L) {
  return emitOp<>(OP_NarrowPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitNarrowPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NarrowPtr(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_NoRet,
#endif
#ifdef GET_INTERP
case OP_NoRet: {
  if (!NoRet(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_NoRet:
  PrintName("NoRet");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitNoRet(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitNoRet(const SourceInfo &L) {
  return emitOp<>(OP_NoRet, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitNoRet(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return NoRet(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_NullPtr,
#endif
#ifdef GET_INTERP
case OP_NullPtr: {
  if (!Null<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_NullPtr:
  PrintName("NullPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitNullPtr(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitNullPtr(const SourceInfo &L) {
  return emitOp<>(OP_NullPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitNullPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Null<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_PopSint8,
OP_PopUint8,
OP_PopSint16,
OP_PopUint16,
OP_PopSint32,
OP_PopUint32,
OP_PopSint64,
OP_PopUint64,
OP_PopBool,
OP_PopPtr,
#endif
#ifdef GET_INTERP
case OP_PopSint8: {
  if (!Pop<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_PopUint8: {
  if (!Pop<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_PopSint16: {
  if (!Pop<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_PopUint16: {
  if (!Pop<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_PopSint32: {
  if (!Pop<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_PopUint32: {
  if (!Pop<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_PopSint64: {
  if (!Pop<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_PopUint64: {
  if (!Pop<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_PopBool: {
  if (!Pop<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_PopPtr: {
  if (!Pop<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_PopSint8:
  PrintName("PopSint8");
  OS << "\t" << "\n";
  continue;
case OP_PopUint8:
  PrintName("PopUint8");
  OS << "\t" << "\n";
  continue;
case OP_PopSint16:
  PrintName("PopSint16");
  OS << "\t" << "\n";
  continue;
case OP_PopUint16:
  PrintName("PopUint16");
  OS << "\t" << "\n";
  continue;
case OP_PopSint32:
  PrintName("PopSint32");
  OS << "\t" << "\n";
  continue;
case OP_PopUint32:
  PrintName("PopUint32");
  OS << "\t" << "\n";
  continue;
case OP_PopSint64:
  PrintName("PopSint64");
  OS << "\t" << "\n";
  continue;
case OP_PopUint64:
  PrintName("PopUint64");
  OS << "\t" << "\n";
  continue;
case OP_PopBool:
  PrintName("PopBool");
  OS << "\t" << "\n";
  continue;
case OP_PopPtr:
  PrintName("PopPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitPopSint8(const SourceInfo &);
bool emitPopUint8(const SourceInfo &);
bool emitPopSint16(const SourceInfo &);
bool emitPopUint16(const SourceInfo &);
bool emitPopSint32(const SourceInfo &);
bool emitPopUint32(const SourceInfo &);
bool emitPopSint64(const SourceInfo &);
bool emitPopUint64(const SourceInfo &);
bool emitPopBool(const SourceInfo &);
bool emitPopPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitPop(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitPop(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitPopSint8(I);
  case PT_Uint8:
    return emitPopUint8(I);
  case PT_Sint16:
    return emitPopSint16(I);
  case PT_Uint16:
    return emitPopUint16(I);
  case PT_Sint32:
    return emitPopSint32(I);
  case PT_Uint32:
    return emitPopUint32(I);
  case PT_Sint64:
    return emitPopSint64(I);
  case PT_Uint64:
    return emitPopUint64(I);
  case PT_Bool:
    return emitPopBool(I);
  case PT_Ptr:
    return emitPopPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitPopSint8(const SourceInfo &L) {
  return emitOp<>(OP_PopSint8, L);
}
bool ByteCodeEmitter::emitPopUint8(const SourceInfo &L) {
  return emitOp<>(OP_PopUint8, L);
}
bool ByteCodeEmitter::emitPopSint16(const SourceInfo &L) {
  return emitOp<>(OP_PopSint16, L);
}
bool ByteCodeEmitter::emitPopUint16(const SourceInfo &L) {
  return emitOp<>(OP_PopUint16, L);
}
bool ByteCodeEmitter::emitPopSint32(const SourceInfo &L) {
  return emitOp<>(OP_PopSint32, L);
}
bool ByteCodeEmitter::emitPopUint32(const SourceInfo &L) {
  return emitOp<>(OP_PopUint32, L);
}
bool ByteCodeEmitter::emitPopSint64(const SourceInfo &L) {
  return emitOp<>(OP_PopSint64, L);
}
bool ByteCodeEmitter::emitPopUint64(const SourceInfo &L) {
  return emitOp<>(OP_PopUint64, L);
}
bool ByteCodeEmitter::emitPopBool(const SourceInfo &L) {
  return emitOp<>(OP_PopBool, L);
}
bool ByteCodeEmitter::emitPopPtr(const SourceInfo &L) {
  return emitOp<>(OP_PopPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitPopSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitPopUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitPopSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitPopUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitPopSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitPopUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitPopSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitPopUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitPopBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitPopPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Pop<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_RetSint8,
OP_RetUint8,
OP_RetSint16,
OP_RetUint16,
OP_RetSint32,
OP_RetUint32,
OP_RetSint64,
OP_RetUint64,
OP_RetBool,
OP_RetPtr,
#endif
#ifdef GET_INTERP
case OP_RetSint8: {
  if (!Ret<PT_Sint8>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetUint8: {
  if (!Ret<PT_Uint8>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetSint16: {
  if (!Ret<PT_Sint16>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetUint16: {
  if (!Ret<PT_Uint16>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetSint32: {
  if (!Ret<PT_Sint32>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetUint32: {
  if (!Ret<PT_Uint32>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetSint64: {
  if (!Ret<PT_Sint64>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetUint64: {
  if (!Ret<PT_Uint64>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetBool: {
  if (!Ret<PT_Bool>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
case OP_RetPtr: {
  if (!Ret<PT_Ptr>(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_RetSint8:
  PrintName("RetSint8");
  OS << "\t" << "\n";
  continue;
case OP_RetUint8:
  PrintName("RetUint8");
  OS << "\t" << "\n";
  continue;
case OP_RetSint16:
  PrintName("RetSint16");
  OS << "\t" << "\n";
  continue;
case OP_RetUint16:
  PrintName("RetUint16");
  OS << "\t" << "\n";
  continue;
case OP_RetSint32:
  PrintName("RetSint32");
  OS << "\t" << "\n";
  continue;
case OP_RetUint32:
  PrintName("RetUint32");
  OS << "\t" << "\n";
  continue;
case OP_RetSint64:
  PrintName("RetSint64");
  OS << "\t" << "\n";
  continue;
case OP_RetUint64:
  PrintName("RetUint64");
  OS << "\t" << "\n";
  continue;
case OP_RetBool:
  PrintName("RetBool");
  OS << "\t" << "\n";
  continue;
case OP_RetPtr:
  PrintName("RetPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitRetSint8(const SourceInfo &);
bool emitRetUint8(const SourceInfo &);
bool emitRetSint16(const SourceInfo &);
bool emitRetUint16(const SourceInfo &);
bool emitRetSint32(const SourceInfo &);
bool emitRetUint32(const SourceInfo &);
bool emitRetSint64(const SourceInfo &);
bool emitRetUint64(const SourceInfo &);
bool emitRetBool(const SourceInfo &);
bool emitRetPtr(const SourceInfo &);
#if defined(GET_EVAL_PROTO)
template<PrimType>
bool emitRet(const SourceInfo &);
#endif
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitRet(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitRet(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
#ifdef GET_LINK_IMPL
    return emitRetSint8
#else
    return emitRet<PT_Sint8>
#endif
      (I);
  case PT_Uint8:
#ifdef GET_LINK_IMPL
    return emitRetUint8
#else
    return emitRet<PT_Uint8>
#endif
      (I);
  case PT_Sint16:
#ifdef GET_LINK_IMPL
    return emitRetSint16
#else
    return emitRet<PT_Sint16>
#endif
      (I);
  case PT_Uint16:
#ifdef GET_LINK_IMPL
    return emitRetUint16
#else
    return emitRet<PT_Uint16>
#endif
      (I);
  case PT_Sint32:
#ifdef GET_LINK_IMPL
    return emitRetSint32
#else
    return emitRet<PT_Sint32>
#endif
      (I);
  case PT_Uint32:
#ifdef GET_LINK_IMPL
    return emitRetUint32
#else
    return emitRet<PT_Uint32>
#endif
      (I);
  case PT_Sint64:
#ifdef GET_LINK_IMPL
    return emitRetSint64
#else
    return emitRet<PT_Sint64>
#endif
      (I);
  case PT_Uint64:
#ifdef GET_LINK_IMPL
    return emitRetUint64
#else
    return emitRet<PT_Uint64>
#endif
      (I);
  case PT_Bool:
#ifdef GET_LINK_IMPL
    return emitRetBool
#else
    return emitRet<PT_Bool>
#endif
      (I);
  case PT_Ptr:
#ifdef GET_LINK_IMPL
    return emitRetPtr
#else
    return emitRet<PT_Ptr>
#endif
      (I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitRetSint8(const SourceInfo &L) {
  return emitOp<>(OP_RetSint8, L);
}
bool ByteCodeEmitter::emitRetUint8(const SourceInfo &L) {
  return emitOp<>(OP_RetUint8, L);
}
bool ByteCodeEmitter::emitRetSint16(const SourceInfo &L) {
  return emitOp<>(OP_RetSint16, L);
}
bool ByteCodeEmitter::emitRetUint16(const SourceInfo &L) {
  return emitOp<>(OP_RetUint16, L);
}
bool ByteCodeEmitter::emitRetSint32(const SourceInfo &L) {
  return emitOp<>(OP_RetSint32, L);
}
bool ByteCodeEmitter::emitRetUint32(const SourceInfo &L) {
  return emitOp<>(OP_RetUint32, L);
}
bool ByteCodeEmitter::emitRetSint64(const SourceInfo &L) {
  return emitOp<>(OP_RetSint64, L);
}
bool ByteCodeEmitter::emitRetUint64(const SourceInfo &L) {
  return emitOp<>(OP_RetUint64, L);
}
bool ByteCodeEmitter::emitRetBool(const SourceInfo &L) {
  return emitOp<>(OP_RetBool, L);
}
bool ByteCodeEmitter::emitRetPtr(const SourceInfo &L) {
  return emitOp<>(OP_RetPtr, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_RetValue,
#endif
#ifdef GET_INTERP
case OP_RetValue: {
  if (!RetValue(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_RetValue:
  PrintName("RetValue");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitRetValue(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitRetValue(const SourceInfo &L) {
  return emitOp<>(OP_RetValue, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_RetVoid,
#endif
#ifdef GET_INTERP
case OP_RetVoid: {
  if (!RetVoid(S, PC, Result))
    return false;
  if (!S.Current || S.Current->isRoot())
    return true;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_RetVoid:
  PrintName("RetVoid");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitRetVoid(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitRetVoid(const SourceInfo &L) {
  return emitOp<>(OP_RetVoid, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SetFieldSint8,
OP_SetFieldUint8,
OP_SetFieldSint16,
OP_SetFieldUint16,
OP_SetFieldSint32,
OP_SetFieldUint32,
OP_SetFieldSint64,
OP_SetFieldUint64,
OP_SetFieldBool,
OP_SetFieldPtr,
#endif
#ifdef GET_INTERP
case OP_SetFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SetFieldSint8:
  PrintName("SetFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldUint8:
  PrintName("SetFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldSint16:
  PrintName("SetFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldUint16:
  PrintName("SetFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldSint32:
  PrintName("SetFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldUint32:
  PrintName("SetFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldSint64:
  PrintName("SetFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldUint64:
  PrintName("SetFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldBool:
  PrintName("SetFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetFieldPtr:
  PrintName("SetFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetFieldSint8(uint32_t, const SourceInfo &);
bool emitSetFieldUint8(uint32_t, const SourceInfo &);
bool emitSetFieldSint16(uint32_t, const SourceInfo &);
bool emitSetFieldUint16(uint32_t, const SourceInfo &);
bool emitSetFieldSint32(uint32_t, const SourceInfo &);
bool emitSetFieldUint32(uint32_t, const SourceInfo &);
bool emitSetFieldSint64(uint32_t, const SourceInfo &);
bool emitSetFieldUint64(uint32_t, const SourceInfo &);
bool emitSetFieldBool(uint32_t, const SourceInfo &);
bool emitSetFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSetField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSetFieldSint8(A0, I);
  case PT_Uint8:
    return emitSetFieldUint8(A0, I);
  case PT_Sint16:
    return emitSetFieldSint16(A0, I);
  case PT_Uint16:
    return emitSetFieldUint16(A0, I);
  case PT_Sint32:
    return emitSetFieldSint32(A0, I);
  case PT_Uint32:
    return emitSetFieldUint32(A0, I);
  case PT_Sint64:
    return emitSetFieldSint64(A0, I);
  case PT_Uint64:
    return emitSetFieldUint64(A0, I);
  case PT_Bool:
    return emitSetFieldBool(A0, I);
  case PT_Ptr:
    return emitSetFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSetFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitSetFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitSetFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitSetFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitSetFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitSetFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitSetFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitSetFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitSetFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldBool, A0, L);
}
bool ByteCodeEmitter::emitSetFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSetFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitSetFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SetGlobalSint8,
OP_SetGlobalUint8,
OP_SetGlobalSint16,
OP_SetGlobalUint16,
OP_SetGlobalSint32,
OP_SetGlobalUint32,
OP_SetGlobalSint64,
OP_SetGlobalUint64,
OP_SetGlobalBool,
OP_SetGlobalPtr,
#endif
#ifdef GET_INTERP
case OP_SetGlobalSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetGlobalPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetGlobal<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SetGlobalSint8:
  PrintName("SetGlobalSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalUint8:
  PrintName("SetGlobalUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalSint16:
  PrintName("SetGlobalSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalUint16:
  PrintName("SetGlobalUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalSint32:
  PrintName("SetGlobalSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalUint32:
  PrintName("SetGlobalUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalSint64:
  PrintName("SetGlobalSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalUint64:
  PrintName("SetGlobalUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalBool:
  PrintName("SetGlobalBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetGlobalPtr:
  PrintName("SetGlobalPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetGlobalSint8(uint32_t, const SourceInfo &);
bool emitSetGlobalUint8(uint32_t, const SourceInfo &);
bool emitSetGlobalSint16(uint32_t, const SourceInfo &);
bool emitSetGlobalUint16(uint32_t, const SourceInfo &);
bool emitSetGlobalSint32(uint32_t, const SourceInfo &);
bool emitSetGlobalUint32(uint32_t, const SourceInfo &);
bool emitSetGlobalSint64(uint32_t, const SourceInfo &);
bool emitSetGlobalUint64(uint32_t, const SourceInfo &);
bool emitSetGlobalBool(uint32_t, const SourceInfo &);
bool emitSetGlobalPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetGlobal(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSetGlobal(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSetGlobalSint8(A0, I);
  case PT_Uint8:
    return emitSetGlobalUint8(A0, I);
  case PT_Sint16:
    return emitSetGlobalSint16(A0, I);
  case PT_Uint16:
    return emitSetGlobalUint16(A0, I);
  case PT_Sint32:
    return emitSetGlobalSint32(A0, I);
  case PT_Uint32:
    return emitSetGlobalUint32(A0, I);
  case PT_Sint64:
    return emitSetGlobalSint64(A0, I);
  case PT_Uint64:
    return emitSetGlobalUint64(A0, I);
  case PT_Bool:
    return emitSetGlobalBool(A0, I);
  case PT_Ptr:
    return emitSetGlobalPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSetGlobalSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalSint8, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalUint8, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalSint16, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalUint16, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalSint32, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalUint32, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalSint64, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalUint64, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalBool, A0, L);
}
bool ByteCodeEmitter::emitSetGlobalPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetGlobalPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSetGlobalSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitSetGlobalPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetGlobal<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SetLocalSint8,
OP_SetLocalUint8,
OP_SetLocalSint16,
OP_SetLocalUint16,
OP_SetLocalSint32,
OP_SetLocalUint32,
OP_SetLocalSint64,
OP_SetLocalUint64,
OP_SetLocalBool,
OP_SetLocalPtr,
#endif
#ifdef GET_INTERP
case OP_SetLocalSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetLocalPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetLocal<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SetLocalSint8:
  PrintName("SetLocalSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalUint8:
  PrintName("SetLocalUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalSint16:
  PrintName("SetLocalSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalUint16:
  PrintName("SetLocalUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalSint32:
  PrintName("SetLocalSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalUint32:
  PrintName("SetLocalUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalSint64:
  PrintName("SetLocalSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalUint64:
  PrintName("SetLocalUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalBool:
  PrintName("SetLocalBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetLocalPtr:
  PrintName("SetLocalPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetLocalSint8(uint32_t, const SourceInfo &);
bool emitSetLocalUint8(uint32_t, const SourceInfo &);
bool emitSetLocalSint16(uint32_t, const SourceInfo &);
bool emitSetLocalUint16(uint32_t, const SourceInfo &);
bool emitSetLocalSint32(uint32_t, const SourceInfo &);
bool emitSetLocalUint32(uint32_t, const SourceInfo &);
bool emitSetLocalSint64(uint32_t, const SourceInfo &);
bool emitSetLocalUint64(uint32_t, const SourceInfo &);
bool emitSetLocalBool(uint32_t, const SourceInfo &);
bool emitSetLocalPtr(uint32_t, const SourceInfo &);
#if defined(GET_EVAL_PROTO)
template<PrimType>
bool emitSetLocal(uint32_t, const SourceInfo &);
#endif
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetLocal(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSetLocal(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
#ifdef GET_LINK_IMPL
    return emitSetLocalSint8
#else
    return emitSetLocal<PT_Sint8>
#endif
      (A0, I);
  case PT_Uint8:
#ifdef GET_LINK_IMPL
    return emitSetLocalUint8
#else
    return emitSetLocal<PT_Uint8>
#endif
      (A0, I);
  case PT_Sint16:
#ifdef GET_LINK_IMPL
    return emitSetLocalSint16
#else
    return emitSetLocal<PT_Sint16>
#endif
      (A0, I);
  case PT_Uint16:
#ifdef GET_LINK_IMPL
    return emitSetLocalUint16
#else
    return emitSetLocal<PT_Uint16>
#endif
      (A0, I);
  case PT_Sint32:
#ifdef GET_LINK_IMPL
    return emitSetLocalSint32
#else
    return emitSetLocal<PT_Sint32>
#endif
      (A0, I);
  case PT_Uint32:
#ifdef GET_LINK_IMPL
    return emitSetLocalUint32
#else
    return emitSetLocal<PT_Uint32>
#endif
      (A0, I);
  case PT_Sint64:
#ifdef GET_LINK_IMPL
    return emitSetLocalSint64
#else
    return emitSetLocal<PT_Sint64>
#endif
      (A0, I);
  case PT_Uint64:
#ifdef GET_LINK_IMPL
    return emitSetLocalUint64
#else
    return emitSetLocal<PT_Uint64>
#endif
      (A0, I);
  case PT_Bool:
#ifdef GET_LINK_IMPL
    return emitSetLocalBool
#else
    return emitSetLocal<PT_Bool>
#endif
      (A0, I);
  case PT_Ptr:
#ifdef GET_LINK_IMPL
    return emitSetLocalPtr
#else
    return emitSetLocal<PT_Ptr>
#endif
      (A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSetLocalSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalSint8, A0, L);
}
bool ByteCodeEmitter::emitSetLocalUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalUint8, A0, L);
}
bool ByteCodeEmitter::emitSetLocalSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalSint16, A0, L);
}
bool ByteCodeEmitter::emitSetLocalUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalUint16, A0, L);
}
bool ByteCodeEmitter::emitSetLocalSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalSint32, A0, L);
}
bool ByteCodeEmitter::emitSetLocalUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalUint32, A0, L);
}
bool ByteCodeEmitter::emitSetLocalSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalSint64, A0, L);
}
bool ByteCodeEmitter::emitSetLocalUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalUint64, A0, L);
}
bool ByteCodeEmitter::emitSetLocalBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalBool, A0, L);
}
bool ByteCodeEmitter::emitSetLocalPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetLocalPtr, A0, L);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SetParamSint8,
OP_SetParamUint8,
OP_SetParamSint16,
OP_SetParamUint16,
OP_SetParamSint32,
OP_SetParamUint32,
OP_SetParamSint64,
OP_SetParamUint64,
OP_SetParamBool,
OP_SetParamPtr,
#endif
#ifdef GET_INTERP
case OP_SetParamSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetParamPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetParam<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SetParamSint8:
  PrintName("SetParamSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamUint8:
  PrintName("SetParamUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamSint16:
  PrintName("SetParamSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamUint16:
  PrintName("SetParamUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamSint32:
  PrintName("SetParamSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamUint32:
  PrintName("SetParamUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamSint64:
  PrintName("SetParamSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamUint64:
  PrintName("SetParamUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamBool:
  PrintName("SetParamBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetParamPtr:
  PrintName("SetParamPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetParamSint8(uint32_t, const SourceInfo &);
bool emitSetParamUint8(uint32_t, const SourceInfo &);
bool emitSetParamSint16(uint32_t, const SourceInfo &);
bool emitSetParamUint16(uint32_t, const SourceInfo &);
bool emitSetParamSint32(uint32_t, const SourceInfo &);
bool emitSetParamUint32(uint32_t, const SourceInfo &);
bool emitSetParamSint64(uint32_t, const SourceInfo &);
bool emitSetParamUint64(uint32_t, const SourceInfo &);
bool emitSetParamBool(uint32_t, const SourceInfo &);
bool emitSetParamPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetParam(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSetParam(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSetParamSint8(A0, I);
  case PT_Uint8:
    return emitSetParamUint8(A0, I);
  case PT_Sint16:
    return emitSetParamSint16(A0, I);
  case PT_Uint16:
    return emitSetParamUint16(A0, I);
  case PT_Sint32:
    return emitSetParamSint32(A0, I);
  case PT_Uint32:
    return emitSetParamUint32(A0, I);
  case PT_Sint64:
    return emitSetParamSint64(A0, I);
  case PT_Uint64:
    return emitSetParamUint64(A0, I);
  case PT_Bool:
    return emitSetParamBool(A0, I);
  case PT_Ptr:
    return emitSetParamPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSetParamSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamSint8, A0, L);
}
bool ByteCodeEmitter::emitSetParamUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamUint8, A0, L);
}
bool ByteCodeEmitter::emitSetParamSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamSint16, A0, L);
}
bool ByteCodeEmitter::emitSetParamUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamUint16, A0, L);
}
bool ByteCodeEmitter::emitSetParamSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamSint32, A0, L);
}
bool ByteCodeEmitter::emitSetParamUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamUint32, A0, L);
}
bool ByteCodeEmitter::emitSetParamSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamSint64, A0, L);
}
bool ByteCodeEmitter::emitSetParamUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamUint64, A0, L);
}
bool ByteCodeEmitter::emitSetParamBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamBool, A0, L);
}
bool ByteCodeEmitter::emitSetParamPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetParamPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSetParamSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitSetParamPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetParam<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SetThisFieldSint8,
OP_SetThisFieldUint8,
OP_SetThisFieldSint16,
OP_SetThisFieldUint16,
OP_SetThisFieldSint32,
OP_SetThisFieldUint32,
OP_SetThisFieldSint64,
OP_SetThisFieldUint64,
OP_SetThisFieldBool,
OP_SetThisFieldPtr,
#endif
#ifdef GET_INTERP
case OP_SetThisFieldSint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Sint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldUint8: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Uint8>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldSint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Sint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldUint16: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Uint16>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldSint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Sint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldUint32: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Uint32>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldSint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Sint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldUint64: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Uint64>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldBool: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Bool>(S, OpPC, V0))
    return false;
  continue;
}
case OP_SetThisFieldPtr: {
  auto V0 = ReadArg<uint32_t>(S, PC);
  if (!SetThisField<PT_Ptr>(S, OpPC, V0))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SetThisFieldSint8:
  PrintName("SetThisFieldSint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldUint8:
  PrintName("SetThisFieldUint8");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldSint16:
  PrintName("SetThisFieldSint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldUint16:
  PrintName("SetThisFieldUint16");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldSint32:
  PrintName("SetThisFieldSint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldUint32:
  PrintName("SetThisFieldUint32");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldSint64:
  PrintName("SetThisFieldSint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldUint64:
  PrintName("SetThisFieldUint64");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldBool:
  PrintName("SetThisFieldBool");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
case OP_SetThisFieldPtr:
  PrintName("SetThisFieldPtr");
  OS << "\t" << ReadArg<uint32_t>(P, PC) << " " << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetThisFieldSint8(uint32_t, const SourceInfo &);
bool emitSetThisFieldUint8(uint32_t, const SourceInfo &);
bool emitSetThisFieldSint16(uint32_t, const SourceInfo &);
bool emitSetThisFieldUint16(uint32_t, const SourceInfo &);
bool emitSetThisFieldSint32(uint32_t, const SourceInfo &);
bool emitSetThisFieldUint32(uint32_t, const SourceInfo &);
bool emitSetThisFieldSint64(uint32_t, const SourceInfo &);
bool emitSetThisFieldUint64(uint32_t, const SourceInfo &);
bool emitSetThisFieldBool(uint32_t, const SourceInfo &);
bool emitSetThisFieldPtr(uint32_t, const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSetThisField(PrimType, uint32_t, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSetThisField(PrimType T0, uint32_t A0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSetThisFieldSint8(A0, I);
  case PT_Uint8:
    return emitSetThisFieldUint8(A0, I);
  case PT_Sint16:
    return emitSetThisFieldSint16(A0, I);
  case PT_Uint16:
    return emitSetThisFieldUint16(A0, I);
  case PT_Sint32:
    return emitSetThisFieldSint32(A0, I);
  case PT_Uint32:
    return emitSetThisFieldUint32(A0, I);
  case PT_Sint64:
    return emitSetThisFieldSint64(A0, I);
  case PT_Uint64:
    return emitSetThisFieldUint64(A0, I);
  case PT_Bool:
    return emitSetThisFieldBool(A0, I);
  case PT_Ptr:
    return emitSetThisFieldPtr(A0, I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSetThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldSint8, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldUint8, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldSint16, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldUint16, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldSint32, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldUint32, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldSint64, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldUint64, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldBool(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldBool, A0, L);
}
bool ByteCodeEmitter::emitSetThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  return emitOp<uint32_t>(OP_SetThisFieldPtr, A0, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSetThisFieldSint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Sint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldUint8(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Uint8>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldSint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Sint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldUint16(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Uint16>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldSint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Sint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldUint32(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Uint32>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldSint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Sint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldUint64(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Uint64>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldBool(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Bool>(S, OpPC, A0);
}
bool EvalEmitter::emitSetThisFieldPtr(uint32_t A0, const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SetThisField<PT_Ptr>(S, OpPC, A0);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_StoreSint8,
OP_StoreUint8,
OP_StoreSint16,
OP_StoreUint16,
OP_StoreSint32,
OP_StoreUint32,
OP_StoreSint64,
OP_StoreUint64,
OP_StoreBool,
OP_StorePtr,
#endif
#ifdef GET_INTERP
case OP_StoreSint8: {
  if (!Store<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreUint8: {
  if (!Store<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreSint16: {
  if (!Store<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreUint16: {
  if (!Store<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreSint32: {
  if (!Store<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreUint32: {
  if (!Store<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreSint64: {
  if (!Store<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreUint64: {
  if (!Store<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBool: {
  if (!Store<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_StorePtr: {
  if (!Store<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_StoreSint8:
  PrintName("StoreSint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreUint8:
  PrintName("StoreUint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreSint16:
  PrintName("StoreSint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreUint16:
  PrintName("StoreUint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreSint32:
  PrintName("StoreSint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreUint32:
  PrintName("StoreUint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreSint64:
  PrintName("StoreSint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreUint64:
  PrintName("StoreUint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreBool:
  PrintName("StoreBool");
  OS << "\t" << "\n";
  continue;
case OP_StorePtr:
  PrintName("StorePtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStoreSint8(const SourceInfo &);
bool emitStoreUint8(const SourceInfo &);
bool emitStoreSint16(const SourceInfo &);
bool emitStoreUint16(const SourceInfo &);
bool emitStoreSint32(const SourceInfo &);
bool emitStoreUint32(const SourceInfo &);
bool emitStoreSint64(const SourceInfo &);
bool emitStoreUint64(const SourceInfo &);
bool emitStoreBool(const SourceInfo &);
bool emitStorePtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStore(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitStore(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitStoreSint8(I);
  case PT_Uint8:
    return emitStoreUint8(I);
  case PT_Sint16:
    return emitStoreSint16(I);
  case PT_Uint16:
    return emitStoreUint16(I);
  case PT_Sint32:
    return emitStoreSint32(I);
  case PT_Uint32:
    return emitStoreUint32(I);
  case PT_Sint64:
    return emitStoreSint64(I);
  case PT_Uint64:
    return emitStoreUint64(I);
  case PT_Bool:
    return emitStoreBool(I);
  case PT_Ptr:
    return emitStorePtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitStoreSint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreSint8, L);
}
bool ByteCodeEmitter::emitStoreUint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreUint8, L);
}
bool ByteCodeEmitter::emitStoreSint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreSint16, L);
}
bool ByteCodeEmitter::emitStoreUint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreUint16, L);
}
bool ByteCodeEmitter::emitStoreSint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreSint32, L);
}
bool ByteCodeEmitter::emitStoreUint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreUint32, L);
}
bool ByteCodeEmitter::emitStoreSint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreSint64, L);
}
bool ByteCodeEmitter::emitStoreUint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreUint64, L);
}
bool ByteCodeEmitter::emitStoreBool(const SourceInfo &L) {
  return emitOp<>(OP_StoreBool, L);
}
bool ByteCodeEmitter::emitStorePtr(const SourceInfo &L) {
  return emitOp<>(OP_StorePtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitStoreSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitStoreUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitStoreSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitStoreUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitStoreSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitStoreUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitStoreSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitStoreUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitStoreBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitStorePtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Store<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_StoreBitFieldSint8,
OP_StoreBitFieldUint8,
OP_StoreBitFieldSint16,
OP_StoreBitFieldUint16,
OP_StoreBitFieldSint32,
OP_StoreBitFieldUint32,
OP_StoreBitFieldSint64,
OP_StoreBitFieldUint64,
OP_StoreBitFieldBool,
#endif
#ifdef GET_INTERP
case OP_StoreBitFieldSint8: {
  if (!StoreBitField<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldUint8: {
  if (!StoreBitField<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldSint16: {
  if (!StoreBitField<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldUint16: {
  if (!StoreBitField<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldSint32: {
  if (!StoreBitField<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldUint32: {
  if (!StoreBitField<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldSint64: {
  if (!StoreBitField<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldUint64: {
  if (!StoreBitField<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldBool: {
  if (!StoreBitField<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_StoreBitFieldSint8:
  PrintName("StoreBitFieldSint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldUint8:
  PrintName("StoreBitFieldUint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldSint16:
  PrintName("StoreBitFieldSint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldUint16:
  PrintName("StoreBitFieldUint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldSint32:
  PrintName("StoreBitFieldSint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldUint32:
  PrintName("StoreBitFieldUint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldSint64:
  PrintName("StoreBitFieldSint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldUint64:
  PrintName("StoreBitFieldUint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldBool:
  PrintName("StoreBitFieldBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStoreBitFieldSint8(const SourceInfo &);
bool emitStoreBitFieldUint8(const SourceInfo &);
bool emitStoreBitFieldSint16(const SourceInfo &);
bool emitStoreBitFieldUint16(const SourceInfo &);
bool emitStoreBitFieldSint32(const SourceInfo &);
bool emitStoreBitFieldUint32(const SourceInfo &);
bool emitStoreBitFieldSint64(const SourceInfo &);
bool emitStoreBitFieldUint64(const SourceInfo &);
bool emitStoreBitFieldBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStoreBitField(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitStoreBitField(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitStoreBitFieldSint8(I);
  case PT_Uint8:
    return emitStoreBitFieldUint8(I);
  case PT_Sint16:
    return emitStoreBitFieldSint16(I);
  case PT_Uint16:
    return emitStoreBitFieldUint16(I);
  case PT_Sint32:
    return emitStoreBitFieldSint32(I);
  case PT_Uint32:
    return emitStoreBitFieldUint32(I);
  case PT_Sint64:
    return emitStoreBitFieldSint64(I);
  case PT_Uint64:
    return emitStoreBitFieldUint64(I);
  case PT_Bool:
    return emitStoreBitFieldBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitStoreBitFieldSint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldSint8, L);
}
bool ByteCodeEmitter::emitStoreBitFieldUint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldUint8, L);
}
bool ByteCodeEmitter::emitStoreBitFieldSint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldSint16, L);
}
bool ByteCodeEmitter::emitStoreBitFieldUint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldUint16, L);
}
bool ByteCodeEmitter::emitStoreBitFieldSint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldSint32, L);
}
bool ByteCodeEmitter::emitStoreBitFieldUint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldUint32, L);
}
bool ByteCodeEmitter::emitStoreBitFieldSint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldSint64, L);
}
bool ByteCodeEmitter::emitStoreBitFieldUint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldUint64, L);
}
bool ByteCodeEmitter::emitStoreBitFieldBool(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitStoreBitFieldSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitField<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_StoreBitFieldPopSint8,
OP_StoreBitFieldPopUint8,
OP_StoreBitFieldPopSint16,
OP_StoreBitFieldPopUint16,
OP_StoreBitFieldPopSint32,
OP_StoreBitFieldPopUint32,
OP_StoreBitFieldPopSint64,
OP_StoreBitFieldPopUint64,
OP_StoreBitFieldPopBool,
#endif
#ifdef GET_INTERP
case OP_StoreBitFieldPopSint8: {
  if (!StoreBitFieldPop<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopUint8: {
  if (!StoreBitFieldPop<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopSint16: {
  if (!StoreBitFieldPop<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopUint16: {
  if (!StoreBitFieldPop<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopSint32: {
  if (!StoreBitFieldPop<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopUint32: {
  if (!StoreBitFieldPop<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopSint64: {
  if (!StoreBitFieldPop<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopUint64: {
  if (!StoreBitFieldPop<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_StoreBitFieldPopBool: {
  if (!StoreBitFieldPop<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_StoreBitFieldPopSint8:
  PrintName("StoreBitFieldPopSint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopUint8:
  PrintName("StoreBitFieldPopUint8");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopSint16:
  PrintName("StoreBitFieldPopSint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopUint16:
  PrintName("StoreBitFieldPopUint16");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopSint32:
  PrintName("StoreBitFieldPopSint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopUint32:
  PrintName("StoreBitFieldPopUint32");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopSint64:
  PrintName("StoreBitFieldPopSint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopUint64:
  PrintName("StoreBitFieldPopUint64");
  OS << "\t" << "\n";
  continue;
case OP_StoreBitFieldPopBool:
  PrintName("StoreBitFieldPopBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStoreBitFieldPopSint8(const SourceInfo &);
bool emitStoreBitFieldPopUint8(const SourceInfo &);
bool emitStoreBitFieldPopSint16(const SourceInfo &);
bool emitStoreBitFieldPopUint16(const SourceInfo &);
bool emitStoreBitFieldPopSint32(const SourceInfo &);
bool emitStoreBitFieldPopUint32(const SourceInfo &);
bool emitStoreBitFieldPopSint64(const SourceInfo &);
bool emitStoreBitFieldPopUint64(const SourceInfo &);
bool emitStoreBitFieldPopBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStoreBitFieldPop(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitStoreBitFieldPop(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitStoreBitFieldPopSint8(I);
  case PT_Uint8:
    return emitStoreBitFieldPopUint8(I);
  case PT_Sint16:
    return emitStoreBitFieldPopSint16(I);
  case PT_Uint16:
    return emitStoreBitFieldPopUint16(I);
  case PT_Sint32:
    return emitStoreBitFieldPopSint32(I);
  case PT_Uint32:
    return emitStoreBitFieldPopUint32(I);
  case PT_Sint64:
    return emitStoreBitFieldPopSint64(I);
  case PT_Uint64:
    return emitStoreBitFieldPopUint64(I);
  case PT_Bool:
    return emitStoreBitFieldPopBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitStoreBitFieldPopSint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopSint8, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopUint8(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopUint8, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopSint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopSint16, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopUint16(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopUint16, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopSint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopSint32, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopUint32(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopUint32, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopSint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopSint64, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopUint64(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopUint64, L);
}
bool ByteCodeEmitter::emitStoreBitFieldPopBool(const SourceInfo &L) {
  return emitOp<>(OP_StoreBitFieldPopBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitStoreBitFieldPopSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitStoreBitFieldPopBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StoreBitFieldPop<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_StorePopSint8,
OP_StorePopUint8,
OP_StorePopSint16,
OP_StorePopUint16,
OP_StorePopSint32,
OP_StorePopUint32,
OP_StorePopSint64,
OP_StorePopUint64,
OP_StorePopBool,
OP_StorePopPtr,
#endif
#ifdef GET_INTERP
case OP_StorePopSint8: {
  if (!StorePop<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopUint8: {
  if (!StorePop<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopSint16: {
  if (!StorePop<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopUint16: {
  if (!StorePop<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopSint32: {
  if (!StorePop<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopUint32: {
  if (!StorePop<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopSint64: {
  if (!StorePop<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopUint64: {
  if (!StorePop<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopBool: {
  if (!StorePop<PT_Bool>(S, OpPC))
    return false;
  continue;
}
case OP_StorePopPtr: {
  if (!StorePop<PT_Ptr>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_StorePopSint8:
  PrintName("StorePopSint8");
  OS << "\t" << "\n";
  continue;
case OP_StorePopUint8:
  PrintName("StorePopUint8");
  OS << "\t" << "\n";
  continue;
case OP_StorePopSint16:
  PrintName("StorePopSint16");
  OS << "\t" << "\n";
  continue;
case OP_StorePopUint16:
  PrintName("StorePopUint16");
  OS << "\t" << "\n";
  continue;
case OP_StorePopSint32:
  PrintName("StorePopSint32");
  OS << "\t" << "\n";
  continue;
case OP_StorePopUint32:
  PrintName("StorePopUint32");
  OS << "\t" << "\n";
  continue;
case OP_StorePopSint64:
  PrintName("StorePopSint64");
  OS << "\t" << "\n";
  continue;
case OP_StorePopUint64:
  PrintName("StorePopUint64");
  OS << "\t" << "\n";
  continue;
case OP_StorePopBool:
  PrintName("StorePopBool");
  OS << "\t" << "\n";
  continue;
case OP_StorePopPtr:
  PrintName("StorePopPtr");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStorePopSint8(const SourceInfo &);
bool emitStorePopUint8(const SourceInfo &);
bool emitStorePopSint16(const SourceInfo &);
bool emitStorePopUint16(const SourceInfo &);
bool emitStorePopSint32(const SourceInfo &);
bool emitStorePopUint32(const SourceInfo &);
bool emitStorePopSint64(const SourceInfo &);
bool emitStorePopUint64(const SourceInfo &);
bool emitStorePopBool(const SourceInfo &);
bool emitStorePopPtr(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitStorePop(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitStorePop(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitStorePopSint8(I);
  case PT_Uint8:
    return emitStorePopUint8(I);
  case PT_Sint16:
    return emitStorePopSint16(I);
  case PT_Uint16:
    return emitStorePopUint16(I);
  case PT_Sint32:
    return emitStorePopSint32(I);
  case PT_Uint32:
    return emitStorePopUint32(I);
  case PT_Sint64:
    return emitStorePopSint64(I);
  case PT_Uint64:
    return emitStorePopUint64(I);
  case PT_Bool:
    return emitStorePopBool(I);
  case PT_Ptr:
    return emitStorePopPtr(I);
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitStorePopSint8(const SourceInfo &L) {
  return emitOp<>(OP_StorePopSint8, L);
}
bool ByteCodeEmitter::emitStorePopUint8(const SourceInfo &L) {
  return emitOp<>(OP_StorePopUint8, L);
}
bool ByteCodeEmitter::emitStorePopSint16(const SourceInfo &L) {
  return emitOp<>(OP_StorePopSint16, L);
}
bool ByteCodeEmitter::emitStorePopUint16(const SourceInfo &L) {
  return emitOp<>(OP_StorePopUint16, L);
}
bool ByteCodeEmitter::emitStorePopSint32(const SourceInfo &L) {
  return emitOp<>(OP_StorePopSint32, L);
}
bool ByteCodeEmitter::emitStorePopUint32(const SourceInfo &L) {
  return emitOp<>(OP_StorePopUint32, L);
}
bool ByteCodeEmitter::emitStorePopSint64(const SourceInfo &L) {
  return emitOp<>(OP_StorePopSint64, L);
}
bool ByteCodeEmitter::emitStorePopUint64(const SourceInfo &L) {
  return emitOp<>(OP_StorePopUint64, L);
}
bool ByteCodeEmitter::emitStorePopBool(const SourceInfo &L) {
  return emitOp<>(OP_StorePopBool, L);
}
bool ByteCodeEmitter::emitStorePopPtr(const SourceInfo &L) {
  return emitOp<>(OP_StorePopPtr, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitStorePopSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitStorePopUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitStorePopSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitStorePopUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitStorePopSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitStorePopUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitStorePopSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitStorePopUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitStorePopBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Bool>(S, OpPC);
}
bool EvalEmitter::emitStorePopPtr(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return StorePop<PT_Ptr>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SubSint8,
OP_SubUint8,
OP_SubSint16,
OP_SubUint16,
OP_SubSint32,
OP_SubUint32,
OP_SubSint64,
OP_SubUint64,
OP_SubBool,
#endif
#ifdef GET_INTERP
case OP_SubSint8: {
  if (!Sub<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_SubUint8: {
  if (!Sub<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_SubSint16: {
  if (!Sub<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_SubUint16: {
  if (!Sub<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_SubSint32: {
  if (!Sub<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_SubUint32: {
  if (!Sub<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_SubSint64: {
  if (!Sub<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_SubUint64: {
  if (!Sub<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_SubBool: {
  if (!Sub<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SubSint8:
  PrintName("SubSint8");
  OS << "\t" << "\n";
  continue;
case OP_SubUint8:
  PrintName("SubUint8");
  OS << "\t" << "\n";
  continue;
case OP_SubSint16:
  PrintName("SubSint16");
  OS << "\t" << "\n";
  continue;
case OP_SubUint16:
  PrintName("SubUint16");
  OS << "\t" << "\n";
  continue;
case OP_SubSint32:
  PrintName("SubSint32");
  OS << "\t" << "\n";
  continue;
case OP_SubUint32:
  PrintName("SubUint32");
  OS << "\t" << "\n";
  continue;
case OP_SubSint64:
  PrintName("SubSint64");
  OS << "\t" << "\n";
  continue;
case OP_SubUint64:
  PrintName("SubUint64");
  OS << "\t" << "\n";
  continue;
case OP_SubBool:
  PrintName("SubBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSubSint8(const SourceInfo &);
bool emitSubUint8(const SourceInfo &);
bool emitSubSint16(const SourceInfo &);
bool emitSubUint16(const SourceInfo &);
bool emitSubSint32(const SourceInfo &);
bool emitSubUint32(const SourceInfo &);
bool emitSubSint64(const SourceInfo &);
bool emitSubUint64(const SourceInfo &);
bool emitSubBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSub(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSub(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSubSint8(I);
  case PT_Uint8:
    return emitSubUint8(I);
  case PT_Sint16:
    return emitSubSint16(I);
  case PT_Uint16:
    return emitSubUint16(I);
  case PT_Sint32:
    return emitSubSint32(I);
  case PT_Uint32:
    return emitSubUint32(I);
  case PT_Sint64:
    return emitSubSint64(I);
  case PT_Uint64:
    return emitSubUint64(I);
  case PT_Bool:
    return emitSubBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSubSint8(const SourceInfo &L) {
  return emitOp<>(OP_SubSint8, L);
}
bool ByteCodeEmitter::emitSubUint8(const SourceInfo &L) {
  return emitOp<>(OP_SubUint8, L);
}
bool ByteCodeEmitter::emitSubSint16(const SourceInfo &L) {
  return emitOp<>(OP_SubSint16, L);
}
bool ByteCodeEmitter::emitSubUint16(const SourceInfo &L) {
  return emitOp<>(OP_SubUint16, L);
}
bool ByteCodeEmitter::emitSubSint32(const SourceInfo &L) {
  return emitOp<>(OP_SubSint32, L);
}
bool ByteCodeEmitter::emitSubUint32(const SourceInfo &L) {
  return emitOp<>(OP_SubUint32, L);
}
bool ByteCodeEmitter::emitSubSint64(const SourceInfo &L) {
  return emitOp<>(OP_SubSint64, L);
}
bool ByteCodeEmitter::emitSubUint64(const SourceInfo &L) {
  return emitOp<>(OP_SubUint64, L);
}
bool ByteCodeEmitter::emitSubBool(const SourceInfo &L) {
  return emitOp<>(OP_SubBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSubSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitSubUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitSubSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitSubUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitSubSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitSubUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitSubSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitSubUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitSubBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Sub<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_SubOffsetSint8,
OP_SubOffsetUint8,
OP_SubOffsetSint16,
OP_SubOffsetUint16,
OP_SubOffsetSint32,
OP_SubOffsetUint32,
OP_SubOffsetSint64,
OP_SubOffsetUint64,
OP_SubOffsetBool,
#endif
#ifdef GET_INTERP
case OP_SubOffsetSint8: {
  if (!SubOffset<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetUint8: {
  if (!SubOffset<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetSint16: {
  if (!SubOffset<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetUint16: {
  if (!SubOffset<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetSint32: {
  if (!SubOffset<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetUint32: {
  if (!SubOffset<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetSint64: {
  if (!SubOffset<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetUint64: {
  if (!SubOffset<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_SubOffsetBool: {
  if (!SubOffset<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_SubOffsetSint8:
  PrintName("SubOffsetSint8");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetUint8:
  PrintName("SubOffsetUint8");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetSint16:
  PrintName("SubOffsetSint16");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetUint16:
  PrintName("SubOffsetUint16");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetSint32:
  PrintName("SubOffsetSint32");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetUint32:
  PrintName("SubOffsetUint32");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetSint64:
  PrintName("SubOffsetSint64");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetUint64:
  PrintName("SubOffsetUint64");
  OS << "\t" << "\n";
  continue;
case OP_SubOffsetBool:
  PrintName("SubOffsetBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSubOffsetSint8(const SourceInfo &);
bool emitSubOffsetUint8(const SourceInfo &);
bool emitSubOffsetSint16(const SourceInfo &);
bool emitSubOffsetUint16(const SourceInfo &);
bool emitSubOffsetSint32(const SourceInfo &);
bool emitSubOffsetUint32(const SourceInfo &);
bool emitSubOffsetSint64(const SourceInfo &);
bool emitSubOffsetUint64(const SourceInfo &);
bool emitSubOffsetBool(const SourceInfo &);
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitSubOffset(PrimType, const SourceInfo &I);
#endif
#if defined(GET_EVAL_IMPL) || defined(GET_LINK_IMPL)
bool
#if defined(GET_EVAL_IMPL)
EvalEmitter
#else
ByteCodeEmitter
#endif
::emitSubOffset(PrimType T0, const SourceInfo &I) {
  switch (T0) {
  case PT_Sint8:
    return emitSubOffsetSint8(I);
  case PT_Uint8:
    return emitSubOffsetUint8(I);
  case PT_Sint16:
    return emitSubOffsetSint16(I);
  case PT_Uint16:
    return emitSubOffsetUint16(I);
  case PT_Sint32:
    return emitSubOffsetSint32(I);
  case PT_Uint32:
    return emitSubOffsetUint32(I);
  case PT_Sint64:
    return emitSubOffsetSint64(I);
  case PT_Uint64:
    return emitSubOffsetUint64(I);
  case PT_Bool:
    return emitSubOffsetBool(I);
  default: llvm_unreachable("invalid type");
  }
  llvm_unreachable("invalid enum value");
}
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitSubOffsetSint8(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetSint8, L);
}
bool ByteCodeEmitter::emitSubOffsetUint8(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetUint8, L);
}
bool ByteCodeEmitter::emitSubOffsetSint16(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetSint16, L);
}
bool ByteCodeEmitter::emitSubOffsetUint16(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetUint16, L);
}
bool ByteCodeEmitter::emitSubOffsetSint32(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetSint32, L);
}
bool ByteCodeEmitter::emitSubOffsetUint32(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetUint32, L);
}
bool ByteCodeEmitter::emitSubOffsetSint64(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetSint64, L);
}
bool ByteCodeEmitter::emitSubOffsetUint64(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetUint64, L);
}
bool ByteCodeEmitter::emitSubOffsetBool(const SourceInfo &L) {
  return emitOp<>(OP_SubOffsetBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitSubOffsetSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitSubOffsetBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return SubOffset<PT_Bool>(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_This,
#endif
#ifdef GET_INTERP
case OP_This: {
  if (!This(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_This:
  PrintName("This");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitThis(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitThis(const SourceInfo &L) {
  return emitOp<>(OP_This, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitThis(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return This(S, OpPC);
}
#endif
#ifdef GET_OPCODE_NAMES
OP_ZeroSint8,
OP_ZeroUint8,
OP_ZeroSint16,
OP_ZeroUint16,
OP_ZeroSint32,
OP_ZeroUint32,
OP_ZeroSint64,
OP_ZeroUint64,
OP_ZeroBool,
#endif
#ifdef GET_INTERP
case OP_ZeroSint8: {
  if (!Zero<PT_Sint8>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroUint8: {
  if (!Zero<PT_Uint8>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroSint16: {
  if (!Zero<PT_Sint16>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroUint16: {
  if (!Zero<PT_Uint16>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroSint32: {
  if (!Zero<PT_Sint32>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroUint32: {
  if (!Zero<PT_Uint32>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroSint64: {
  if (!Zero<PT_Sint64>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroUint64: {
  if (!Zero<PT_Uint64>(S, OpPC))
    return false;
  continue;
}
case OP_ZeroBool: {
  if (!Zero<PT_Bool>(S, OpPC))
    return false;
  continue;
}
#endif
#ifdef GET_DISASM
case OP_ZeroSint8:
  PrintName("ZeroSint8");
  OS << "\t" << "\n";
  continue;
case OP_ZeroUint8:
  PrintName("ZeroUint8");
  OS << "\t" << "\n";
  continue;
case OP_ZeroSint16:
  PrintName("ZeroSint16");
  OS << "\t" << "\n";
  continue;
case OP_ZeroUint16:
  PrintName("ZeroUint16");
  OS << "\t" << "\n";
  continue;
case OP_ZeroSint32:
  PrintName("ZeroSint32");
  OS << "\t" << "\n";
  continue;
case OP_ZeroUint32:
  PrintName("ZeroUint32");
  OS << "\t" << "\n";
  continue;
case OP_ZeroSint64:
  PrintName("ZeroSint64");
  OS << "\t" << "\n";
  continue;
case OP_ZeroUint64:
  PrintName("ZeroUint64");
  OS << "\t" << "\n";
  continue;
case OP_ZeroBool:
  PrintName("ZeroBool");
  OS << "\t" << "\n";
  continue;
#endif
#if defined(GET_EVAL_PROTO) || defined(GET_LINK_PROTO)
bool emitZeroSint8(const SourceInfo &);
bool emitZeroUint8(const SourceInfo &);
bool emitZeroSint16(const SourceInfo &);
bool emitZeroUint16(const SourceInfo &);
bool emitZeroSint32(const SourceInfo &);
bool emitZeroUint32(const SourceInfo &);
bool emitZeroSint64(const SourceInfo &);
bool emitZeroUint64(const SourceInfo &);
bool emitZeroBool(const SourceInfo &);
#endif
#ifdef GET_LINK_IMPL
bool ByteCodeEmitter::emitZeroSint8(const SourceInfo &L) {
  return emitOp<>(OP_ZeroSint8, L);
}
bool ByteCodeEmitter::emitZeroUint8(const SourceInfo &L) {
  return emitOp<>(OP_ZeroUint8, L);
}
bool ByteCodeEmitter::emitZeroSint16(const SourceInfo &L) {
  return emitOp<>(OP_ZeroSint16, L);
}
bool ByteCodeEmitter::emitZeroUint16(const SourceInfo &L) {
  return emitOp<>(OP_ZeroUint16, L);
}
bool ByteCodeEmitter::emitZeroSint32(const SourceInfo &L) {
  return emitOp<>(OP_ZeroSint32, L);
}
bool ByteCodeEmitter::emitZeroUint32(const SourceInfo &L) {
  return emitOp<>(OP_ZeroUint32, L);
}
bool ByteCodeEmitter::emitZeroSint64(const SourceInfo &L) {
  return emitOp<>(OP_ZeroSint64, L);
}
bool ByteCodeEmitter::emitZeroUint64(const SourceInfo &L) {
  return emitOp<>(OP_ZeroUint64, L);
}
bool ByteCodeEmitter::emitZeroBool(const SourceInfo &L) {
  return emitOp<>(OP_ZeroBool, L);
}
#endif
#ifdef GET_EVAL_IMPL
bool EvalEmitter::emitZeroSint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Sint8>(S, OpPC);
}
bool EvalEmitter::emitZeroUint8(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Uint8>(S, OpPC);
}
bool EvalEmitter::emitZeroSint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Sint16>(S, OpPC);
}
bool EvalEmitter::emitZeroUint16(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Uint16>(S, OpPC);
}
bool EvalEmitter::emitZeroSint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Sint32>(S, OpPC);
}
bool EvalEmitter::emitZeroUint32(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Uint32>(S, OpPC);
}
bool EvalEmitter::emitZeroSint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Sint64>(S, OpPC);
}
bool EvalEmitter::emitZeroUint64(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Uint64>(S, OpPC);
}
bool EvalEmitter::emitZeroBool(const SourceInfo &L) {
  if (!isActive()) return true;
  CurrentSource = L;
  return Zero<PT_Bool>(S, OpPC);
}
#endif
