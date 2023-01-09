<p align="center">
  <a href="https://www.trustdecision.com/deviceFingerprint" >
    <picture>
      <source media="(prefers-color-scheme: dark)" srcset="images/logo_light.png" />
      <source media="(prefers-color-scheme: light)" srcset="images/logo_dark.png" />
      <img src="images/logo_dark.png" alt="trustdevice logo" width="729px" height="67px"/>    </picture>
  </a>
</p>



# td-ollvm

td-olvm is a reinforcement confusion project, which is used to protect the security of TrustDevice. 
After a period of internal use, we decided to open source to everyone. 
In the future, every update and adaptation of llvm and clang will be handled in a timely manner. We hope you can pay attention to this project. Your attention is our motivation for updating.

## Installation

### Requirement

Please ensure that the following environments have been installed.

+ [Xcode 14.1](https://download.developer.apple.com/Developer_Tools/Xcode_14.2/Xcode_14.2.xip)
+ [cmake](https://cmake.org/download/)
+ [ninja](https://ninja-build.org/)

### Build

+ Download the respoitory and create a new build directory
```cmake
$ git clone https://github.com/trustdecision/td-ollvm.git && cd td-ollvm
$ mkdir build && cd build
```
+ Use cmake to build llvm
```cmake
$ cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Release -DLLVM_CREATE_XCODE_TOOLCHAIN=ON  -DLLVM_INCLUDE_TESTS=Off -DLLVM_INCLUDE_EXAMPLES=Off -DLLVM_ENABLE_BACKTRACES=Off -DLLVM_INCLUDE_BENCHMARKS=OFF -DLLVM_BUILD_DOCS=OFF -DCMAKE_OSX_ARCHITECTURES="x86_64"  -DLLVM_TARGETS_TO_BUILD="host;AArch64" -DCMAKE_INSTALL_PREFIX="/Applications/Xcode.app/Contents/Developer/"  -DLLVM_ENABLE_PROJECTS="clang"  -DLLVM_ENABLE_NEW_PASS_MANAGER=OFF ../llvm
```

+ Use ninja to build xcode-toolchain
```cmake
$ ninja -j 6
```
+ Install toolchains to Xcode
```cmake
$ ninja install-xcode-toolchain
```

### Usage
If you want to use toolchains for Xcode, please make the following configuration in Xcode :
```cmake
Xcode -> Toolchains -> org.llvm.14.0.6
```
## Issues

Please use GitHub [Issues](https://github.com/trustdecision/td-ollvm/issues) to submit bugs or Discussions to ask questions.

## License
This library is MIT licensed. Copyright trustdecision, Inc. 2022