#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        vector <int> v;
        while(x > 0){
            if(x % 2 == 0){
                v.push_back(0);
            }

            else{
                int r = (x-1) / 2;

                if(r % 2 == 0){
                    v.push_back(1);
                    x--;
                }

                else{
                    v.push_back(-1);
                    x++;
                }
            }
            x /= 2;
        }
        
        cout << (int)v.size() << endl;
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}