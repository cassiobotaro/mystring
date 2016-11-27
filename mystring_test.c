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
        printf("TestFirstIndexOfFound: expected %d but found %d",
               expected, returned);
    }
}

void TestFirstIndexOfNotFound(String s){
    int expected = NOTFOUND;
    int returned = s.firstIndexOf("teste", 'i');
    if (returned != expected) {
        printf("TestFirstIndexOfNotFound: expected %d but found %d",
               expected, returned);
    }
}

void TestLastIndexOfFound(String s){
    int expected = 3;
    int returned = s.lastIndexOf("teste", 't');
    if (returned != expected) {
        printf("TestLastIndexOfFound: expected %d but found %d",
               expected, returned);
    }
}

void TestLastIndexOfNotFound(String s){
    int expected = NOTFOUND;
    int returned = s.lastIndexOf("teste", 'i');
    if (returned != expected) {
        printf("TestLastIndexOfNotFound: expected %d but found %d",
               expected, returned);
    }
}


int main(int argc, char *argv[])
{
    String s = new;
    TestLength(s);
    TestFirstIndexOfFound(s);
    TestFirstIndexOfNotFound(s);
    TestLastIndexOfFound(s);
    TestLastIndexOfNotFound(s);
    return 0;
}

