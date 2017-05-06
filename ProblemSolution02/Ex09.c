#include<stdio.h>

int main(){
	int max, week;
	int sw = 0;
	printf("Enter number of days in month: ");
	scanf("%d", &max);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &week);
	for (int i = 1; i <= max; i++){
		while (week>1){
			printf(" \t");
			week--;
			sw++;
		}
		sw++;
		printf("%d\t", i);
		if (sw % 7 == 0) printf("\n");
	}
	return 0;
}