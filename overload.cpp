#include <iostream>
#include <string>
using namespace std;

#define MAX_STR_SIZE 100

class Date
{
    int mo, da, yr;
    char str[MAX_STR_SIZE];

public:
    Date(){}
    ~Date(){
        cout<< "adios" << endl;
    }
    // Date(char str[])
    // {
    //     strcpy(this->str, str);
    // }

    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);

    // friend Date operator+(Date& S2)
    // {
    //     Date S3;

    //     strcat(this->str, S2.str);
    //     strcpy(S3.str, this->str);
 
    //     return S3;
    // }
};

ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}

int main()
{
    Date dt(5, 6, 92);
    cout << dt;
}