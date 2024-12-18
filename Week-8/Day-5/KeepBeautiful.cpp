#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll q;
        cin >> q;

        vector <ll> v(q);
        vector <ll> a;
        string x;
        bool flag = false;

        for(int i=0; i<q; i++){
            cin >> v[i];

            if(a.empty()){
                x += '1';
                a.push_back(v[i]);
            }

            else{
                if(flag){
                    if(v[i] < a.back()){
                        x += '0';
                    }

                    else{
                        if(v[i] > a[0]){
                            x += '0';
                        }
                        else{
                            x += '1';
                            a.push_back(v[i]);
                        }
                    }
                }                
                
                else{
                    if(v[i] >= a.back()){
                        x += '1';
                        a.push_back(v[i]);
                    }

                    else{
                        if(v[i] > a[0]){
                            x += '0';
                            
                        }
                        else{
                            flag = true;
                            x += '1';
                            a.push_back(v[i]);
                        }
                    }
                }
            }
        }

        cout << x << endl;
    }
    return 0;
}