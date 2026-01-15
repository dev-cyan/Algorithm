#include <bits/stdc++.h>
using namespace std;

int N, K, gen, grade, cnt = 0;
int arr[2][10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> gen >> grade;
        arr[gen][grade]++;
    }

    for(int i=0; i<2; i++){
        for(int j=1; j<=6; j++){
            if(arr[i][j]>0){
                cnt += (((arr[i][j]-1)/K) + 1);
            }
        }
    }

    cout << cnt;

    return 0;
}