#include <stdio.h>
#pragma warning(disable:4996)
int main(void){
	int a, b, c;
	int tmp;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b){
	}
	else{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b <= c){
	}
	else{
		tmp = b;
		b = c;
		c = tmp;
	}
	if (a <= b){
	}
	else{
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
