#ifndef STRINGOPS_H
#define STRINGOPS_H

#include <iostream>
#include <string.h>
#define MAX_STR_SIZE 100

using namespace std;

class stringops
{
    char ogstring[MAX_STR_SIZE], string1[MAX_STR_SIZE], string2[MAX_STR_SIZE];

public:
    stringops();
    ~stringops();
    //copy const
    //assignment operator
    stringops(const char str[]);
    void concatenate(char *ptr1, char *ptr2, int n1, int n2);
    void reverse_str(char *ptr, int n);
    void print(char *ptr);
    void palindrome(char *ptr, int n);
};

int stringops_main();

#endif