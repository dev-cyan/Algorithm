#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string N;
    int arr[10] = {0,};
    int temp, max = 0;

    cin >> N;

    for(int i=0; i<N.length(); i++){
        arr[N[i]-'0']++;
        //cout << N[i] << " ";
    }

    temp = (arr[6] + arr[9] + 1) / 2;
    arr[6] = temp;
    arr[9] = temp;


    max = arr[0];

    for(int i=1; i<=9; i++){
        if(arr[i]>max) max = arr[i];
    }

    cout << max;

    return 0;
}