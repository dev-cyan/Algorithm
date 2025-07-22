#include <bits/stdc++.h>
using namespace std;

bool bfs(int x, int y);

int w, h, A[55][55], visited[55][55];
queue<pair<int, int>> q;
int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[8] = {0, 0, 1, -1, 1, 1, -1, -1};



int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        int cnt = 0;
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w ;j++){
                cin >> A[i][j];
            }
        }
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w ;j++){
                if(bfs(i,j)) cnt ++;
            }
        }
        cout << cnt << '\n';
        memset(visited,0,sizeof(visited));
        memset(A,0,sizeof(A));
        while(!q.empty()) q.pop();
    }
    
}

bool bfs(int x, int y){
    if(!(x>0 && x<=h)|| !(y>0 && y<=w) || visited[x][y] || A[x][y] != 1) return false;
    visited[x][y] = 1;
    q.push(make_pair(x,y));

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i=0; i<8; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if((next_x>0 && next_x<=h) && (next_y>0 && next_y<=w) && !visited[next_x][next_y] && A[next_x][next_y] == 1){
                visited[next_x][next_y] = 1;
                q.push(make_pair(next_x, next_y));
            }
        }
    }
    return true;
}