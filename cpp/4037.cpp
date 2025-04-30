#include <bits/stdc++.h>
using namespace std;

int T, n, l;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> l >> n;
        int location, fast, late = 0;
        vector<int> v(101010);
        for(int j=0; j<n; j++){
            cin >> location;
            late = max(late, max(location,l-location));
            v[j] = min(l-location, location);
        }
        fast = *max_element(v.begin(), v.end());
        cout << fast << " " << late << "\n";
    }
}