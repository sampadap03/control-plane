#ifndef INHERITANCE_H
#define INHERITANCE_H

#include <iostream>
using namespace std;

class human{
    public:
        human();
};

class singer: public human{
    public:
        singer();
};

class cricketer: public human{
    public:
        cricketer();
};

class programmer: public human{
    public:
        programmer();
};

class x: public singer, public programmer{
    public:
        x();
};

int inher_main();

#endif