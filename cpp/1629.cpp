#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll Pow(ll a, ll b, ll c){
    if(b == 0) return 1;
    ll half = Pow(a, b/2, c);
    if(b%2 == 0) return half * half % c;
    else return a * half % c * half % c;
}



int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;
    cout << Pow(a % c, b, c);
}