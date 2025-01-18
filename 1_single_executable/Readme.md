# Hello World

This is the simplest usage of Swift and CMake, building a single swift
executable.

## Build Instructions

### macOS and Linux:

```sh
$ mkdir build && cd build
$ cmake -G 'Ninja' ../
$ ninja hello
$ ./hello
Hello, world!
```

## Build Results

Building this project results in a single executable, `hello` in the build
directory.

VS Code SnackBar内容だけどよくわからない

CMake Tools の一部のステータスバーオプションが、CMake ツール サイドバーのプロジェクト状態スビューに移動されました。設定の'cmake.options プロパティを使用してビューをカスタマイズできます。

Source: CMake ...
CMake オプションの可視性の構成

project(hello LANGUAGES Swift)
add_executable(hello hello.swift)
２行だけ