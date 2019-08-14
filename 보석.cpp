#include <stdio.h>
#define N 110
int XN, YN, n, k;
int XX, YY, MAX = 0;
struct abc {
	int x, y;
}DATA[N];

void input() {
	int i;
	scanf("%d%d%d%d", &XN, &YN, &n, &k);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &DATA[i].x, &DATA[i].y);
	}
}
void q(int X,int Y) {
	int i;
	int count = 0;
	for (i = 1; i <= n; i++) {
		if (X <= DATA[i].x && DATA[i].x >= X + k &&
			Y <= DATA[i].y && DATA[i].y >= Y + k) {
			count++;
		}
	}
	if (MAX < count) {
		MAX = count;
		XX = X;
		YY = Y+k;
	}
}
int main() {
	int i, j;
	input();
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			q(DATA[i].x, DATA[j].y);
		}
	}

	printf("%d %d \n%d", XX, YY, MAX);
	return 0;
}