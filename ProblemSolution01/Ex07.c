#include<stdio.h>
int main(){
 int n, i;
 float sum = 0;
 printf("Insert integer n : ");
 scanf("%d", &n);
 for (i = n; i > 0; i--){
 if (i % 2 == 0) sum += -4.0f / (i * 2 - 1);
 else sum += 4.0f / (i * 2 - 1);
 }
 printf("End number is %d, pi is %f\n", n, sum);
 return 0;
}