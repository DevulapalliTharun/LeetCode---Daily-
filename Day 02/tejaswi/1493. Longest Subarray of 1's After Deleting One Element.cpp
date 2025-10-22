class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0;
        int start = 0;
        int longest_subarray = 0;
        for(int i = 0; i < n ; i++){
            cnt0 = cnt0 + (nums[i] == 0);

            if(cnt0 > 1){
                cnt0 = cnt0 - (nums[start] == 0);
                start++;
            }
        
        longest_subarray = max(longest_subarray , i - start);
        }
        return longest_subarray;
    }
};
