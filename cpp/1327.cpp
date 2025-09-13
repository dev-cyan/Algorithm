#include <bits/stdc++.h>
using namespace std;

int N, K;
queue<string> q;
set<string> s;

bool isAsc(string str) {
    for (int i = 0; i < N; i++) {
        int temp = str[i] - '0';
        if (temp != i + 1) return false;
    }
    return true;
}

int bfs() {
    int size_ = N - K;
    int cnt = 0;
    while (!q.empty()) {
        cnt++;
        int q_size = q.size();

        for (int j = 0; j < q_size; j++) {
            string str = q.front();
            q.pop();

            for (int i = 0; i <= size_; i++) {
                string temp = str;
                reverse(temp.begin() + i, temp.begin() + i + K);
                if (isAsc(temp)) return cnt;
                if (s.find(temp) == s.end()) {
                    s.insert(temp);
                    q.push(temp);
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    string str = "";
    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        str += to_string(s);
    }
    q.push(str);
    if (isAsc(q.front())) {
        cout << 0;
        return 0;
    }
    cout << bfs() << endl;
    return 0;
}
