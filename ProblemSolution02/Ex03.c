#include <stdio.h>
#pragma warning(disable:4996)
int main(void){
	int i;
	int num;
	int odd = 0;
	int even = 0;
	for (i = 0; i<10; i++){
		printf("%d's number : ", i + 1);
		scanf("%d", &num);
		if (num % 2 == 0){
			even += num;
		}
		else{
			odd += num;
		}
	}
	if(even - odd > 0) printf("result : %d\n", even - odd);
	else printf("result : %d\n", odd - even);
	return 0;
}