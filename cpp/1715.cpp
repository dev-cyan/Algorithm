#include <bits/stdc++.h>
using namespace std;

int N, K, a, b, ans;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> K;
        pq.push(K);
    }
    while(pq.size()>1){
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        ans += a+b;
        pq.push(a+b);
    }
    cout << ans;

    return 0;
}