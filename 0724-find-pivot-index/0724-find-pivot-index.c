int pivotIndex(int* nums, int size) {
  int total = 0 ; 
  int left = 0 ;

  for(int i = 0 ; i < size ; i++){
    total += nums[i];

  }
  for(int i = 0 ; i < size ; i++){
    int right = total - left - nums[i];
     if(left == right)
     return i;

     else left += nums[i];

  }
  return -1;
}