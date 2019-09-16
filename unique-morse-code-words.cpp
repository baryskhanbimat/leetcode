#include <iostream>
#include "stdc++.h"

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        //s[0] - a - 90 
        //s[1] - b - 90
        // ...
        //s[25] - z 
        set<string> morse;
        for(int i = 0; i < words.size(); i++){
  
            string str;
            for(int j = 0; j<words[i].size(); j++){//words[i].size()
                str += s[words[i][j]-'a'];
            }
            morse.insert(str);
        }
        return morse.size();
    }
};

int main()
{
    Solution solution;
    vector<string> words;

    words.push_back("gin");
    words.push_back("zen");
    words.push_back("gig");
    words.push_back("msg");

    int result = solution.uniqueMorseRepresentations(words);
    cout<<result;

    return 0;
}
