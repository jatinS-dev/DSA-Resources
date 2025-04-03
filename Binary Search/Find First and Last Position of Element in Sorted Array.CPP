class Solution {
public:
    int firstPosition(vector<int>& nums, int n, int target) {
        int low = 0, high = n - 1;
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                res = mid;
                high = mid - 1; // Move left to find first occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
    int lastPosition(vector<int>& nums, int n, int target) {
        int low = 0, high = n - 1;
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                res = mid;
                low = mid + 1; // Move right to find last occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first_pos = firstPosition(nums, n, target);
        int last_pos  = lastPosition(nums, n, target);

        return {first_pos, last_pos};
    }
};
