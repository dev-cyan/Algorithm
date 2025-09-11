#include <bits/stdc++.h>
using namespace std;

int N, ans;
vector<string> maze(100);
vector<int> cnt(100);
vector<int> friends(100);

void count(int x) {
    for(int i=0; i<N; i++){
        if(maze[x][i] == 'Y' && (i+1)!=x) {
            friends[i+1] = 1;
            for(int j=0; j<N; j++){
                if(maze[i+1][j] == 'Y' && (j+1)!=x)
                friends[j+1] = 1;
            }
        }
    }
    for(int i=1; i<=N; i++){
        if(friends[i] == 1) cnt[x]++;
    }
    fill(friends.begin(),friends.end(),0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> maze[i];
    }
    for(int i=1; i<=N; i++){
        count(i);
    }
    ans = *max_element(cnt.begin(),cnt.end());
    cout << ans;
    return 0;
}
