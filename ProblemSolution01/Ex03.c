#include<stdio.h>
int main(){
 int n;
 float sum = 0.0f;
 printf("Insert integer n : ");
 scanf("%d",&n);
 for (int i = 1; i <= n; i++){
 sum += 1.0f / i;
 }
 printf("End number is %d, Sigma of 1/n is %f\n", n, sum);
 return 0;
}