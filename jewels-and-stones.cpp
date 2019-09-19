class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set <char> has;
        for (auto it : J) {
            has.insert(it); 
        }

        int ans = 0;
        for (auto i : S) {
            if (has.count(i) == 1) ++ans;
        }
        // J.size() * S.size()
        return ans;
    }
};
