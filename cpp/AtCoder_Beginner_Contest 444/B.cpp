    #include <bits/stdc++.h>
    using namespace std;

    int N, K, cnt = 0;



    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        cin >> N >> K;

        for(int i=1; i<9; i++){
            if(i == K) cnt++;
            if(i == N) {
                cout << cnt;
                return 0;
            }
        }
        for(int i=10; i<=99; i++){
            if(i%10 + (i-i%10)/10 == K) cnt++;
            if(i == N) {
                cout << cnt;
                return 0;
            }
        }
        for(int i=100; i<=999; i++){
            if(i%10 + (i%100-i%10)/10 + (i%1000 - i%100)/100 == K) cnt++;
            if(i == N) {
                cout << cnt;
                return 0;
            }
        }
        for(int i=1000; i<=9999; i++){
            if(i%10 + (i%100-i%10)/10 + (i%1000 - i%100)/100 + (i - i%1000)/1000 == K) cnt++;
            if(i == N) {
                cout << cnt;
                return 0;
            }
        }
        for(int i=10000; i<=99999; i++){
            if(i%10 + (i%100-i%10)/10 + (i%1000 - i%100)/100 + (i%10000 - i%1000)/1000 + (i - i%10000)/10000 == K) cnt++;
            if(i == N) {
                cout << cnt;
                return 0;
            }
        }
        if(N == 100000 && K == 1) cnt++;

        cout << cnt;
        return 0;
    }
