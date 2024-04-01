#! /bin/sh

./makeall clean && ./makeall
qemu-system-arm -M raspi0 -bios sample/45-ENEE447Project3/kernel.img