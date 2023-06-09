#include <iostream>
using namespace std;

int main()
{
    int a[4],i,min;
    for(i=0;i<4;i++){
       scanf("%d",&a[i]); 
    }
    
    min=a[0];
    for(i=0;i<3;i++){
        if(a[i+1]<min){
            min=a[i+1];
        }
    }
    printf("%d",min);
    return 0;
}
