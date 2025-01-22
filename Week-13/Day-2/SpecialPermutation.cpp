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
        int n, a, b;
        cin >> n >> a >> b;

        int s = n / 2;
        int l = a - 1;
        int r = n - b;

        if(l > s || r > s || (a <= s && b <= s) || (a > s && b > s)){
            cout << -1 << endl;
            continue;
        }

        vector <int> left;
        vector <int> right;

        left.push_back(a);
        right.push_back(b);
        vector <int> v(n+1, 0);

        v[a] = 1;
        v[b] = 1;

        for(int i=n; i>=1; i--){
            if(left.size() == s) break;

            if(i > a && !v[i] && i != b){
                left.push_back(i);
                v[i] = 1;
            }
        }

        for(int i=1; i<=n; i++){
            if(right.size() == s) break;

            if(i < b && !v[i]){
                right.push_back(i);
                v[i] = 1;
            }
        }

        for(int i : left){
            cout << i << " ";
        }
        for(int i : right){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}