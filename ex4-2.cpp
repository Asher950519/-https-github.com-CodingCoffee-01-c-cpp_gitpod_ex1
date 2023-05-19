#include <iostream>

using namespace std;

int main(){
    int r; //半徑
    scanf("%d",&r);
    if (r>=0){
        printf("Area=%f \n",r*r*3.14);
        printf("Length=%f \n",r*2*3.14);
    }
    else
        printf("雞掰 \n");
  
  
        
    int y;  //閏年判斷
    scanf("%d",&y);
    if (y%4==0 && y%100!=0)
        printf("Yes! It's a leap year.\n");
    else if (y%400==0) 
        printf("Yes! It's a leap year.\n");
    else
        printf("No. It's a normal year.\n");


        
    int y1,m; // 年月天數判斷(bug)
    scanf("%d %d",&y1,&m);
    if (y1%4==0 && y1%100!=0)
        if(m==2)
            printf("29");
    else if (y1%400==0)
        if(m==2)
            printf("29");
    else 
        if(m==2)
            printf("28");
        else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("31");
        else if (m==4 || m==6 || m==9 || m==11)
            printf("30");
        else
            printf("Error");
        
    
}
