#include<stdio.h>
// int isPrime(int n){
//     for(int i=0; i<n/2; i++){
//         if(i%2==0){
//             printf("Not prime:");
//         }
//         else{
//             printf("Prime:");
//         }
//     }
//}

void f(int n){
    if(n==5){
        return;
    }
    n++;
    f(n);
    printf("%d recursion\n",n);
}
int main(){
    int x=0;
    f(x);
    return 0;
}