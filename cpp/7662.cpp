#include <bits/stdc++.h>
using namespace std;

int T, k, n;
char c;

void solve(int K){
    map<int, int> result;
    priority_queue<int> MQ;
    priority_queue<int, vector<int>, greater<int>> mQ;

    for(int i = 0; i < K; i++){
        cin >> c >> n;

        if(c == 'I'){
            MQ.push(n);
            mQ.push(n);
            result[n]++;
        }
        else if(c == 'D'){
            if(n == 1){
                while(!MQ.empty() && result[MQ.top()] == 0){
                    MQ.pop();
                }
                if(!MQ.empty()){
                    result[MQ.top()]--;
                    MQ.pop();
                }
            }
            else if(n == -1){
                while(!mQ.empty() && result[mQ.top()] == 0){
                    mQ.pop();
                }
                if(!mQ.empty()){
                    result[mQ.top()]--;
                    mQ.pop();
                }
            }
        }
    }

    while(!MQ.empty() && result[MQ.top()] == 0){
        MQ.pop();
    }
    while(!mQ.empty() && result[mQ.top()] == 0){
        mQ.pop();
    }

    if(MQ.empty() || mQ.empty()){
        cout << "EMPTY\n";
    }
    else{
        cout << MQ.top() << " " << mQ.top() << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T--){
        cin >> k;
        solve(k);
    }
    return 0;
}