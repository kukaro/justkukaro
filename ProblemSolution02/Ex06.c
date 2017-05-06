#include<stdio.h>

int main() {
	int m1, M1;
	int m2, M2;
	int sw;

	printf("Insert 1st range (min) : ");
	scanf("%d", &m1);
	printf("Insert 1st range (max) : ");
	scanf("%d", &M1);
	printf("Insert 2nd range (min) : ");
	scanf("%d", &m2);
	printf("Insert 2nd range (max) : ");
	scanf("%d", &M2);
	if (m2 > M2 || m1 > M1) printf("Input Error\n");
	else if (m2 <= M1 && m1 <= M2) printf("Yes\n");
	else printf("No\n");
	return 0;
}