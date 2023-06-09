#include <iostream>
using namespace std;

int main()
{
    int a[10],i,cntp=0,cntn=0,zero=0;
    for(i=0;i<10;i++){
       scanf("%d",&a[i]); 
    }
    
    for(i=0;i<10;i++){
        if(a[i]>0){
            cntp+=1;
        }else if(a[i]<0){
            cntn+=1;
        }else{
            zero+=1;
        }
    }
    printf("%d %d %d",cntp,cntn,zero);
    return 0;
}
