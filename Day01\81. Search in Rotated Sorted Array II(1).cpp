class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int zero_cnt = 0;
        int long_arr = 0;
        int start = 0;

        for(int i = 0;i<n;i++){
            zero_cnt += (nums[i] == 0);

            while(zero_cnt > 1){
                // move the start to the left zero and trim the sub array size. (only ensure that one zero is in between subarray)
                zero_cnt -= (nums[start] == 0);

                start++;
            }

            long_arr = max(long_arr, i - start);
        }

        return long_arr;

    }
};