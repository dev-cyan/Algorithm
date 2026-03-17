#include <bits/stdc++.h>
using namespace std;

int T, N, M, D, H, ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N >> M >> D;
        H = D / M + 1;
        int ans = (N + H - 1) / H;

        cout << ans << "\n";

    }

    return 0;
}