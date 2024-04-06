// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     int fact=1;  
//       for(int i=1; i<=n; i++){
//         fact=fact*i;
//       }
//       printf("%d\n",fact);
//       return 0;
// }




#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
         fact=fact*i;
      }
      printf("%d",fact);
      return fact;
}
int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    factorial(n);
    return 0;
}