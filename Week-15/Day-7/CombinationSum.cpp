#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void combination(vector<int>& candidates, int target, int idx, int sum, int n, vector <int>& a, vector <vector<int>>& ans){
    if(sum == target){
        ans.push_back(a);
        return;
    }

    if(sum > target || idx >= n){
        return;
    }

    a.push_back(candidates[idx]);
    combination(candidates, target, idx, sum + candidates[idx], n, a, ans);
    a.pop_back();
    combination(candidates, target, idx + 1, sum, n, a, ans);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector <vector<int>> ans;
    vector <int> a;
    int n = candidates.size();
    
    combination(candidates, target, 0, 0, n, a, ans);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v = {2,3,6,7};
    int x = 7;
    vector<vector<int>> ans = combinationSum(v, x);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}