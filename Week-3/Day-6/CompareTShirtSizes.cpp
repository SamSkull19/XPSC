#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;

        int x = (int)a.size();
        int y = (int)b.size();

        int cntA = 0, cntB = 0;

        for(char c : a){
            if(c == 'X'){
                cntA++;
            }
        }
        for(char c : b){
            if(c == 'X'){
                cntB++;
            }
        }

        if(a[x-1] == b[y-1]){
            if(a[x-1] == 'S'){
                if(cntA > cntB) cout << "<" << endl;
                
                else if(cntA < cntB) cout << ">" << endl;
                
                else cout << "=" << endl;
            }            
            
            else if(a[x-1] == 'L'){
                if(cntA > cntB) cout << ">" << endl;
                
                else if(cntA < cntB) cout << "<" << endl;
                
                else cout << "=" << endl;
            }

            else{
                cout << "=" << endl;
            }
        }

        else{
            if(a[x-1] == 'S' || b[y-1] == 'L'){
                cout << "<" << endl;
            }
            
            else if(a[x-1] == 'L' || b[y-1] == 'S'){
                cout << ">" << endl;
            }
            
            else if(a[x-1] == 'M'){
                cout << "<" << endl;
            }
            
            else{
                cout << ">" << endl;
            }
        }
    }
    return 0;
}