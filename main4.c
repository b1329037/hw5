#include <stdio.h>

int main()
{
    int i = 12345;
    int thousands = (i / 1000) % 10;
    int units = i % 10; 
    int middle = (i / 10) % 1000; 
    int ten_thousands = i / 10000; 

    int new_i = ten_thousands * 10000 + units * 1000 + middle * 10 + thousands;

    printf("Original number: %d\n", i);
    printf("Modified number: %d\n", new_i);

    return 0;
}
