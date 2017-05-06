#include<stdio.h>
int main(){
	int a = 0, b = 0, c = 0;
	int num1, num2, num3;
	printf("Insert 1st number : ");
	scanf("%d", &a);
	printf("Insert 2nd number : ");
	scanf("%d", &b);
	printf("Insert 3rd number : ");
	scanf("%d", &c);
	if (a>b){
		num1 = a;
		num2 = b;
	}
	else {
		num1 = b;
		num2 = a;
	}
	if (num1>c){
		num3 = c;
	}
	else{
		num3 = num1;
		num1 = c;
	}
	if (num1 < num2 + num3){
		printf("Triangular inequalty : Yes\n");
	}
	else{
		printf("Triangular inequalty : No\n");
	} return 0;
}