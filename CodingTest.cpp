// Problem 1
class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};


/***************************************/



// Problem 2
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long i = 0, j = 0, sum = 0, mini = LLONG_MAX;

        while (j < nums.size ())
        {
            if ((nums [j] + sum) < target)
                sum += nums [j++];
            else
            {
                mini = min (mini, abs (j - i + 1));
                sum -= nums [i++];
            }
        }
        if (mini == LLONG_MAX)
            return 0;
    
        return mini;
    }
};
