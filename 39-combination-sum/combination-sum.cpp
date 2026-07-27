class Solution {
public:
vector<vector<int>> ans;
void combsum(int index,int target,vector<int>& candidates,vector<int>& curr){
if(target==0){
    ans.push_back(curr);
    return;
}
if(index==candidates.size()) return;
if(candidates[index]<=target){
    curr.push_back(candidates[index]);
    combsum(index,target-candidates[index],candidates,curr);
    curr.pop_back();
}
combsum(index+1,target,candidates,curr);



}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        combsum(0,target,candidates,curr);
        return ans;
    }
};