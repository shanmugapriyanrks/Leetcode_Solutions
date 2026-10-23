/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    for(int i = digitsSize - 1 ; i >= 0 ; i--){
        if(digits[i] != 9){
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;

        }
        else{
                digits[i] = 0;

            }
        }
        int* res = malloc((digitsSize + 1) * sizeof(int));
        if (res == NULL)
        {
            *returnSize = 0;
            return NULL;

        }
        res[0] = 1 ;
        for (int i = 1; i <= digitsSize; i++)
{
        res[i] = 0;
}
    *returnSize = digitsSize + 1;
    return res;
}
