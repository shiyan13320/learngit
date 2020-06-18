#include <stdio.h>
#include <stdlib.h>
#define MAX 25

char g_helloword[MAX];

void functiona(int x)
{
    printf("%d\n", x);
}

int main()
{
    printf("Please input string:\n");
    scanf("%s",g_helloword);
    printf("%s",g_helloword);

    functiona(5);

    return 0;
}
