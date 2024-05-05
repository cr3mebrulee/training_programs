#include <stdio.h>

void *g(int *b)
{
    *b = 10;
}

int *f(int *a)
{
    *a = 8;
    return(a);
}

void h(int *c)
{
    *c = 15;
}

int main()
{
    int b = 4;
    int *a = &b;
    int **c = &a;
    
    //pass pointer а
    f(a);
    printf("%d\n", *a);
    //pass address of b
    g(&b);
    printf("%d\n", b);
    //pass pointer to a
    h(*c);
    printf("%d\n", **c);
    printf("%d\n", *a);
    printf("%d\n", b);
}
