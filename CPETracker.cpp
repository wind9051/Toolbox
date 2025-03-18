//2024-12-10 
#include <bits/stdc++.h>
using namespace  std;

int main () {
    string s;
    map<int, int> Hash;
    while (getline(cin, s)) {
        auto it = s.find(':');
        if (it != string::npos) Hash[stoi(s.substr(0, it))]++;
    }
    for (auto [k, v] : Hash) cout << k <<" -> "<<v<<endl;
    
    return 0;
}