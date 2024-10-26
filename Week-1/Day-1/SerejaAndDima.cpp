#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    deque <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int s = 0, d = 0;
    bool turn = true;

    while(!v.empty()){
        if(v.front() > v.back()){
            if(turn){
                s += v.front();
                turn = false;
                v.pop_front();
            }

            else{
                d += v.front();
                turn = true;
                v.pop_front();
            }
        }

        else{
            if(turn){
                s += v.back();
                turn = false;
                v.pop_back();
            }

            else{
                d += v.back();
                turn = true;
                v.pop_back();
            }
        }
    }

    cout << s << " " << d << endl;
    return 0;
}