#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
typedef struct _tagPoint{
	int x;
	int y;
} Point;
Point* newPoint(int x, int y) {
	Point* rPoint = (Point*)malloc(sizeof(Point));
	rPoint->x = x;
	rPoint->y = y;
	return rPoint;
}
int main() {
	Point* p[4];
	Point tmp = { 0, 0 };
	char result[10];
	while (1) {
		for (int i = 1; i <= 4; i++) {
			printf("Insert %d's Point X : ", i);
			scanf("%d", &tmp.x);
			printf("Insert %d's Point Y : ", i);
			scanf("%d", &tmp.y);
			p[i - 1] = newPoint(tmp.x, tmp.y);
		}
		if (p[0]->y == p[1]->y && p[0]->x == p[1]->x) {
			strcpy(result, "No");
		}
		else if (p[0]->y == p[1]->y) {
			if (p[1]->x != p[2]->x) {
				strcpy(result, "No");
			}
			else if (p[2]->y != p[3]->y) {
				strcpy(result, "No");
			}
			else if (p[3]->x != p[0]->x) {
				strcpy(result, "No");
			}
			else {
				strcpy(result, "Yes");
			}
		}
		else if (p[0]->x == p[1]->x) {
			if (p[1]->y != p[2]->y) {
				strcpy(result, "No");
			}
			else if (p[2]->x != p[3]->x) {
				strcpy(result, "No");
			}
			else if (p[3]->y != p[0]->y) {
				strcpy(result, "No");
			}
			else {
				strcpy(result, "Yes");
			}
		}
		else {
			strcpy(result, "No");
		}
		printf("result : %s\n", result);
		for (int i = 1; i <= 4; i++) {
			free(p[i - 1]);
		}
	} return 0;
}