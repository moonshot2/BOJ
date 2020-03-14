#include<stdio.h>

#include<stdlib.h>
#define N 6 //방의 수 일단 6 (0~5번방)

static int i, k, n, u, v, j, ss, s, min, jj;

struct NODE {

	int v;
	NODE * next;
};

NODE * matrix[N]; //matrix라는 이름으로 구조체를 매달 수 있는 배열 생성(방으로 쓰임)

void main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	for (j = 0; j < N; j++) { //방 초기화

		matrix[j] = new NODE; //동적 생성

		matrix[j]->v = -1; //방에 넣을 수는 없음. 그냥 무의미한 -1

		matrix[j]->next = NULL; //다음 주소를 가리킬 곳은 NULL(종지부,끝 중요)

	}
	scanf("%d", &n); //n은 게임 수
	for (j = 1; j <= n; j++) {

		scanf("%d%d ", &u, &v); //는 방번호, v는 구슬 넘버

		NODE * temp = new NODE; //임시 temp구조 동적생성

		temp->next = matrix[u]->next; //matrix방에 매단 구조를 temp에 일단 매단다

		temp->v = v; //temp 에 값을 지금 구슬 (현재것이 가장 위로)

		matrix[u]->next = temp; //temp를 matrix에 매단다. 즉, 매단 역순이 된다.
	}
		NODE * jj;

	for (j = 1; j < N; j++) {

		for (jj = matrix[j]->next; jj; jj = jj->next) {

			printf("% d - % dn", j, jj->v); //출력 j방에 v 구슬 출력

		}

	}

}