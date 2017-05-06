#include<stdio.h>
int main(){
 int num;
 printf("Insert Count : ");
 scanf("%d", &num);
 for (int i = num / 2; i > 0; i = i / 2){
 printf("hello\n");
 }
 return 0;
}