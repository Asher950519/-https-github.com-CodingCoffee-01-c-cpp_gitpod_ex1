#include <iostream>
using namespace std;

int timing(int C){
    return 1.8*C+32;
}

int main()
{
    int C;
    scanf("%d",&C);
    printf("F=%d",timing(C));

    return 0;
}
