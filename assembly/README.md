## Hello World
nothing much

### How to build

32 bit:

```shell
$ nasm -f elf HelloWorld.asm
$ ld -s -m elf_i386 HelloWorld.o
```
64 bit:

```shell
$ nasm -f elf64 HelloWorld.asm
$ ld -s HelloWorld.o
```
