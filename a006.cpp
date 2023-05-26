*******************************************************************************/
//a006
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,x1,x2,x;
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c>0){
        x1=(-b+sqrt((b*b-4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b-4*a*c)))/(2*a);
        printf("Two different roots x1=%d , x2=%d",x1,x2);
    }else if(b*b-4*a*c==0){
        x=-b/(2*a);
        printf("Two same roots x=%d",x);
    }else{
        printf("No real root");
    }

    return 0;
}
