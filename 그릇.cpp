#include <stdio.h>

#include <string.h>

int main() {
	char dish[300];
	int i, len, hei = 10;
	gets_s(dish);
	len = strlen(dish);
	for (i = 1; i < len; i++) {

		if (dish[i - 1] == '(') {
			hei += 5;
		}
		else if (dish[i - 1] == ')') {
			hei += 10;
		}
	}
	printf("%d", hei);
}