#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Add(ll a, ll b, ll c){return (a + b) % c;}

ll Mul(ll a, ll b, ll c){
    ll res = 0;
    while(b>0){
        if(b % 2 == 1) res = Add(res, a, c);
        b /= 2;
        a = Add(a, a, c);
    }
    return res;
}

ll Pow(ll a, ll b, ll c){
    ll res = 1;
    while(b>0){
        if(b % 2 == 1) res = Mul(res, a, c);
        b /= 2;
        a = Mul(a, a, c);
    }
    return res;
}



int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;
    cout << Pow(a % c, b, c);
}