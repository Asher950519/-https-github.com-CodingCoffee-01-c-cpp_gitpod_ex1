#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d; //假設相異四數
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b && a<c && a<d){
        printf("%d",a);
    }else if(b<a && b<c && b<d){
        printf("%d",b);
    }else if(c<a && c<b && c<d){
        printf("%d",c);
    }else if(d<a && d<b && d<c){
        printf("%d",d);
    }
    

    return 0;
}
