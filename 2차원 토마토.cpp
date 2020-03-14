#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;

int map[1001][1001];
int check[1001][1001];
queue<pair<int, int>> q;

//int x[4] = { 1,0,-1,0 }; //�� �� �� ��
//int y[4] = { 0,1,0,-1 };

int xy[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int main() {
	int r, c;
	scanf_s("%d %d", &r, &c);
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			check[i][j] = -1; // ���� �� -1�� ����
			scanf_s("%d", &map[i][j]);
			if (map[i][j] > 0) { // ���� �丶�� ť�� �ֱ�
				check[i][j] = 0; // �������� üũ
				q.push(pair<int, int>(i, j));
			}
		}
	}
	int next_r, next_c; // ���� ��ġ
	while (!q.empty()) {
		int rr = q.front().first; // pair�� ���� �� ������
		int cc = q.front().second;
		q.pop(); // �� �� �� ����
		for (int i = 0; i < 4; i++) {
			next_r = rr + xy[i][0]; //���� r ��ǥ
			next_c = cc + xy[i][1]; //���� c ��ǥ

			//map�� �����ʰ�, check�� ���� ���� ���
			if (map[next_r][next_c] != -1 && check[next_r][next_c] == -1) {
				q.push(pair<int, int>(next_r, next_c)); // ������ǥ ť�� ����
				check[next_r][next_c] = check[rr][cc] + 1; // �丶�� +1�� ������
			}
		}
	}
	int res = 0; //��°�
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			if (map[i][j] == 0 && check[i][j] == -1) { // ����������, ��κ� ����
				printf("-1");
				return 0;
			}
			if (check[i][j] > res) { // ���������� ���� ū ��
				res = check[i][j];
			}
		}
	}
	printf("%d", res); // ���� ū �� ���
}