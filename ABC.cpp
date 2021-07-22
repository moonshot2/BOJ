#include iostream
#include string
#include algorithm
#include queue
using namespace std;

int main() {
    int d[4];
    string s;
    cin  d[0]  d[1]  d[2];
    sort(d, d + 3);
    cin  s;
    queuechar q;
    q.push(s[0]);
    q.push(s[1]);
    q.push(s[2]);
    while (!q.empty()) {
        if (q.front() == 'A') {
            cout  d[0]   ;
            q.pop();
        }
        else if (q.front() == 'B') {
            cout  d[1]   ;
            q.pop();
        }
        else {
            cout  d[2]   ;
            q.pop();
        }
    }
    return 0;
}