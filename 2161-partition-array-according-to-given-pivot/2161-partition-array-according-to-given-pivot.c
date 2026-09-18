/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* temp = malloc(numsSize * sizeof(int));
    int x = 0, y = 0, i1 = 0, i2 = 0, i3 =0;

    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot)
            x++;

        else if (nums[i] == pivot)
            y++;
    }
    i2=x;
    i3 = x + y;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot)
            temp[i1++] = nums[i];

        else if (nums[i] == pivot)
            temp[i2++] = nums[i];

        else
            temp[i3++] = nums[i];
    }

    *returnSize = numsSize;
    return temp;
}
