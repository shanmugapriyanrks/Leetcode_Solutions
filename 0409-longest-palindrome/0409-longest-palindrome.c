int longestPalindrome(char* s) {

    int freq[128] = {0};
    for(int i = 0 ; s[i] != '\0' ; i++){
        freq[s[i]]++;
    }

    int count = 0;
    int odd = 0;

    for(int i = 0 ; i < 128 ; i++){

        if(freq[i] % 2 == 0){
            count += freq[i];
        }
        else{
            count += freq[i] - 1;
            odd = 1;
        }
    }
    if(odd == 1){
        count++;
    }

    return count;
}