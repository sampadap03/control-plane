/*
Lab 2 OOPS: String Manipulation operations
Date: 22 Jan 2020
Roll No.: K-62
Gr No.: 1710536
By: Sampada Petkar
*/
#include <iostream>
#include <string.h>
using namespace std;
class string_manipulation
{
public:
    void concatenate(char *ptr1, char *ptr2, int n1, int n2);
    void reverse_str(char *ptr, int n);
    void print(char *ptr);
    void palindrome(char *ptr, int n);
};

void string_manipulation::concatenate(char *ptr1, char *ptr2, int n1, int n2)
{
    char s[(n1+n2)-1];
    //cout<< n1 <<endl;
    //cout<< n2 <<endl;
    int t =0;
    while(t < n1)
    {
        s[t] = *ptr1++;
        t++;
    }

    while(t < n1+n2)
    {
        s[t] = *ptr2++;
        t++;
    }
    cout << "Concatenated string is  " ;
    t = 0;
    while(t < n1+n2)
    {
        cout << s[t++];
    }
    cout<< endl;
}

void string_manipulation::reverse_str(char *ptr1, int n)
{
    //cout<<n;
    int t = n-1;
    char s[n];
    while(*ptr1 != '\0')
    {
        s[t] = *ptr1;
        ptr1++;
        t--;
    }
    cout << "Reverse string is  " << s << endl;
}

void string_manipulation::palindrome(char *ptr1, int n)
{
    bool flag = 1;
    int t = n-1;
    char s[n], *temp = ptr1;
    while(*ptr1 != '\0')
    {
        s[t] = *ptr1;
        ptr1++;
        t--;
    }
    t = 0;
    while(*temp !='\0')
    {
        if(*temp != s[t])
        {
            flag =0;
            break;
        }
        temp++;
        t++;
    }

    if(flag == true) cout << "String is palindrome "<< endl;
    else cout<< "String is not a palindrome" <<endl;
}

void string_manipulation::print(char * ptr)
{
    while(*ptr != '\0')
    {
        cout<< *ptr++;
    }
}

int main()
{
    string_manipulation strr;
    char s1[40], s2[40];
    cout << "Enter string 1:  ";
    cin.getline(s1,40);
    cout << "Enter string 2:  ";
    cin.getline(s2, 40);
    char *ptr1 = s1;
    char *ptr2 = s2;
    int choice = 0;
    while(choice != 4)
    {
        cout << "Choose numbers: \n" <<"1 : concatenate\n2 : reverse\n3 : palindrome\n4 : exit"<<endl;
        cin>> choice;
      switch(choice)
        {
        case 1:
            strr.concatenate(ptr1, ptr2, strlen(s1), strlen(s2));
            break;
        case 2:
            cout << "Default string 2 is passed for reversing. " << endl;
            strr.reverse_str(s2, strlen(s2));
            break;
        case 3:
            cout << "Default string 1 is passed for palindrome. " << endl;
            strr.palindrome(s1, strlen(s1));
            break;
        case 4:
            break;
        default:
            cout << "Did wrong, try again" <<endl;
        }
    }


    return 0;
}