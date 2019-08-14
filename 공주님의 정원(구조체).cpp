#include <stdio.h>
#include <algorithm>

typedef struct tagFlower {
	int start;
	int end;
}Flower;

Flower flower[100010];
void quicksort(int start, int end) {
	int st = start;
	int ed = end;
	int pivot = flower[(start + end) / 2].start;
	Flower temp;

	while (st <= ed) {
		while (flower[st].start < pivot) {
			st++;
		}
		while (flower[ed].start > pivot) {
			ed--;
		}
		if (st <= ed) {
			temp = flower[st];
			flower[st] = flower[ed];
			flower[ed] = temp;

			st++;
			ed--;
		}
	}
}

int main() {
	int s1, s2, e1, e2;
	int i, n;
	int endend = 1201;
	int start, end;
	int idx=0, cnt=0;
	int flag = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &s1, &s2, &e1, &e2);
		flower[i].start = s1 * 100 + s2;
		flower[i].end = e1 * 100 + e2;
	}
	quicksort(0, n - 1);

	start = end = 301;
	
	while (start < endend) {
		for (i = idx; i < n; i++) {
			if (flower[i].start <= start) {
				if (flower[i].end > end) {
					end = flower[i].end;
					idx = i;
				}
			}
		}
		if (start == end) {
			flag = 1;
			start = endend;
		}
		else {
			start = end;
			cnt++;
		}
	}
	if (flag == 1)
		printf("0");
	else
		printf("%d", cnt);
	return 0;
}