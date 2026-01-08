#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll X, N, a[110], b[110], cnt=0;

    cin >> X >> N;

    for (int i=0; i<N; i++){
        cin >> a[i] >> b[i];
    }

    for (int i=0; i<N; i++){
        cnt += a[i] * b[i];
    }

    if(cnt == X){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}