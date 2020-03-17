[WiX Tutorial Ja](https://wix-tutorial-ja.github.io/index.html)の[1. ソフトウェア・パッケージ](https://wix-tutorial-ja.github.io/ch01/01-the-software-package.html)にある[UUID生成プログラム](https://www.firegiant.com/system/files/samples/uuidgen.c)を MinGW gcc でビルドできるよう、少し修正しただけのものです。

```
set PATH=%PATH%;C:\MinGW\bin
gcc uuidgen.c -o uuidgen.exe -lole32
```
