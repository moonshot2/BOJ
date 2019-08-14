#include <stdio.h>

int main() {
	char a[100000], b[100000];
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int nn;
		scanf("%d", &nn);
		scanf("%s", a);
		scanf("%s", b);
		int wcnt = 0, bcnt = 0;
		for (int i = 0; i < nn; i++) {
			if (a[i] == 'W' && b[i] == 'B') {
				++wcnt;
			}
			if (a[i] == 'B' && b[i] == 'W') {
				++bcnt;
			}
		}
		printf("%d\n", wcnt < bcnt ? bcnt : wcnt);
	}
}