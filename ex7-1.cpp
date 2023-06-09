#include <iostream>
using namespace std;
#if 1
int f(int n){
    if(n<=1){
        return 1;
    }else{
        return n*f(n-1);
    }
}
#else
int f(int n){
    int val=1;
    int i;
    printf("this is loop form\n");
    for(i=2;i<=n;i++){
        val=val*i;
    }
    return val;
}
#endif
int main()
{
    cout<<"5! = "<<f(5)<<endl;
    return 0;
}
