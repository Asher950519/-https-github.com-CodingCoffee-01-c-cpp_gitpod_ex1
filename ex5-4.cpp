#include <iostream>

using namespace std;

int main()
{
    int i;
    int stud_num=45;
    for(i=0;i<stud_num;i++){
        switch(i%3){
            case 0:
            printf("%d. Hello World %d students \n",0,stud_num);
            break;
            case 1:
            printf("%d. Hello World %d students \n",1,stud_num);
            break;
            case 2:
            printf("%d. Hello World %d students \n",2,stud_num);
            break;
        }
    }
    return 0;
}
