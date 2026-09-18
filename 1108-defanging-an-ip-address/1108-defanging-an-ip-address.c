

char * defangIPaddr(char * address){
     char *result = malloc(strlen(address) * 3 + 1);
    int j = 0;

    for(int i = 0; address[i] != '\0'; i++)
    {
        if(address[i] == '.')
        {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        }
        else
        {
            result[j++] = address[i];
        }
    }

    result[j] = '\0';

    return result;
}