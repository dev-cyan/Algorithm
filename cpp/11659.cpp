#include <bits/stdc++.h>
using namespace std;

int N, M, A[101010], S[101010];

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    for(int i=1; i<=N; i++){
        S[i] = S[i-1] + A[i];
    }
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        cout << S[b] - S[a-1] << "\n";
    }
}