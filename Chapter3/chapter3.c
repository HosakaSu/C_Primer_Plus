#include <stdio.h>
// int main(void)
// {
//     int i = 2147483647;
//     unsigned int j = 4294967295;

//     printf("%d %d %d \n", i, i + 1, i + 2);
//     printf("%u %u %u \n", j , j +1 , j+2);
    
//     return 0;
// }
// int main (void)
// {
//     unsigned int un = 3000000000;
//     short end = 200;
//     long big = 65537;
//     long long verybig = 12345678908642;

//     printf("un = %u and not %d\n", un ,un );
//     printf("end = %hd and %d\n",end ,end);
//     printf("big = %ld and not %hd\n", big, big);
//     printf("verybig = %lld and not %ld\n", verybig, verybig);
//     return 0;
// }
int main(void)
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
    return 0;
}