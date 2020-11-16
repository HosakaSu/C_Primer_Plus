#include <stdlib.h>
#include <stdio.h>


void one_three(void);
void two(void);

int main(void)
{
    printf("starting now\r\n");
    one_three();
    printf("done!\r\n");
    return 0;
}

void two(void)
{
    printf("two\r\n");
}

void one_three(void)
{
    printf("one");
    two();
    printf("three\r\n");
}