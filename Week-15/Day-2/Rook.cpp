#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        char c;
        int x;
        cin >> c >> x;
        
        for(int i=1; i<=8; i++){
            if(i != x){
                cout << c << i << endl;
            }
        }

        for(char i='a'; i<='h'; i++){
            if(i != c){
                cout << i << x << endl;
            }
        }
    }
    return 0;
}