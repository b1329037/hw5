#include <stdio.h>

int main()
{
    for (int num = 1; num <= 81; num++) {
        int i = (num - 1) / 9 + 1;
        int j = (num - 1) % 9 + 1; 
        printf("%d x %d = %d\n", i, j, i * j);
        if (j == 9) {
            printf("\n"); 
        }
    }
    return 0;
}
