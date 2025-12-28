#include <stdio.h>

int main() {
    int n, i, cycle;

    printf("Enter number of instructions: ");
    scanf("%d", &n);

    printf("\nInstruction Pipeline Simulation\n\n");


    int total_cycles = n + 3;

    for (cycle = 1; cycle <= total_cycles; cycle++) {
        printf("Cycle %d:\n", cycle);

        for (i = 1; i <= n; i++) {
            if (cycle == i) {
                printf("  Instruction %d -> Fetch\n", i);
            } else if (cycle == i + 1) {
                printf("  Instruction %d -> Decode\n", i);
            } else if (cycle == i + 2) {
                printf("  Instruction %d -> Execute\n", i);
            } else if (cycle == i + 3) {
                printf("  Instruction %d -> Write Back\n", i);
            }
        }
        printf("\n");
    }

    return 0;
}
