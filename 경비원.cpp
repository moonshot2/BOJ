#include <stdio.h>
#define N 100

int main() {
	int a, b; // 맵 크기
	int n; // 상점 갯수
	int shop[N][N];
	int x, q; // 내위치
	int sum = 0, temp = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &shop[i][0], &shop[i][1]);
	}
	scanf("%d %d", &q, &x);
	
	for (int i = 0; i < n; i++) {

		if (q == shop[i][0]) {  // 같은 방위
			temp = x - shop[i][1];
			if (temp < 0) {
				sum += temp * -1;
			}
		}

		if (q == 1) { 
			if (shop[i][0] == 3) {
				sum += x + shop[i][1];
			}
			if (shop[i][0] == 4) {
				sum += a - x + shop[i][1];
			}
			if (shop[i][0] == 2) { // 마주보는 식
				if((a - x) + b + (a - shop[i][1]) > x + b + shop[i][1]) {
					sum += x + b + shop[i][1];
				}
				else {
					sum += (a - x) + b + (a - shop[i][1]);
				}
			}
		}

		if (q == 2) {
			if (shop[i][0] == 3) {
				sum += x + (b - shop[i][1]);
			}
			if (shop[i][0] == 4) {
				sum += (a - x) + (b - shop[i][1]);
			}
			if (shop[i][0] == 1) {
				if ((a - x) + b + (a - shop[i][1]) > x + b + shop[i][1]) {
					sum += x + b + shop[i][1];
				}
				else {
					sum += (a - x) + b + (a - shop[i][1]);
				}
			}
		}

		if (q == 3) {
			if (shop[i][0] == 1) {
				sum += x + shop[i][1];
			}
			if (shop[i][0] == 2) {
				sum += (b - x) + shop[i][1];
			}
			if (shop[i][0] == 4) {
				if ((b - x) + a + (b - shop[i][1]) > x + a + shop[i][1]) {
					sum += x + a + shop[i][1];
				}
				else {
					sum += (b - x) + a + (b - shop[i][1]);
				}
			}
		}

		if (q == 4) {
			if (shop[i][0] == 1) {
				sum += x + shop[i][1];
			}
			if (shop[i][0] == 2) {
				sum += (b - x) + shop[i][1];
			}
			if (shop[i][0] == 4) {
				if ((b - x) + a + (b - shop[i][1]) > x + a + shop[i][1]) {
					sum += x + a + shop[i][1];
				}
				else {
					sum += (b - x) + a + (b - shop[i][1]);
				}
			}
		}
	}
	printf("%d", sum);
}

