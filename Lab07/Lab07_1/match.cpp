#include "match.h"
#include <string.h>

const char* match(const char* s, char ch){
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[i] == ch){
            return s+i;
        }
    }
    return "Not Found";
}