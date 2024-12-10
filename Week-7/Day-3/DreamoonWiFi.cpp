#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, x;
    cin >> s >> x;
    
    int n = s.size();
    int tarSum = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '+'){
            tarSum++;
        }
        else{
            tarSum--;
        }
    }

    int currSum = 0;
    int ques = 0;

    for(int i=0; i<n; i++){
        if(x[i] == '+'){
            currSum++;
        }
        else if(x[i] == '-'){
            currSum--;
        }
        else{
            ques++;
        }
    }

    int cnt = 0;
    for(int mask=0; mask < (1 << ques); mask++){
        int sum = 0;
        for(int k=0; k < ques; k++){
            if(((mask >> k) & 1)){
                sum++;
            }
            else{
                sum--;
            }
        }
        if(currSum + sum == tarSum){
            cnt++;
        }
    }

    double ans = (double)cnt / (1 << ques);
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}