#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set <int> s;
    map <int, int> mpA, mpB;
    int x;
    long long sum = 0;

    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
        mpA[x]++;
    }

    for(int i=0; i<m; i++){
        cin >> x;
        mpB[x]++;
    }

    for(auto i : s){
        sum += (1LL * mpA[i] * mpB[i]);
    }

    cout << sum << endl;
    return 0;
}