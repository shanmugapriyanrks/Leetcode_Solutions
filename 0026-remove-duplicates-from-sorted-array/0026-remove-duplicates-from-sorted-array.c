int removeDuplicates(int* nums, int numsSize) {
    int count = 1 ;
    int left = 0 ;
    int right = left + 1;
    

    while(right < numsSize){
        if(nums[left] == nums[right]){
            right++;
        }
        else{
            nums[left + 1] = nums[right];
            count++;
            left++;
        }
    }
    return count;
}



