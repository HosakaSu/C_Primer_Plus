#include <stdio.h>

int main(void)
{
    char a;
    printf("请输入一个ascii字符\r\n");
    scanf("%c", &a);
    printf("the code for %c is %d\r\n", a, a);
    return 0;
}