#include <stdio.h>

void duplicar(int * a)
{
    *a *= 2;
}

int main()
{
    int a = 5;

    printf("Antes de duplicar a = %d\n", a);
    duplicar(&a);
    printf("Después de duplicar a = %d\n", a);
}