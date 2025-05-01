#include <bits/stdc++.h>
using namespace std;

int T;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    for(int i=0; i<T; i++){
        string par;
        bool ans = true;
        vector<int> S(100, 0);
        cin >> par;
        if(par[0] == '('){
            S[0] = 1;
        }
        else{
            ans = false;
            cout << "NO" << "\n";
            continue;
        }
        for(int j=1; j<par.length(); j++){
            S[j] = S[j-1];
            if(par[j] == '('){
                S[j]++;
            }
            else{
                S[j]--;
            }
            if(S[j]<0){
                ans = false;
            }
        }
        if(S[par.length()-1]!=0){
            ans = false;
        }
        if(ans){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}