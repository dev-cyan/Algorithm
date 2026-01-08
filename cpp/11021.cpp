#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, a[100], b[100];

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<N; i++){
        cout << "Case #" << i+1 << ": " << a[i] + b[i] << "\n";
    }

    return 0;
}