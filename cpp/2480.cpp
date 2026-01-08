#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dice[3], ans;

    cin >> dice[0] >> dice[1] >> dice[2];

    if(dice[0] == dice[1] && dice[1] == dice[2]){
        ans = dice[0] * 1000 + 10000;
    }
    else if(dice[0] == dice[1] && dice[1] != dice[2]){
        ans = dice[0] * 100 + 1000;
    }
    else if(dice[0] == dice[2] && dice[0] != dice[1]){
        ans = dice[0] * 100 + 1000;
    }
    else if(dice[1] == dice[2] && dice[1] != dice[0]){
        ans = dice[1] * 100 + 1000;
    }
    else{
        ans = *max_element(dice,dice+3) * 100;
    }

    

    cout << ans;

    return 0;
}