# AES-256 Implementation in C

This repository contains a simple educational implementation of AES-256 encryption in C.

The goal of this project is to demonstrate the basic internal transformations of the
Advanced Encryption Standard (AES) used in symmetric cryptography.

Features

- AES-256 block encryption
- ECB mode example
- Core AES round transformations
  - SubBytes
  - ShiftRows
  - AddRoundKey
- Simple test program

Folder Structure

aes.c        AES encryption logic
aes.h        header definitions
main.c       example test program
Makefile     build instructions

Build

Compile using GCC:

gcc aes.c main.c -o aes_test

Run:

./aes_test

Output

The program encrypts a sample 16-byte block and prints the encrypted output.

Applications

AES encryption is used in:

- Secure communication protocols
- Embedded system security
- Secure boot systems
- Disk encryption

Author

Janani T  
Embedded Systems & Cryptography Developer
