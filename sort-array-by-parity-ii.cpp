#include <iostream>
#include "stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        vector<int> result;
        for(int i = 0; i<A.size(); i++){
            if(A[i]%2 == 0){
                even.push_back(A[i]);
            }
            else{
                odd.push_back(A[i]);//<-
            }  
        }

        for(int i = 0; i<A.size(); i++){
            if(i%2 == 0){
                result.push_back(even[i/2]);
            }
            else{
                result.push_back(odd[i/2]);//
            }   
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> A;
    A.push_back(4);
    A.push_back(2);
    A.push_back(5);
    A.push_back(7);

    vector<int> result= solution.sortArrayByParityII(A);

    return 0;
}
