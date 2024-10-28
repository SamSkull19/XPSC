#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector <vector<string>> v(3, vector<string>(n));
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                cin >> v[i][j];
            }
        }

        map <string, int> count;

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                count[v[i][j]]++;
            }
        }        
        
        vector <int> ans(3, 0);

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(count[v[i][j]] == 1){
                    ans[i] += 3;
                }                
                else if(count[v[i][j]] == 2){
                    ans[i] += 1;
                }
            }
        }     

        for(auto i : ans){
            cout << i << " ";
        }   
        cout << endl;
    }
    return 0;
}