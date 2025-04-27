#include <bits/stdc++.h>
using namespace std;

int N, M, A[10101], ans;

int main(){
   cin >> N >> M;
   for(int i=0; i<N; i++){
    cin >> A[i];
   }
   for(int i=0; i<N; i++){
        int cnt = 0;
        for(int j=i; j<N; j++){
            cnt += A[j];
            if(cnt == M){
                ans++;
                break;
            }
            else if(cnt > M){
                break;
            }
        }        
    }
    cout << ans;        
}