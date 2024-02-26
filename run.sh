#! /bin/sh

./makeall clean && ./makeall
qemu-system-arm -M raspi0 -bios sample/44-ENEE447Project2/kernel.img

