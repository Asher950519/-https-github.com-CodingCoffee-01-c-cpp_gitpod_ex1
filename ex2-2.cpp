#include <stdio.h>
int main()
{
    printf("Characters: %c %c \n",'a',65);
    printf("Decimals: %d %ld\n",1977,650000L);
    printf("Preceding with blanks: %10d \n",1977);
    printf("Preceding with zeros: %010d \n",1977);
    return 0;
}
