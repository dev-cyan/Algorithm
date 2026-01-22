#include <bits/stdc++.h>
using namespace std;

int N, M, num;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> num;
        v.push_back(num);
    }

    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                if(v[i]+v[j]+v[k]<=M && v[i]+v[j]+v[k]>max) max = v[i]+v[j]+v[k];
            }
        }
    }

    cout << max;

    return 0;
}