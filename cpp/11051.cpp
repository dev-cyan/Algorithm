#include <bits/stdc++.h>
using namespace std;

int N, K;
int C[1010][1010], MOD = 10007;

void comb(int n){
    C[0][0] = 1;
    for(int i=1; i<=n; i++){
        C[i][0] = 1;
        C[i][i] = 1;
        for(int j=1; j<i; j++){
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
        }
    }
}




int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    comb(N);
    cout << C[N][K];
}