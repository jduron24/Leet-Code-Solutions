#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void push(char *str,char character){
    int len = strlen(str);
    for(int i = 0; i < len;i++ ){
        if(strcmp(str,NULL) != 0){
            printf("It is null");
            str[0] = character;
            break;
        }
        else if(str[i] == '\0'){
            str[i] = character;
        }
            printf("None\n");
    }
    printf("test:%d\n",len);
}

bool isValid(char * s){
    int stackSize = strlen(s) /2;
    char stack[strlen(s)];
    stack[0] = '\0';

    if((strlen(s) % 2) != 0){
        return false;
    }
    for(int i = 0; i < strlen(s);i++){

        switch (s[i])
        {
        case '[':
            // push into stack
            push(stack,s[i]);
            printf("%d",strlen(stack));

            break;
        
        default:
            break;
        }
}

return true;
}







int main (int argc, char *argv[]){
    char* string = "[{()}]";
    isValid(string);

}