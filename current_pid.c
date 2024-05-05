#include <unistd.h>
#include <stdio.h>

int main(void)
{
    pid_t process_id = getpid();
    printf("The process ID is: %d\n", process_id);

    return(0);
}
