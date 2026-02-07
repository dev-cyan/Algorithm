#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N;
vector<ll> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll temp;

    cin >> N;

    for(ll i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }
    temp = *max_element(v.begin(), v.end());

    vector<ll> v2(temp, 0);

    for(ll i=0; i<N; i++){
        for(ll j=0; j<v[i]; j++){
            if(v2[j]>=10&&j==v2.size()-1){
                v2.push_back(0);
                v2[j+1]++;
                v2[j]=v2[j]%10;
            }
            else if(v2[j]>=10){
                v2[j+1]++;
                v2[j]=v2[j]%10;
            }
            v2[j]++;
            if(v2[j]>=10&&j==v2.size()-1){
                v2.push_back(0);
                v2[j+1]++;
                v2[j]=v2[j]%10;
            }
            else if(v2[j]>=10){
                v2[j+1]++;
                v2[j]=v2[j]%10;
            }
            
        }
    }

    for (int i=(int)v2.size()-1; i>=0; i--) {
        cout << v2[i];
    }


    return 0;
}
