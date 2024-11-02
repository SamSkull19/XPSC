#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, oddDigits;
    cin >> n >> k;

    if(n%2 == 0){
        oddDigits = n/2;
        if(k <= oddDigits){
            cout << 2 * k - 1 << endl;
        }
        else{
            cout << 2 * (k - oddDigits) << endl;
        }
    }
    
    else{
        oddDigits = (n+1)/2;
        if(k <= oddDigits){
            cout << 2 * k - 1 << endl;
        }
        else{
            cout << 2 * (k - oddDigits) << endl;
        }
    }
    return 0;
}