#include <iostream>
#include <bitset>
using namespace std;

bitset<(1 << 25)> bt;
int s;

int main() {
	freopen("input.txt", "r", stdin);
	int num;
	while (scanf("%d", &num) != EOF) {
		if (!bt[num]) {
			bt[num] = 1;
			printf("%d ", num);
		}
	}
	return 0;
}