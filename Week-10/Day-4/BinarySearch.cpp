#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<k; i++){
        int x, l = 0, r = n-1, mid;
        cin >> x;

        bool flag = false;
        while(l <= r){
            mid = (l + r) / 2;
            if(x == v[mid]){
                flag = true;
                break;
            }
            else if(x < v[mid]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}