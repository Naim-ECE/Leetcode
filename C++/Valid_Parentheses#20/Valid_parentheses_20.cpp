#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unsigned long count = 0;
        for(unsigned long i = 0; i < s.length() - 1; ++i) {
            for(unsigned long j = i + 1; j < s.length(); ++j) {
                int a = int(s[i]);
                int b = int(s[j]);
                if(s[i] == '{' || s[i] == '[') {
                    if(a == b - 2) {
                        ++count;
                        if(i + j != s.length() - 1 && i != j - 1) {
                            --count;
                        }
                    }
                }
                else if(s[i] == '(') {
                    if(a == b - 1) {
                        ++count;
                        if(i + j != s.length() - 1 && i != j - 1) {
                            --count;
                        }
                    }
                }
            }
        }

        // for(unsigned i = 0; i < s.length(); ++i) {
        //     for(unsigned j = 0; j < s.length(); ++j) {
                
        //     }
        // }

        if(s.length() / 2 == count) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    string s;
    getline(cin, s);

    // unsigned pos = 0;
    // vector <string> vs;
    // for(unsigned i = 0; i < s.length(); ++i) {
    //     if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
    //         vs[pos++].push_back(s[i]);
    //     }
    // }
    
    bool ret = Solution().isValid(s);
    if(ret == true) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
    return 0;
}