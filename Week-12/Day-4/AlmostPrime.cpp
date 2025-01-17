#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 3005;
vector <bool> prime(N, true);
void is_prime(){
    for(int i=2; i * i <= N; i++){
        if(prime[i]){
            for(int j = i+i; j <= N; j += i){
                prime[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    is_prime();
    vector <int> pm;

    for(int i=2; i<=n / 2; i++){
        if(prime[i]){
            pm.push_back(i);
        }
    }

    map <int, int> mp;
    for(int i=0; i < pm.size(); i++){
        for(int j=1; j<=n; j++){
            if(j % pm[i] == 0){
                mp[j]++;
            }
        }
    }

    int cnt = 0;
    for(auto [x, y] : mp){
        if(y == 2){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}