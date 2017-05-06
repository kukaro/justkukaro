#include<stdio.h>
int main(){
 int a, b;
 int result = 1;

 printf("Insert int a : ");
 scanf("%d", &a);
 printf("Insert int b : ");
 scanf("%d", &b);

 for(int i=0;i<b;i++){
 result *= a;
 }

 printf("Result is %d\n",result);
 return 0;
}