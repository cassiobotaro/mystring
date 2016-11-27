#include <stdlib.h>
#include "mystring.h"

void TestLength(String s){
    int expected = 5;
    int returned = s.length("teste");
    if (returned != expected) {
        printf("TestLength: expected %d but found %d",
               expected, returned);
    }
}

void TestFirstIndexOfFound(String s){
    int expected = 2;
    int returned = s.firstIndexOf("teste", 's');
    if (returned != expected) {
        printf("TestFirstIndexOf: expected %d but found %d",
               expected, returned);
    }
}

void TestFirstIndexOfNotFound(String s){
    int expected = NOTFOUND;
    int returned = s.firstIndexOf("teste", 'i');
    if (returned != expected) {
        printf("TestFirstIndexOf: expected %d but found %d",
               expected, returned);
    }
}


int main(int argc, char *argv[])
{
    String s = new;
    TestLength(s);
    TestFirstIndexOfFound(s);
    return 0;
}

