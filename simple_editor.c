#include <stdio.h>
#define MAX 100
#define LEN 80
#include <string.h>

char text[MAX][LEN];

/* A very simple text editor. */
int main(void)
{
    int t, i, j;

    for (t = 0; t < MAX; t++)
    {
        printf("%d: ", t);
        if (fgets(text[t], LEN, stdin) == NULL || text[t][0] == '\n')
            break; /* quit on blank line or EOF */
        text[t][strcspn(text[t], "\n")] = '\0'; /* remove newline character */
    }

    /* Display the text one character at a time */
    for (i = 0; i < t; i++)
    {
        for (j = 0; text[i][j] != '\0'; j++)
            printf("%c", text[i][j]);
        printf("%c", '\n');
    }

    return 0;
}
