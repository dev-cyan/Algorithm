#include <bits/stdc++.h>
using namespace std;

string N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    if(N[0] == N[1] && N[1] == N[2]) {
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}