/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int* res = malloc(2 * sizeof(int));
    *returnSize = 2;

    res[0] = -1;
    res[1] = -1;

    // Find first position
    int left = 0;
    int right = numsSize - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            res[0] = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // Find last position
    left = 0;
    right = numsSize - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            res[1] = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return res;
}