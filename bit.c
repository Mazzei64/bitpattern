#include <stdio.h>
#include <string.h>
#include <math.h>
#include "bitpattern.h"

unsigned long int ParseLong(char* value);

int main (int argc, char** argv) {

    if(argc < 2 || argc > 3) {
        fprintf(stderr, "Error: One to two arguments are expected.\n");
        return -1;
    }
    int valor = 55;
     unsigned long int valor = 0;

    if(argc == 3) {

        short bittage = 0;
        if((bittage = ParseLong(argv[2])) == -1){
            fprintf(stderr, "Error: Numerical value expected.\n");
            return -1;
        }
        
        if(( valor = ParseLong(argv[1])) == -1) {
            fprintf(stderr, "Error: Numerical value expected.\n");
            return -1;
        }
        
        switch (bittage)
        {
            case 8:
                if(valor > 255) {
                    fprintf(stderr, "Error: A 8-bit type can only hold up to 255 of a integer value.\n");
                    return -1;
                }
                    printf("%lu:\n", valor);
                    printf(BYTE_TO_8_BIT_PATTERN"\n", BYTE_TO_BINARY8(CAST_REAL_TO_BYTE(valor)));
                return 0;
            case 16:
                if(valor > 65535) {
                    fprintf(stderr, "Error: A 16-bit type can only hold up to 65,535 of a integer value.\n");
                    return -1;
                }
                    printf("%lu:\n", valor);
                    printf(BYTE_TO_16_BIT_PATTERN"\n", BYTE_TO_BINARY16(CAST_REAL_TO_WORD(valor)));
                return 0;
            case 32:
                if(valor > 4294967295) {
                    fprintf(stderr, "Error: A 32-bit type can only hold up to 4,294,967,295 of a integer value.\n");
                    return -1;
                }
                    printf("%lu:\n", valor);
                    printf(BYTE_TO_32_BIT_PATTERN"\n", BYTE_TO_BINARY32(CAST_REAL_TO_DWORD(valor)));
                return 0;
            
            case 64:
                    printf("%lu:\n", valor);
                    printf(BYTE_TO_64_BIT_PATTERN"\n", BYTE_TO_BINARY64(CAST_REAL_TO_DWORD(valor)));
                return 0;

            default:
                fprintf(stderr, "Error: Bit representation of a data type is expected on the second argument (i.e, 8, 16, 32 or null).\n");
                return -1;
        }
    }
    
    if(( valor = ParseLong(argv[1])) == -1) {
        fprintf(stderr, "Error: Numerical value expected.\n");
        return -1;
    }

    printf("%lu:\n", valor);
    printf(BYTE_TO_32_BIT_PATTERN"\n", BYTE_TO_BINARY32(CAST_REAL_TO_DWORD(valor)));

    return 0;
}
unsigned long int ParseLong(char* value) {
    short len = strlen(value);
    unsigned long int result = 0;
    for (short i = 0; i < len; i++) {      
        switch (value[i])
        {
            case 0x30:
                result += pow(10, (len - i)) * 0;
                break;
            case 0x31:
                result += pow(10, (len - i)) * 1;
                break;
            case 0x32:
                result += pow(10, (len - i)) * 2;
                break;
            case 0x33:
                result += pow(10, (len - i)) * 3;
                break;
            case 0x34:
                result += pow(10, (len - i)) * 4;
                break;
            case 0x35:
                result += pow(10, (len - i)) * 5;
                break;
            case 0x36:
                result += pow(10, (len - i)) * 6;
                break;
            case 0x37:
                result += pow(10, (len - i)) * 7;
                break;
            case 0x38:
                result += pow(10, (len - i)) * 8;
                break;
            case 0x39:
                result += pow(10, (len - i)) * 9;
                break;
            default:
                return -1;
        }
    }
    return result/10;
}
