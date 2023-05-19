#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x>5)
        printf("x>5\n");
    else
        printf("x<=5\n");
    
    if(x<=10)
        printf("x<=10\n");
    else
        printf("x>10\n");
    
    if(x<5)
        printf("x<5\n");
    else if(x<=10)
        printf("5<=x<=10");
    else
        printf("x>10");
        
        
        
    int x;
    scanf("%d",&x);
    if(x>=10)
        if(x>20)
            printf("x>20");
        else
            printf("10<=x<20");
    else
        printf("x<10");
}
