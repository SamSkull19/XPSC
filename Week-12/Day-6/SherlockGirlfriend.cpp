#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e6 + 5;
vector <bool> primeCheck(N, true);

void is_prime(){
    for(int i=2; i*i <= N; i++){
        if(primeCheck[i]){
            for(int j=i+i; j<=N; j+=i){
                primeCheck[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    is_prime();

    int n;
    cin >> n;
    
    vector <int> v;
    set <int> s;
    for(int i=2; i<=n+1; i++){
        if(primeCheck[i]){
            v.push_back(1);
            s.insert(1);
        }
        else{
            v.push_back(2);
            s.insert(2);
        }
    }

    cout << (int)s.size() << endl;
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}