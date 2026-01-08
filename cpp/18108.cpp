#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    cout << N * (M%10) << "\n";
    cout << (N * ((M%100)-(M%10)))/10 << "\n";
    cout << (N * (M - (M%100)))/100 << "\n";
    cout << (N * (M - (M%100))) + (N * ((M%100)-(M%10))) + N * (M%10);

    return 0;
}