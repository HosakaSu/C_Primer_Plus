#include <stdlib.h>
#include <stdio.h>

void smile(void);

int main(void)
{
    smile();
    smile();
    smile();
    printf("\r\n");
    smile();
    smile();
    printf("\r\n");
    smile();
    printf("\r\n");
    return 0;
}

void smile(void)
{
    printf("Smile! ");
}