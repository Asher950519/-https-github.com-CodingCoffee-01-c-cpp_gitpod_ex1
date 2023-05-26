//a058
#include <iostream>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        if(num%3==0){
            a+=1;
        }else if(num%3==1){
            b+=1;
        }else if(num%3==2){
            c+=1;
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
