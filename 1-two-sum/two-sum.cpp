class Solution {
public:
    vector<int> arr;
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++){
            for (int j=i+1; j<nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    arr.push_back(min(i,j));
                    arr.push_back(max(i,j));
                    break;
                }
            }
        }
        return arr;
    }
};