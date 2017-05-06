#include <stdio.h>

void swap(int *a, int *b);

int main() {
	int tmp;
	int l1p1x, l1p1y;
	int l1p2x, l1p2y;
	int l2p1x, l2p1y;
	int l2p2x, l2p2y;

	while (1) {
		printf("Insert 1st line 1st Point X : ");
		scanf("%d", &l1p1x);
		printf("Insert 1st line 1st Point Y : ");
		scanf("%d", &l1p1y);
		printf("Insert 1st line 2nd Point X : ");
		scanf("%d", &l1p2x);
		printf("Insert 1st line 2nd Point Y : ");
		scanf("%d", &l1p2y);
		printf("Insert 2nd line 1st Point X : ");
		scanf("%d", &l2p1x);
		printf("Insert 2nd line 1st Point Y : ");
		scanf("%d", &l2p1y);
		printf("Insert 2nd line 2nd Point X : ");
		scanf("%d", &l2p2x);
		printf("Insert 2nd line 2nd Point Y : ");
		scanf("%d", &l2p2y);

		if (l1p1x == l1p2x && l2p1x == l2p2x && l1p1x == l2p1x) {
			if (l1p1y > l1p2y) swap(&l1p1y, &l1p2y);
			if (l2p1y > l2p2y) swap(&l2p1y, &l2p2y);
			if (l1p1y <= l2p1y && l1p1y <= l2p2y &&  l2p2y <= l1p2y) {
				printf("Yes\n");
				continue;
			}
			if (l2p1y <= l1p1y && l2p1y <= l1p2y &&  l1p2y <= l2p2y) {
				printf("Yes\n");
				continue;
			}
			if (l2p1y >= l1p1y && l2p1y <= l1p2y) {
				printf("Yes\n");
				continue;
			}
			else {
				printf("No\n");
				continue;
			}
		}
		if (l1p1y == l1p2y && l2p1y == l2p2y && l1p1y == l2p1y) {
			if (l1p1x > l1p2x) swap(&l1p1x, &l1p2x);
			if (l2p1x > l2p2x) swap(&l2p1x, &l2p2x);
			if (l1p1x <= l2p1x && l1p1x <= l2p2x &&  l2p2x <= l1p2x) {
				printf("Yes\n");
				continue;
			}
			if (l2p1x <= l1p1x && l2p1x <= l1p2x &&  l1p2x <= l2p2x) {
				printf("Yes\n");
				continue;
			}
			if (l2p1x >= l1p1x && l2p1x <= l1p2x) {
				printf("Yes\n");
				continue;
			}
			else {
				printf("No\n");
				continue;
			}
		}

		if (l1p1x != l1p2x) {
			swap(&l1p1x, &l2p1x);
			swap(&l1p1y, &l2p1y);
			swap(&l1p2x, &l2p2x);
			swap(&l1p2y, &l2p2y);
		}
		if(!((l1p1x == l1p2x || l1p1y==l1p2y) && (l2p1x == l2p2x || l2p1y == l2p2y))){
			printf("Input error\n");
			continue;
		}
		if (l1p1y > l1p2y) swap(&l1p1y, &l1p2y);
		if (l2p1x > l2p2x) swap(&l2p1x, &l2p2x);
		if (l2p1x <= l1p1x && l2p2x >= l1p1x) {
			if (l1p1y <= l2p1y && l1p2y >= l2p1y) {
				printf("Yes\n");
				continue;
			}
			else {
				printf("No\n");
				continue;
			}
		}
		else {
			printf("No\n");
			continue;
		}
	}
	return 0;
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}