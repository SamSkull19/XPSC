#include<bits/stdc++.h>
using namespace std;

int search(string p, string t) {
	int n = t.size();
	int m = p.size();

    if(m > n){
        return 0;
    }

    map <char, int> mpP;
    map <char, int> mpT;

    for(char c : p){
        mpP[c]++;
    }    
    
    for(int i=0; i<m; i++){
        mpT[t[i]]++;
    }

    int cnt = 0;
    if(mpP == mpT){
        cnt++;
    }

    int l = m;
    while(l < n){
        mpT[t[l]]++;
        char c = t[l - m];
        mpT[c]--;

        if(mpT[c] == 0){
            mpT.erase(c);
        }

        if(mpP == mpT){
            cnt++;
        }
        l++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string p, t;
    cin >> p >> t;

    int x = search(p, t);
    cout << x << endl;
    return 0;
}