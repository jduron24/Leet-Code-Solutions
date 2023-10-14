#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeCharacter(char* string, int index) {
    int length = strlen(string);
    if (index >= 0 && index < length) {
        for (int i = index; i < length -1  ; i++) {
            string[i] = string[i + 1];
        }
        string[index] = '\0';  // Null-terminate the string
    }
}
char * longestCommonPrefix(char ** strs, int strsSize){
    if(strs[0] == ""){
        return "";
    }

   char * compareToString = strs[0];
    for(int i = 1; i < strsSize; i++){
        for(int j = 0; j < strlen(compareToString);j++){
            if(compareToString[j] != strs[i][j]){
                removeCharacter(compareToString, j);

            }
        }
    }
    return compareToString;
}


int main(int argc, char *argv[]){
    
    char row1[] = "flower";
    char row2[] = "flow";
    char row3[] = "flok";
    char array[3][10] = {"flower", "flow", "flight"};



    longestCommonPrefix(array,3);
    
    
    return 0;
}