#include<stdio.h>

#define LOAD 1
#define ADD  2
#define SUB  3
#define MUL  4
#define HLT  0

int main() {

    int memory[] = {
        LOAD, 10,
        ADD, 20,
        SUB, 5,
        MUL, 2,
        HLT
    };

    int PC = 0;
    int IR = 0;
    int ACC = 0;
    int operand;

    printf("Fetch - Decode - Execute Cycle\n\n");

    while(1) {
        IR = memory[PC++];  // Fetch instruction
        printf("Fetched Instruction: %d\n", IR);

        if(IR == HLT) {
            printf("Program Halted.\nFinal ACC value = %d\n", ACC);
            break;
        }

        operand = memory[PC++];  // Fetch operand

        switch(IR) {
            case LOAD:
                ACC = operand;
                printf("Execute: LOAD -> ACC = %d\n\n", ACC);
                break;

            case ADD:
                ACC += operand;
                printf("Execute: ADD -> ACC = %d\n\n", ACC);
                break;

            case SUB:
                ACC -= operand;
                printf("Execute: SUB -> ACC = %d\n\n", ACC);
                break;

            case MUL:
                ACC *= operand;
                printf("Execute: MUL -> ACC = %d\n\n", ACC);
                break;

            default:
                printf("Unknown Instruction!\n");
                return 1;
        }
    }

    return 0;
}
