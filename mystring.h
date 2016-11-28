#ifndef new
#define new {.equals=equals, .length=length, .equalsIgnoreCase=equalsIgnoreCase, .substring=substring,.toUpperCase=toUpperCase, .toLowerCase=toLowerCase, .replace=replace, .lastIndexOf=lastIndexOf, .firstIndexOf=firstIndexOf};
#endif

#include "mystring.c"

int equals(char* str1, char* str2);
int length(char *nome);
int firstIndexOf(char *frase,char i);
int lastIndexOf(char *frase,char i);
void toUpperCase(char *str);
void toLowerCase(char *str);
void replace(char *string, char str1, char str2);
char *substring(char *nome, int posInicial, int posFinal);
int equalsIgnoreCase(char *string, char *string_aux);

typedef struct {
    int   (*equals)(char*, char*);
    int   (*length)(char*);
    int   (*equalsIgnoreCase)(char*, char*);
    char* (*substring)(char*, int, int);
    void  (*toUpperCase)(char*);
    void  (*toLowerCase)(char*);
    void  (*replace)(char*, char, char);
    int   (*lastIndexOf)(char*, char);
    int   (*firstIndexOf)(char*, char);

}String;
