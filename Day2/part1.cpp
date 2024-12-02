#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isInvalidReport(vector<int> curr) {
    bool isInc;

    if(curr.size() < 2) {
        return false;
    }
    
    isInc = curr[1] > curr[0];
    for(int i = 0 ; i < curr.size()-1 ; i++) {
        int diff = curr[i+1] - curr[i];
        if((isInc == true && curr[i+1] <= curr[i]) || (isInc == false && curr[i+1] >= curr[i]) ||  abs(diff) < 1 || abs(diff) > 3) {
            return true;
        }
    }
    return false;
}

bool isInvalidAfterOneIndexRemoval(vector<int> curr) {
    if(!isInvalidReport(curr)) return false;
    for(int i = 0 ; i < curr.size() ; ++i) {
        vector<int> erased_curr = curr;
        erased_curr.erase(erased_curr.begin()+i);
        for(auto i : erased_curr) cout<<i<<" ";
        cout<<endl;
        if(!isInvalidReport(erased_curr)) return false;
    }
    return true;
}


int main() {
    ifstream input_file("input.txt");
    vector<vector<int>> v;
    
    string line;

    while (getline(input_file, line)) {
        std::istringstream iss(line);
        int num;
        vector<int> curr;
        while (iss >> num) {
            curr.push_back(num);            
        }
        if(!curr.empty()) v.push_back(curr);
    }
   
    int ans = 0;
    bool isInc = false;
    for(auto curr : v) {
       ans+=isInvalidReport(curr);
    }

    int ans_part2 = 0;
    for(auto curr : v) {
        ans_part2+=isInvalidAfterOneIndexRemoval(curr);
        }
    cout<<v.size() - ans<<endl;
    cout<<v.size() - ans_part2<<endl;

    return 0;
}


