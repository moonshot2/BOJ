#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;

int map[1001][1001];
int check[1001][1001];
queue<pair<int, int>> q;

//int x[4] = { 1,0,-1,0 }; //상 하 좌 우
//int y[4] = { 0,1,0,-1 };

int xy[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int main() {
	int r, c;
	scanf_s("%d %d", &r, &c);
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			check[i][j] = -1; // 들어가기 전 -1로 세팅
			scanf_s("%d", &map[i][j]);
			if (map[i][j] > 0) { // 익은 토마토 큐에 넣기
				check[i][j] = 0; // 익혀진곳 체크
				q.push(pair<int, int>(i, j));
			}
		}
	}
	int next_r, next_c; // 다음 위치
	while (!q.empty()) {
		int rr = q.front().first; // pair로 받은 값 나누기
		int cc = q.front().second;
		q.pop(); // 맨 앞 값 삭제
		for (int i = 0; i < 4; i++) {
			next_r = rr + xy[i][0]; //다음 r 좌표
			next_c = cc + xy[i][1]; //다음 c 좌표

			//map이 비지않고, check된 곳이 없을 경우
			if (map[next_r][next_c] != -1 && check[next_r][next_c] == -1) {
				q.push(pair<int, int>(next_r, next_c)); // 다음좌표 큐에 넣음
				check[next_r][next_c] = check[rr][cc] + 1; // 토마토 +1로 익히기
			}
		}
	}
	int res = 0; //출력값
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			if (map[i][j] == 0 && check[i][j] == -1) { // 안익혀지고, 빈부분 종료
				printf("-1");
				return 0;
			}
			if (check[i][j] > res) { // 익혀진곳중 가장 큰 값
				res = check[i][j];
			}
		}
	}
	printf("%d", res); // 가장 큰 값 출력
}