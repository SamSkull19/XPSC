#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int q;
    cin >> q;

    while(q--){
        int x;
        cin >> x;

        auto it1 = lower_bound(v.begin(), v.end(), x);
        auto it2 = upper_bound(v.begin(), v.end(), x);

        if(it1 == v.begin()){
            cout << "X ";
        }
        else{
            cout << *(it1 - 1) << " ";
        }
        
        if(it2 == v.end()){
            cout << "X";
        }
        else{
            cout << *(it2);
        }
        cout << endl;
    }
    return 0;
}