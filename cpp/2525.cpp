#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, h, m;

    cin >> A >> B >> C;

    h = (A + (B+C)/60) % 24;
    m = (B + C) % 60;

    cout << h << " " << m;

    return 0;
}