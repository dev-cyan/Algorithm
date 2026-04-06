#include <bits/stdc++.h>
using namespace std;

int R, C;
string board[1010];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int dist1[1010][1010]; //불
int dist2[1010][1010]; //지훈

queue<pair<int,int>> Q1; //불
queue<pair<int,int>> Q2; //지훈

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            dist1[i][j] = -1;
            dist2[i][j] = -1;
        }
    }
    for(int i=0; i<R; i++){
        cin >> board[i];
    }

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(board[i][j] == 'F'){
                dist1[i][j] = 0;
                Q1.push(make_pair(i,j));
            }
            if(board[i][j] == 'J'){
                dist2[i][j] = 0;
                Q2.push(make_pair(i,j));
            }
        }
    }
    while(!Q1.empty()){
        pair<int,int> cur = Q1.front(); Q1.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if(board[nx][ny] == '#' || dist1[nx][ny] >= 0) continue;
            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            Q1.push(make_pair(nx,ny));
        }
    }
    while(!Q2.empty()){
        pair<int,int> cur = Q2.front(); Q2.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= R || ny < 0 || ny >= C){
                cout << dist2[cur.first][cur.second] + 1;
                return 0;
            }
            if(board[nx][ny] == '#' || dist2[nx][ny] >= 0) continue;
            if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.first][cur.second] + 1) continue; // 불에 닿을 때
            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            Q2.push(make_pair(nx,ny));
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}