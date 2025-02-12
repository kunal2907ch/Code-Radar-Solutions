#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    // The MSB in a 32-bit integer can be checked by comparing with 0x80000000
    if (num & 0x80000000) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}