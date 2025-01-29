#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(unsigned long i = 0; i < s.length(); ++i) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) {
                    // cout << st.empty() << "\n";
                    return false;
                }
                if((s[i] == ')' && st.top() == '(') ||
                   (s[i] == '}' && st.top() == '{') ||
                   (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                   }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    string str;
    // cout << "Input s = ";
    getline(cin, str);
    Solution sln;
    
    bool ret = sln.isValid(str);
    if(ret == true) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    return 0;
}