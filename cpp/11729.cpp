#include <bits/stdc++.h>
using namespace std;

int N, k;
vector<pair<int,int>> v;
void hanoi(int n, int a, int b, int c){
    if(n == 1){
        k++;
        v.push_back(make_pair(a,c));
        return;
    }
    hanoi(n-1, a, c, b);
    hanoi(1, a, b, c);
    hanoi(n-1, b, a, c);
    return;
}



int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    hanoi(N, 1, 2, 3);
    cout << k << "\n";
    for(int i=0; i<k; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}