#include <bits/stdc++.h>
using namespace std;

string N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    N[0] = N[0] + 'a' - 'A';
    string ans = "Of" + N;
    cout << ans;

    return 0;
}