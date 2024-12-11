#include <stdio.h>

int main()
{
    double pi = 4.0; 
    double term = 1.0; 
    int sign = -1; 
    int x; 

    for (x = 1; ; x++) {
        term += 2.0; 
        pi += sign * (4.0 / term); 
        sign *= -1; 

        if (fabs(pi - 3.14159) < 0.000005) {
            break;
        }
    }

    printf("Calculated PI = %.5f\n", pi);
    printf("Minimum iterations (x) = %d\n", x);
    return 0;
}
