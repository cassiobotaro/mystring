#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define NOTFOUND -1

int firstIndexOf(char *frase, char i){
    char* pch = strchr(frase, i);
    if (pch == NULL) {
        return NOTFOUND;
    }
    return pch - frase;
}

int lastIndexOf(char *frase, char i){
    char* pch = strrchr(frase, i);
    if (pch == NULL) {
        return NOTFOUND;
    }
    return pch - frase;
}

int equals(char* str1, char* str2){
    return TRUE ? !strcmp(str1, str2) : FALSE;
}


int length(char* str){
    return strlen(str);
}

void toUpperCase(char* str){
    while(*str != '\0'){
        *str = toupper(*str);
        str++;
    }
}

void toLowerCase(char* str){
    while(*str != '\0'){
        *str = tolower(*str);
        str++;
    }
}

int equalsIgnoreCase(char* str1, char* str2){
    if (length(str1) != length(str2)){
        return FALSE;
    }
    while(*str1 != '\0'){
        if (tolower(*str1) != tolower(*str2)){
            return FALSE;
        }
        str1++;
        str2++;
    }
    return TRUE;
}

char* substring(char* str1, int ini, int fim){
    char* sub = (char*)malloc(sizeof((fim - ini) + 1));
    int i,j;
    for (i = ini,j=0; i < fim; ++i, j++) {
        sub[j] = str1[i];
    }
    sub[fim - ini] = '\0';
    return sub;
}

void replace(char* str, char o, char c){
    while(*str != '\0'){
        if (*str == o){
            *str = c;
        }
        str++;
    }
}
