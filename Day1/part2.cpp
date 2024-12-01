#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream input_file("input.txt");
    vector<int> v1,v2;
    string line;

    while (getline(input_file, line)) {
        std::istringstream iss(line);
        int num1, num2;
        
        if (iss >> num1 >> num2) {
            v1.push_back(num1);
            v2.push_back(num2);
        }
    }

    int ans = 0;
    
    unordered_map<int,int> map1;
    unordered_map<int,int> map2;

    for(auto i : v1) {
        map1[i]++;
    }

    for(auto i : v2) {
        map2[i]++;
    }

    for(auto i : map1) {
        ans+= (i.first*i.second*map2[i.first]);
    }

    cout<<ans<<endl;

    return 0;
}


