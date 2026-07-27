class Solution {
public:
    vector<vector<int>> ans;

    void allsub(int index, vector<int>& subset, vector<int>& nums) {
        if (index == nums.size()) {
            ans.push_back(subset);
            return;
        }

        
        subset.push_back(nums[index]);
        allsub(index + 1, subset, nums);

  
        subset.pop_back();

        allsub(index + 1, subset, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        allsub(0, subset, nums);
        return ans;
    }
};