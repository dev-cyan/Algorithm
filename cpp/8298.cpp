#include <bits/stdc++.h>
using namespace std;

int n, k, S[1010101], ans;
string str;
unordered_map<int, int> sum;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k >> str;
    if(str[0] =='R'){
        S[0] = k;
    }
    else{
        S[0] = -1;
    }
    for(int i=1; i<n; i++){
        if(str[i] == 'R'){
            S[i] = S[i-1] + k;
        }
        else{
            S[i] = S[i-1] - 1;
        }
    }
    
    sum[0] = -1;

    for(int i = 0; i < n; i++) {
        if (sum.count(S[i])) { 
            ans = max(ans, i - sum[S[i]]);
        } else {
            sum[S[i]] = i;
        }
    }
    
    cout << ans;
}
