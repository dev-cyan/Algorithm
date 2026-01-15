#include <bits/stdc++.h>
using namespace std;

int n, x, ans = 0;
int arr[1010101], cnt[1010101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i=0; i<n; i++){
        if(x-arr[i] > 0 && cnt[x-arr[i]] > 0) ans ++;
        cnt[arr[i]]++;
    }

    cout << ans;

    return 0;
}