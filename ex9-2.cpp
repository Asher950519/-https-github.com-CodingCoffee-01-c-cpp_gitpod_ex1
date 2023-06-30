#include <iostream>
using namespace std;

int main(){
    char x[6]={'h','a','p','p','y','\0'};
    const int N=9;
    int a[N]={0};
    char b[N]="hello";
    int i;
    for(i=0;x[i]!='\0';i++){
        printf("%c ",x[i]);
    }
    printf("\n");
    cout<<"\nHello World\n";
    return 0;
}
