# AES-256 Implementation in C

This project demonstrates a simplified AES-256 encryption implementation written in C.

The purpose of this repository is educational and focuses on understanding the core AES transformations used in symmetric cryptography.

Features
- AES-256 block encryption
- ECB mode example
- Round transformations
  - SubBytes
  - ShiftRows
  - AddRoundKey
- Simple test program

Folder Structure

aes.c        AES encryption logic
aes.h        header file
main.c       example test program
Makefile     compilation instructions

Build Instructions

To compile the program:

gcc aes.c main.c -o aes_test

Run the program:

./aes_test

Output

The program encrypts a sample 16-byte block using AES-256 and prints the encrypted result.

Applications

AES encryption is widely used in:

- secure communication
- embedded security
- secure boot
- encrypted storage

Author

Janani T
Embedded Systems & Cryptography Developer
