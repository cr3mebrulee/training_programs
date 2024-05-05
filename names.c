#include <stdio.h>

int main()
{
    char *names[] = {"Miller", "John", "Scott"};
    printf("%p\n", &(*(*(names + 1) + 2)));
    printf("%c\n", *(*(names + 1) + 2));
    printf("%c\n", names[1][2]);
    return(0);
}
