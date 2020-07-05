#include <stdio.h>

int main ()
{
    int num;
    int *pi = &num;

    num = 0;
    pi = num;


    return 0;
}