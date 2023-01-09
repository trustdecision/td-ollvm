add_llvm_component_library(LLVMObfuscation
  CryptoUtils.cpp
  Utils.cpp
  Flattening.cpp
  Substitution.cpp
  BogusControlFlow.cpp
  StringObfuscation.cpp
  SplitBasicBlocks.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms/Obfuscation

  DEPENDS
  intrinsics_gen

)
