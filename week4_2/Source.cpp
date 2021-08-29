#include<stdio.h>
int main() {
		int x, y, n;
		scanf_s("%d", &n);
		x = 1;
		while (x <= n) {
			y = 1;
			while (y <= n) {
				printf("*");
					y++;
			}
			printf("\n");
			x++;
		}
	return 0;
}