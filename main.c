#include <stdio.h>
#include <stdint.h>
#include "aes.h"

int main()
{
    uint8_t key[32] = {0};
    uint8_t input[16] = {0};
    uint8_t output[16];

    AES256_ECB_encrypt_block(input,key,output);

    printf("Encrypted block:\n");

    for(int i=0;i<16;i++)
        printf("%02x ",output[i]);

    printf("\n");

    return 0;
}
