//#include <stdio.h>
//
//int a[101][101];
//int main()
//{
//	int i, j, h, w, n, l, d, x, y;
//	scanf("%d %d", &h, &w);
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d %d %d %d", &l, &d, &x, &y);
//
//		if (d == 0) {
//			for (j = y; j < y + l; j++) {
//				a[x][j] = 1;
//
//			}
//		}
//		else if (d == 1) {
//			for (j = x; j < x + l; j++) {
//				a[j][y] = 1;
//			}
//		}
//	}
//	for (i = 1; i <= h; i++) {
//		for (j = 1; j <= w; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}