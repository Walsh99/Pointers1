#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};
    int* address = vector;
    printf ("Address[0] = %d\n", *(address));
    printf ("Address[1] = %d\n", *(address+1));
    printf ("Address[2] = %d\n", *(address+2));
}