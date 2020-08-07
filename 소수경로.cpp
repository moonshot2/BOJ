#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#define MAX_INT 10001
using namespace std;

bool prime[MAX_INT];
int check[MAX_INT];
int start_node, end_node, n;

void eratos() {
    for (int i = 2; i * i < MAX_INT; i++) {
        for (int j = i * i; j < MAX_INT; j += i) {
            prime[j] = false;
        }
    }
}

int to_int(string num) {
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        ret = ret * 10 + (num[i] - '0');
    }
    return ret;
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    check[start] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            string s = to_string(node);
            for (int j = 0; j < 10; j++) {
                s[i] = j + '0';
                int next = to_int(s);
                if (next >= 1000 && prime[next] == true && check[next] == -1) {
                    check[next] = check[node] + 1;
                    q.push(next);
                }
            }
        }
    }
}

int main() {
    memset(prime, true, sizeof(prime));
    eratos();
    cin >> n;
    for (int i = 0; i < n; i++) {
        memset(check, -1, sizeof(check));
        cin >> start_node >> end_node;
        bfs(start_node);
        if (check[end_node] != -1) {
            cout << check[end_node] << "\n";
        }
        else {
            cout << "Impossible\n";
        }
    }
}