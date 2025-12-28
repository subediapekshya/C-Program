#include <stdio.h>

int main() {
    int n, i, cycle;

    printf("Enter number of data items: ");
    scanf("%d", &n);

    printf("\nArithmetic Pipeline Simulation\n\n");

    int total_cycles = n + 3; 

    for (cycle = 1; cycle <= total_cycles; cycle++) {
        printf("Cycle %d:\n", cycle);

        for (i = 1; i <= n; i++) {
            if (cycle == i) {
                printf("  Data %d -> Fetch Operands\n", i);
            } else if (cycle == i + 1) {
                printf("  Data %d -> Multiply\n", i);
            } else if (cycle == i + 2) {
                printf("  Data %d -> Add\n", i);
            } else if (cycle == i + 3) {
                printf("  Data %d -> Store Result\n", i);
            }
        }
        printf("\n");
    }

    return 0;
}
