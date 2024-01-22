class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
         vector<int> numbers;
         for(int i=0;i<index.size();i++)
         { auto it =numbers.begin() + index[i];
          numbers.insert(it, nums[i]);}
          return numbers;
    }
};