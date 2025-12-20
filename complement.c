#include <stdio.h>

void printBinary(int num, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int num;
    int bits = 8;  
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nBinary Representation (%d-bit): ", bits);
    printBinary(num, bits);

    
    int onesComp = ~num;
    printf("\n1's Complement: ");
    printBinary(onesComp, bits);

   
    int twosComp = onesComp + 1;
    printf("\n2's Complement: ");
    printBinary(twosComp, bits);

    return 0;
}