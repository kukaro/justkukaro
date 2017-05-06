#include<stdio.h>
int main(){
 int n;
 int m=1;
 float sum = 0.0f;\
 printf("Insert integer n : ");
 scanf("%d", &n);
 sum += 1.0f / m;
 for (int i = 2; i <= n; i++){
 m *= i;
 sum += 1.0f / m;
 }
 printf("End number is %d, Sigma of 1/(n!) is %f\n", n, sum);
 return 0;
}