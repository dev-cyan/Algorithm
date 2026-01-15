#include <bits/stdc++.h>
using namespace std;

int N, cnt = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    
    for(int i=0; i<N; i++){
        string str1, str2;
        int a[1010] = {}, b[1010] = {};
        cin >> str1 >> str2;

        for(int j=0; j<str1.length(); j++){
            a[str1[j]-'a']++;
            b[str2[j]-'a']++;
        }

        for(int k=0; k<'z'-'a'+1; k++){
            if(a[k] != b[k]){
                cout << "Impossible\n";
                cnt++;
                break;
            }
        }
        if(cnt == 0) cout << "Possible\n";

        cnt = 0;
    }

    return 0;
}