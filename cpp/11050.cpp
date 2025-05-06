#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;

ll fact(int a){
    ll res = 1;
    for(int i=1; i<=a; i++) res*= i;
    return res;
}

ll comb(int a, int b){
    return fact(a) / fact(b) / fact(a-b);
}




int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    ll ans = comb(n, k);
    cout << ans;
    
}