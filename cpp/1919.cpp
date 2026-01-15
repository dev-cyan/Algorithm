#include <bits/stdc++.h>
using namespace std;

int a[1010], b[1010];
int c, d, ans = 0;
string str1, str2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str1 >> str2;
    c = str1.length();
    d = str2.length();

    int max;

    if(c>d){
        max = c;
    }
    else{
        max = d;
    }
    for(int i=0; i<max; i++){
        a[str1[i]-'a']++;
        b[str2[i]-'a']++;
    }

    for(int i=0; i< 'z' - 'a' + 1; i++){
        ans += abs(a[i]-b[i]);
    }
    cout << ans;

    return 0;
}