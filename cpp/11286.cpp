#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a > b;
        else return abs(a) > abs(b);
    }
};

int N, K;
priority_queue<int, vector<int>, cmp> pq;
vector<int> result;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> K;
        if(K==0) {
            if(pq.empty()) {
                result.push_back(0);
            }
            else {
                result.push_back(pq.top());
                pq.pop();
            }
        }
        else {
            pq.push(K);
        }
    }

    for(int i : result){
        cout << i << "\n";
    }

    return 0;
}