#ifndef AES_H
#define AES_H

#include <stdint.h>

#define AES_BLOCK_SIZE 16
#define AES_KEY_SIZE 32

void AES256_ECB_encrypt_block(uint8_t *input, uint8_t *key, uint8_t *output);

#endif
