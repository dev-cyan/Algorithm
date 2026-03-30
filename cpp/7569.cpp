#include <bits/stdc++.h>
using namespace std;

int m, n, h;
int board[110][110][110];
int dist[110][110][110];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> h;
    queue<pair<int, pair<int,int>>> Q;

    for(int s = 0; s < h; s++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> board[s][i][j];
                if(board[s][i][j] == 1){
                    Q.push(make_pair(s, make_pair(i, j)));
                }
                if(board[s][i][j] == 0){
                    dist[s][i][j] = -1;
                }
            }
        }
    }

    while(!Q.empty()){
        pair<int, pair<int,int>> cur = Q.front(); 
        Q.pop();

        for(int dir = 0; dir < 6; dir++){
            int ns = cur.first + dz[dir];
            int ni = cur.second.first + dx[dir];
            int nj = cur.second.second + dy[dir];

            if(ns < 0 || ns >= h || ni < 0 || ni >= n || nj < 0 || nj >= m) continue;
            if(dist[ns][ni][nj] >= 0) continue;

            dist[ns][ni][nj] = dist[cur.first][cur.second.first][cur.second.second] + 1;
            Q.push(make_pair(ns, make_pair(ni, nj)));
        }
    }

    int mx = 0;

    for(int s = 0; s < h; s++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(dist[s][i][j] == -1){
                    cout << -1;
                    return 0;
                }
                mx = max(mx, dist[s][i][j]);
            }
        }
    }

    cout << mx;

    return 0;
}