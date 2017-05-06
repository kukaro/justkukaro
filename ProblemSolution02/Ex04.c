#include<stdio.h>

int main(){
	int num;
	int max;
	int min;
	int i = 0;
	printf("%d : Insert Number : ", i + 1);
	scanf("%d", &num);
	max = num;
	min = num;
	printf("%d : max - min = %d\n", i + 1, max - min);
	for (i = 1; i<10; i++){
		printf("%d : Insert Number : ", i + 1);
		scanf("%d", &num);
		if (num>max) max = num;
		if (num<min) min = num;
		printf("%d : max - min = %d\n", i + 1, max - min);
	} return 0;
}
