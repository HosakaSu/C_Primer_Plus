#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    u_int16_t age;
    printf("please input age\r\n");
    age = getchar();
    printf("your age day count is %d days.\r\n", age*365);
    return 0;
}