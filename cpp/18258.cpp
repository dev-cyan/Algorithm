#include <bits/stdc++.h>
using namespace std;

int N;
queue<int> q;
string cmd;
int num;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> cmd;
        if(cmd.compare("push") == 0){
            cin >> num;
            q.push(num);
        }
        else if(cmd.compare("pop") == 0){
            if(q.empty()){
                cout << "-1\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(cmd.compare("size") == 0){
            cout << q.size() << "\n";
        }
        else if(cmd.compare("empty") == 0){
            if(q.empty()){
                cout << "1\n"; 
            }
            else{
                cout << "0\n";
            }
        }
        else if(cmd.compare("front") == 0){
            if(q.empty()){
                cout << "-1\n";
            }
            else{
                cout << q.front() << "\n";
            }
        }
        else if(cmd.compare("back") == 0){
            if(q.empty()){
                cout << "-1\n";
            }
            else{
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}