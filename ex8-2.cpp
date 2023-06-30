#include <iostream>
using namespace std;

int area(int l,int w){
    return l*w;
}

int main()
{
    int l,w;
    scanf("%d %d",&l,&w);
    printf("area=%d",area(l,w));

    return 0;
}
