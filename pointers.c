#include <stdio.h>

typedef struct _my_struct {
    void *data;
    struct _my_struct *next;
} myStruct;

void ft_test(myStruct **test)
{
    if(test == NULL)
        return ;
    myStruct *cur = *test;
    printf("The value of cur is %p\n", (void *)cur);
    return ;
}

int main()
{
    myStruct *test;
    test = NULL;
    printf("The value of test is %p\n", (void *)test);
    ft_test(&test);
}

