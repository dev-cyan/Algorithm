#include <bits/stdc++.h>
using namespace std;

int N, K, cnt;
stack<int> s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    int num;

    for(int i=0; i<N; i++){
        cin >> num;
        s.push(num);
    }

    while(K>0){
        if(s.top()>K){
            s.pop();
            continue;
        }
        K -= s.top();
        cnt++;
    }

    cout << cnt;

    return 0;
}