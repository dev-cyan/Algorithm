#include <bits/stdc++.h>
using namespace std;

int R, C, K, ans;
vector<string> board;
bool vis[10][10];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int d) {
    // 목적지: 맨 위 오른쪽
    if (x == 0 && y == C - 1) {
        if (d == K) ans++;
        return;
    }
    if (d >= K) return; // 더 가면 거리 초과

    for (int dir = 0; dir < 4; ++dir) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
        if (vis[nx][ny]) continue;
        if (board[nx][ny] == 'T') continue;

        vis[nx][ny] = true;
        dfs(nx, ny, d + 1);
        vis[nx][ny] = false; // 되돌리기
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C >> K;
    board.resize(R);
    for (int i = 0; i < R; ++i) cin >> board[i];

    // 시작/도착이 막혀 있으면 0
    if (board[R-1][0] == 'T' || board[0][C-1] == 'T') {
        cout << 0 << '\n';
        return 0;
    }

    memset(vis, 0, sizeof(vis));
    vis[R-1][0] = true;     // 시작(왼쪽 아래)
    dfs(R-1, 0, 1);         // 시작 칸 포함해서 거리 1부터
    cout << ans << '\n';
    return 0;
}
