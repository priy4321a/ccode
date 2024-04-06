#include<stdio.h>
int number(int a,int b){
    for(int i=a; i<=b; i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
    }
     
}
int main(){
    int x=1;
    int y=10;
    number(x,y);
    return 0;
}