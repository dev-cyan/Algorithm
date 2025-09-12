#include <bits/stdc++.h>
using namespace std;

int N, M, K, ans;
vector<int> person;
vector<vector<int>> party(100);
vector<bool> know(100, true);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;
    for(int i=0; i<K; i++){
        int q;
        cin >> q;
        person.push_back(q);
    }
    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        for(int j=0; j<num; j++){
            int a;
            cin >> a;
            party[i].push_back(a);
            for(int t=0; t<K; t++){
                if(person[t] == a) know[i] = false;
            }
        }
    }
    for(int i=0; i<M; i++){
        if(know[i]==false){
            for(int b : party[i]){
                person.push_back(b);
            }
        }
    }
    for(int i=0; i<M; i++){
        for(int b : party[i]){
            for(int c : person){
                if(c == b) know[i] = false;
            }
        }
    }
    for(int i=0; i<M; i++){
        if(know[i] == true) ans++;
    }
    cout << ans;
    return 0;
}
