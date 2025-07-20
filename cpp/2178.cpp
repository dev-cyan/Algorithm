#include <bits/stdc++.h>
using namespace std;

int N, M, A[111][111], visited[111][111], dist[111][111];
queue<pair<int, int>> q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y){
    visited[x][y] = 1;
    q.push(make_pair(x,y));
    dist[x][y]++;

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i=0; i<4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if((next_x>0 && next_x<=N) && (next_y>0 && next_y<=M) && !visited[next_x][next_y] && A[next_x][next_y] == 1){
                visited[next_x][next_y] = 1;
                q.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1;
            }
        }
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i=1; i<=N; i++){
        string row;
        cin >> row;
        for(int j=1; j<=M; j++){
            A[i][j] = row[j-1] - '0';
        }
    }
    bfs(1,1);
    cout << dist[N][M];
}

