#! /bin/sh

 ./makeall clean && ./makeall
qemu-system-arm -M raspi0 -bios sample/46-ENEE447Project4/kernel.img
