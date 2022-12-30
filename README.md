# td-ollvm

## Build enviroment
1. llvm14.0.6
2. xcode14.1
3. cmake
4. ninja

## How to build?

1. cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Release -DLLVM_CREATE_XCODE_TOOLCHAIN=ON  -DLLVM_INCLUDE_TESTS=Off -DLLVM_INCLUDE_EXAMPLES=Off -DLLVM_ENABLE_BACKTRACES=Off -DLLVM_INCLUDE_BENCHMARKS=OFF -DLLVM_BUILD_DOCS=OFF -DCMAKE_OSX_ARCHITECTURES="x86_64"  -DLLVM_TARGETS_TO_BUILD="host;AArch64" -DCMAKE_INSTALL_PREFIX="/Applications/Xcode.app/Contents/Developer/"  -DLLVM_ENABLE_PROJECTS="clang"  -DLLVM_ENABLE_NEW_PASS_MANAGER=OFF ../llvm
2. ninja -j 6
3. ninja  install-xcode-toolchain

## How to use?
1. select toolChain from Xcode preferences, Xcode-ToolChains-Xcode14.0.6
2. setting other C Flags , "-mllvm -fla"