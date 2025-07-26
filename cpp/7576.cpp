#include <bits/stdc++.h>
using namespace std;

int M, N;
int box[1001][1001];
int days[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> M >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) {
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (box[nx][ny] == 0) {
                box[nx][ny] = 1;
                days[nx][ny] = days[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0) {
                cout << -1 << "\n";
                return 0;
            }
            answer = max(answer, days[i][j]);
        }
    }

    cout << answer << "\n";
}
