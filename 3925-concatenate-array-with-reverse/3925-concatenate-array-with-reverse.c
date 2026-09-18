/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int *res = malloc((2*numsSize)*sizeof(int));
    int temp[numsSize];
    int idx=0;

    for(int i = numsSize - 1 ; i >= 0 ; i--){
        temp[idx++]  = nums[i];
    }
    for(int i = 0 ; i < numsSize ; i++){
        res[i] = nums[i];
        res[numsSize + i] = temp[i];
    }
    
*returnSize = 2 * numsSize;
return res ;
}