#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M, A[101010];

bool Find(int v){
    int l = 1, r = N;
    while(l <= r){
        int m = (l + r) / 2;
        if(v == A[m]) return true;
        else if(v < A[m]) r = m - 1;
        else l = m + 1;
    }
    return false;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    sort(A+1, A+N+1);
    cin >> M;
    for(int i=1; i<=M; i++){
        int j;
        cin >> j;
        cout << Find(j) << '\n';
    }
}
