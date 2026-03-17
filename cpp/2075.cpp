#include <bits/stdc++.h>
using namespace std;

int N, K;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N*N; i++){
        cin >> K;
        pq.push(K);
        if(pq.size()>N) pq.pop();
    }
    cout << pq.top();

    return 0;
}