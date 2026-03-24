#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

ll T, n, a, b;
int k;

void solve(int K){
    ll ans = 0;
    priority_queue<ll, vector<ll>, greater<ll>> mQ;

    for(int i = 0; i < K; i++){
        cin >> n;
        mQ.push(n);
    }

    while(mQ.size()>1){
        a = mQ.top();
        mQ.pop();
        b = mQ.top();
        mQ.pop();
        ans += a+b;
        mQ.push(a+b);
    }

    cout << ans << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T--){
        cin >> k;
        solve(k);
    }
    return 0;
}