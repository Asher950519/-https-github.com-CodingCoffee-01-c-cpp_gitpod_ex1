//a121
#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        int count=0;
        for(int i=a;i<=b;i++){
            if(i==1){
               continue; 
            }
            int ok=1;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    ok=0;
                    break;
                }
            }
            count+=ok;
        }
        cout<<count<<"\n";
        
    }
    return 0;
}
