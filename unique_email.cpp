#include <iostream>
#include "stdc++.h"

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> emailSet;
        
        for(int i = 0; i<emails.size(); i++){
            string str;
            string str2;
            string newStr;
            str = emails[i].substr(0, emails[i].find('@'));
                
            for(int j = 0; j<str.length(); j++){
                if(str[j] == '+'){
                    break;
                }
                else if(str[j] == '.'){
                    continue;
                }
                else{
                    newStr += str[j];
                }
            }
            newStr = newStr + emails[i].substr(emails[i].find('@'));

            emailSet.insert(newStr);
        }
        
        return emailSet.size();
    }
};

int main()
{
    
    Solution solution;
    vector<string> emails;

    emails.push_back("test.email+alex@leetcode.com");
    emails.push_back("test.e.mail+bob.cathy@leetcode.com");
    emails.push_back("testemail+david@lee.tcode.com");
    
    int a = solution.numUniqueEmails(emails);
    cout<<a;

    return 0;
}
