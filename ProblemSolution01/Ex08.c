#include<stdio.h>
int main(){
 int num;
 int sum = 0;
 for (int i = 1; i <= 10; i++){
 printf("%d's num : ", i);
 scanf("%d",&num);
 sum += num;
 printf("%d's avg :%g\n", i, (float)sum / i);
 }
 return 0;
}