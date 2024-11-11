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

    int l = 0, r = 0;
    queue <int> q;
    vector <int> ans;

    while(r < n){
        if(v[r] < 0){
            q.push(v[r]);
        }

        if(r - l + 1 == k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(v[l] == q.front()){
                    q.pop();
                }
            }
            else{
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }

    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}