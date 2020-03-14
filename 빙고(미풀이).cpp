#include <stdio.h>

int main() {
	int bingo[5][5];
	int solve[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &bingo[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &solve[i][j]);
		}
	}
	
}