#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void combination(vector<int>& candidates, int target, int idx, int n, vector <int>& a, vector <vector<int>>& ans){
    if(target == 0){
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<n; i++){
        if(candidates[i] > target){
            break;
        }
        if(i > idx && candidates[i] == candidates[i-1]){
            continue;
        }
        a.push_back(candidates[i]);
        combination(candidates, target-candidates[i], i+1, n, a, ans);
        a.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector <vector<int>> ans;
    vector <int> a;
    int n = candidates.size();

    sort(candidates.begin(), candidates.end());
    combination(candidates, target, 0, n, a, ans);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v = {10,1,2,7,6,1,5};
    int x = 8;
    vector<vector<int>> ans = combinationSum2(v, x);

    for(auto i : ans){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}