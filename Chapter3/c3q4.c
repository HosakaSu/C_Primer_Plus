#include <stdio.h>

int main(void)
{
    float a;
    printf("input a float-point number:\n");
    scanf("%f",&a);
    printf("fixed-pointed natation:%f\r\n", a);
    printf("expoential notation:%e\r\n", a);
    printf("p notation is %a\r\n", a);
    printf("P notation is %A", a);
    return 0;
}