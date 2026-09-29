bool isValid(char* s){
    char st[strlen(s)];
    int top = -1 ;
    
    for(int i = 0 ; s[i] != '\0' ;i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st[++top] = s[i];
        }
        else if(top == -1){
            return false;
        }

        else if((s[i] == ')' && st[top] == '(') || (s[i] == ']' && st[top] == '[' ) || (s[i] == '}' && st[top] == '{' )){
            top--;
        }
        else return false;
        
        }
        return top == -1;
}
    
