#include<stdio.h>

int main() {
	int y1, m1, d1;
	int y2, m2, d2;
	printf("1 : year month day : ");
	scanf("%d %d %d", &y1, &m1, &d1);
	printf("2 : year month day : ");
	scanf("%d %d %d", &y2, &m2, &d2);
	if (y1 > y2) {
		printf("1\n");
	}
	else if (y2 > y1) {
		printf("-1\n");
	}
	else {
		if (m1 > m2) {
			printf("1\n");
		}
		else if (m2 > m1) {
			printf("-1\n");
		}
		else {
			if (d1 > d2) {
				printf("1\n");
			}
			else if (d2 > d1) {
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
	} return 0;
}