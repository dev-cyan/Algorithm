#include <bits/stdc++.h>
using namespace std;

int T;

void solve(){
    string p, arr;
    int n;
    bool cnt = true;
    deque<int> d;

    cin >> p;
    cin >> n;
    cin >> arr;
    string num = "";
    for(char c : arr){
        if(isdigit(c)){
            num += c;
        }
        else{
            if(!num.empty()){
                d.push_back(stoi(num));
                num = "";
            }
        }
    }

    for(int i=0; i<p.length(); i++){
        if(p[i] == 'R') cnt = !cnt;
        else if(p[i] == 'D'){
            if(d.empty()){
                cout << "error\n";
                return;
            }

            if(cnt) d.pop_front();
            else d.pop_back();
        }
    }

    cout << "[";
    while(!d.empty()){
        if(cnt){
            cout << d.front();
            d.pop_front();
        }
        else{
            cout << d.back();
            d.pop_back();
        }

        if(!d.empty()) cout << ",";
    }
    cout << "]\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}