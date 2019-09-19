class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> uniqueElements;
        
        for(int i=0; i<nums.size(); i++){
            uniqueElements.insert(nums[i]);
        }
        
        if(uniqueElements.size() != nums.size()){
            return true;
        }
        
        return false;
    }
};
