#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int date[100] = { 0 };
	int s1, s2, e1, e2;
	int n,i;
	int start, end, start1, end1, start2, end2;
	int count = 0;
	int st = 301, ed = 1201;
	int temp[100] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &s1, &s2, &e1, &e2);
		date[i] = (s1 * 100 + s2) * 10000 + (e1 * 100 + e2);
	}
	sort(date, date+n);
	temp[0] = date[0];
	for (i = 1; i < n; i++) {
		start = date[i] / 10000;
		end = date[i] % 10000;
		start1 = temp[count] / 10000;
		end1 = temp[count] % 10000;
		start2 = temp[count - 1] / 10000;
		end2 = temp[count - 1] % 10000;
		if (end < 301 || end1 < 301 || end2 < 301) {
			date[i] = 0;
		}
		if (start > 1201 || start1 > 1201 || start2 > 1201) {
			date[i] = 0;
		}
		if (start <= end2 && start > start2&&end2 < end) {
			temp[count] = date[i];
		}
		else if (start1 == start && end1 < end) {
			temp[count] = date[i];
		}
		else if (start <= end1 && start > start1&&end1 < end) {
			count++;
			temp[count] = date[i];
		}

	}
	printf("%d", count + 1);

}