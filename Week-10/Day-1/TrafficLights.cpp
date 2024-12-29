#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    vector <int> v(n);
    int mx = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    set <int> s;
    s.insert(0);
    s.insert(x);
    multiset <int> m;
    m.insert(x);

    for(int i=0; i<n; i++){
        int p = v[i];
        auto itR = s.upper_bound(p);
        auto itL = prev(itR);

        int l = *itL;
        int r = *itR;
        
        m.erase(m.find(r-l));
        m.insert(p - l);
        m.insert(r - p);

        s.insert(p);
        cout << *(m.rbegin()) << " ";
    }
    return 0;
}