#include <bits/stdc++.h>
using namespace std;

int T, N, D;

void func(){
    cin >> N >> D;
    vector<int> A(N+1);
    vector<int> B(N+1);
    int num;
    int cnt = 0;
    for(int i=1; i<=N; i++){
        cin >> num;
        A[i]=num;
    }
    for(int i=1; i<=N; i++){
        cin >> num;
        B[i] = num;
    }
    for(int i=1; i<=N; i++){
        int k = B[i];
        int j = 0;
        if(i-D > 0) j = i-D;
        while(k>0){
            if(A[j]!=0){
                A[j]--;
                k--;
            }
            else{
                j++;
            }
        }
        if(i-D>0) A[i-D] = 0;
    }
    for(int j=1; j<=N; j++){
        cnt += A[j];
    }
    cout << cnt << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    for(int t=0; t<T; t++){
        func();
    }

    return 0;
}