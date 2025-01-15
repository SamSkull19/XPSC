#include<bits/stdc++.h>
using namespace std;

int divisors(int x){
    vector <int> v;
    for(int i=1; i*i <= x; i++){
        if(x % i == 0){
            v.push_back(i);
            if(x / i != i){
                v.push_back(x / i);
            }
        }
    }

    return (int)v.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        int ans = divisors(x);
        cout << ans << endl;
    }
    return 0;
}