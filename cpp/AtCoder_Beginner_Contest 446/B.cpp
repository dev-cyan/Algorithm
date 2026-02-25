#include <bits/stdc++.h>
using namespace std;

int N, M, num, num2;
int v[1010][1010];
int num3[1010];
vector<int> nv;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    vector<int> ans(N+100, 0);
    nv.push_back(0);
    for(int i=1; i<=M; i++){
        nv.push_back(i);
    }

    for(int i=1; i<=N; i++){
        cin >> num;
        num3[i] = num;
        for(int j=1; j<=num; j++){
            cin >> num2;
            v[i][j] = num2;
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=num3[i]; j++){
            if(nv[v[i][j]]!=0){
                ans[i] = nv[v[i][j]];
                nv[v[i][j]] = 0;
                break;
            }
        }
    }

    for(int i=1; i<=N; i++){
        cout << ans[i] << "\n";
    }

    return 0;
}