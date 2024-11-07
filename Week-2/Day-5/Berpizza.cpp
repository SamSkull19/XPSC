#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, c = 1;
    cin >> q;

    set <pair<int, int>> s;
    multiset <pair<int, int>> m;
    vector <int> v;

    while(q--){
        int x;
        cin >> x;

        if (x == 1){
            int money;
            cin >> money;
            
            s.insert({c, money});
            m.insert({money, -c});
            c++;
        }
        
        else if (x == 2){
            int p = s.begin()->first, money = s.begin()->second;
            v.push_back(p);

            s.erase(s.begin());
            m.erase({money, -p});
        }

        else{
            int p = -m.rbegin()->second, money = m.rbegin()->first;
            v.push_back(p);

            m.erase(--m.end());
            s.erase({p, money});
        }
    }    

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}