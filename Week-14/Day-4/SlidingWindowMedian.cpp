#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0;
    pbds <pair <int, int>> p;

    while(r < n){
        p.insert({v[r], r});

        if(r - l + 1 == k){
            int x = k / 2;
            if(k % 2 == 0){
                x--;
            }

            auto it = p.find_by_order(x);
            cout << it->first << " ";

            p.erase({v[l], l});
            l++;
        }
        r++;
    }
    cout << endl;
    return 0;
}