#include <iostream>
using namespace std;
int main(){
    int a[10],i;
    float sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        //printf("a[%d]=%d\n",i,a[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("av = %.1f",sum/10);
    return 0;
}
