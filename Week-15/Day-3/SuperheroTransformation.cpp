#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int a = (int)s.size();
    int b = (int)t.size();

    int vCnt1 = 0, cCnt1 = 0, vCnt2 = 0, cCnt2 = 0;
    for(int i=0; i<a; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vCnt1++;
        }
        else{
            cCnt1++;
        }
    }

    for(int i=0; i<b; i++){
        if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
            vCnt2++;
        }
        else{
            cCnt2++;
        }
    }

    if(a != b || vCnt1 != vCnt2 || cCnt1 != cCnt2){
        cout << "NO" << endl;
    }

    else{
        set <int> stv, stc;
        for(int i=0; i<a; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                stv.insert(i+1);
            }
            else{
                stc.insert(i+1);
            }
        }
        for(int i=0; i<b; i++){
            if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
                stv.insert(i+1);
            }
            else{
                stc.insert(i+1);
            }
        }

        int lenV = (int)stv.size();
        int lenC = (int)stc.size();

        if(lenV == vCnt1 && lenC == cCnt1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}