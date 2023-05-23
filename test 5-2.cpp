#include <iostream>

using namespace std;

int main()
{
    int a,b,sum;
    scanf("%d %d \n",&a,&b);
    scanf("%d",&sum);
    if(sum==a+b){
        printf("right");
    }
    else{
        printf("wrong");
    }

    return 0;
}
