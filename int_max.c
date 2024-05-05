#include <stdio.h>

int main() 
{
    int n = 1;
    while(n>0)
    {
     n=n<<1;
    }
    int int_min = n;
    int int_max = -(n+1);
    printf("int_min is: %d\n",int_min);
    printf("int_max is: %d\n", int_max);

    return 0;
}
