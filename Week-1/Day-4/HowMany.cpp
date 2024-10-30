#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll s, t, c = 0;
    cin >> s >> t;

    for(int i=0; i<=s; i++){
        for(int j=0; j<=s; j++){
            for(int k=0; k<=s; k++){
                if(i + j + k <= s && i * j * k <= t){
                    c++;
                }
            }
        }
    }

    cout << c << endl;
    return 0;
}