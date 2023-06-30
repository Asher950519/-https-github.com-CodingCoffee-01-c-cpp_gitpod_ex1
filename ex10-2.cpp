#include <stdio.h>
void display(int* age1, int* age2){
    int* a;
    printf("%d\n",*(age1-1));
    printf("%d\n",*age1);
    printf("%d\n",*(age1+1));
    printf("%d\n",*(age1+2));
    a=age1-1;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
}

int main(){
    int ageArray[]={2,8,4,12};
    display(&ageArray[1], &ageArray[3]);

    return 0;
}
