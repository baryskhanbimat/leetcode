#include <iostream>
#include "stdc++.h"

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0; i<str.length(); i++){
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = 'a' + (str[i] - 'A');
            }
        }
        return str;
    }
};

int main()
{
    
    Solution solution;
    string str = "Hello";

    string result = solution.toLowerCase(str);
    cout<<result;

    return 0;
}
