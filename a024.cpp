//a024
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0 && b!=0){
        if(a>=b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    printf("%d",b);

    return 0;
}
