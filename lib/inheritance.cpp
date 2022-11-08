#include <iostream>
#include "inheritance.h"

using namespace std;
class human
{

public:
    human()
    {
        cout << "I walk sometimes but run a lot " << endl;
        cout << "I talk often" << endl;
        cout << "I am a human" << endl;
    }
};

class singer : public human
{

public:
    singer()
    {
        cout << "I sing melodies" << endl;
        cout << "I am a singer" << endl;
    }
};

class cricketer : public human
{

public:
    cricketer()
    {
        cout << "I play very well" << endl;
        cout << "I am a cricketer" << endl;
    }
};

class programmer : public human
{

public:
    programmer()
    {
        cout << "I do coding" << endl;
        cout << "I am a programmer" << endl;
    }
};

class x : public singer, public programmer
{
public:
    x()
    {
        cout << "Here I am the, X" << endl;
    }
};

int inher_main()
{
    human m;
    cout << "_________________________" << endl;
    singer s;
    cout << "_________________________" << endl;
    cricketer c;
    cout << "_________________________" << endl;
    programmer p;
    cout << "_________________________" << endl;
    x x1;
    return 0;
}