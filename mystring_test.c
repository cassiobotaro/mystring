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

void TestEqualsEquals(String s){
    int expected = TRUE;
    int returned = s.equals("teste", "teste");
    if (returned != expected) {
        printf("TestEqualsEquals: expected %d but found %d",
                expected, returned);
    }
}

void TestEqualsNotEquals(String s){
    int expected = FALSE;
    int returned = s.equals("testa", "teste");
    if (returned != expected) {
        printf("TestEqualsNotEquals: expected %d but found %d",
                expected, returned);
    }
}

void TestToUpperCase(String s){
    char* expected = "BALL";
    char returned[] = "ball";
    s.toUpperCase(returned);
    if (strcmp(expected, returned)) {
        printf("TestToUpperCase: expected %s but found %s",
                expected, returned);
    }
}

void TestToLowerCase(String s){
    char* expected = "ball";
    char returned[] = "BALL";
    s.toLowerCase(returned);
    if (strcmp(expected, returned)) {
        printf("TestToLowerCase: expected %s but found %s",
                expected, returned);
    }
}

void TestEqualsIgnoreCaseEquals(String s){
    int expected = TRUE;
    int returned = s.equalsIgnoreCase("teste", "TESTE");
    if (returned != expected) {
        printf("TestEqualsIgnoreCaseEquals: expected %d but found %d",
                expected, returned);
    }
}

void TestEqualsIgnoreCaseNotEquals(String s){
    int expected = FALSE;
    int returned = s.equals("TESTA", "teste");
    if (returned != expected) {
        printf("TestEqualsIgnoreCaseNotEquals: expected %d but found %d",
                expected, returned);
    }
}

void TestReplace(String s){
    char* expected = "bell";
    char returned[] = "ball";
    s.replace(returned, 'a', 'e');
    if (strcmp(expected, returned)) {
        printf("TestReplace: expected %s but found %s",
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
    TestEqualsEquals(s);
    TestEqualsNotEquals(s);
    TestToUpperCase(s);
    TestToLowerCase(s);
    TestEqualsIgnoreCaseEquals(s);
    TestEqualsIgnoreCaseNotEquals(s);
    TestReplace(s);
    return 0;
}

