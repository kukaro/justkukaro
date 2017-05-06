#include<stdio.h>
int main(){
 int num;
 int res;
 int a0,a1;
 printf("Insert num : ");
 scanf("%d", &num);
 a0 = 1;
 a1 = 1;
 for(int i=3;i<=num;i++){
 res = a0 + a1;
 a0 = a1;
 a1 = res;
 }
 printf("%d's fibonacci number is %d\n", num, res);
 return 0;
}