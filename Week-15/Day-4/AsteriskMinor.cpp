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
        string a, b;
        cin >> a >> b;

        if(a == b){
            cout << "YES" << endl;
            cout << a << endl;
            continue;
        }

        int n = (int)a.size();
        int m = (int)b.size();

        if(a[0] == b[0]){
            cout << "YES" << endl;
            cout << a[0] << '*' << endl;
            continue;
        }
        
        if(a[n-1] == b[m-1]){
            cout << "YES" << endl;
            cout << '*' << a[n-1] << endl;
            continue;
        }

        int idx = -1;
        for(int i=0; i<n-1; i++){
            string s = a.substr(i, 2);
            int x = b.find(s);
            if(x != string::npos){
                idx = i;
                break;
            }
        }
        
        if(idx >= 0){
            cout << "YES" << endl;
            cout << '*' << a[idx] << a[idx+1] << '*' << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}