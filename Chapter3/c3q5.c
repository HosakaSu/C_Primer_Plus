#include <stdio.h>

int main(void)
{
    float a = 3.156e7;
    int b = 0;
    printf("input your age\r\n");
    scanf("%d", &b);
    printf("you have lived for %f seconds\r\n", a*b);
    return 0;
}