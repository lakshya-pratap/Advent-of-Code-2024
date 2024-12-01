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

    sort(v1.begin(), v1.end());
    sort(v2.begin(),v2.end());
    int ans = 0;
    
    for(int i = 0 ; i < v1.size() ; i++) {
        ans+= abs(v1[i]-v2[i]);
    }

    cout<<ans<<endl;

    return 0;
}


