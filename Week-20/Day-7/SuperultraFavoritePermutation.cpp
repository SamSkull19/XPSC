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
        int n;
        cin >> n;

        if(n <= 4){
            cout << -1 << endl;
            continue;
        }

        int x, y;
        for(int i=min(n, 8); i>0; i--){
            if(i % 2 == 0){
                x = 9 - i;
                break;
            }
        }
        y = 9 - x;
        vector <int> v;
        for(int i=1; i<=n; i+=2){
            if(i != x){
                v.push_back(i);
            }
        }
        v.push_back(x);
        v.push_back(y);
        for(int i=2; i<=n; i+=2){
            if(i != y){
                v.push_back(i);
            }
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}