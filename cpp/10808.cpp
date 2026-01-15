#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    int arr[10000];

    cin >> S;

    for(int i=0; i<S.length(); i++){
        arr[S[i]]++;
    }
    
    for(int i=0; i<'z'-'a'+1; i++){
        cout << arr['a'+i] << " ";
    }

    return 0;
}