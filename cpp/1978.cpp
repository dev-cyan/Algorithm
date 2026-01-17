#include <bits/stdc++.h>
using namespace std;

int N, temp, ans = 0;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> temp;
        v.push_back(temp);
    }

    for(int i=0; i<v.size(); i++){
        bool num = true;
        for(int j=2; j<v[i]; j++){
            if(v[i]%j == 0) num = false;
        }
        if(v[i] == 1) continue;
        if(v[i] == 2){
            ans++;
            continue;
        }
        if(num == true) ans++;
    }

    cout << ans;

    return 0;
}