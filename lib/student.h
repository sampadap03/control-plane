// header for student class

/*
Lab 6 OOPS: Inheritance Demonstration
Date: 12 Feb 2020
Roll No.: K-62
Gr No.: 1710536
By: Sampada Petkar
*/

#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;
};

class mark : public student
{

protected:
    int mark1, mark2;

public:
    int get_marks()
    {
        cout << "Enter name of student: \t";
        cin >> name;
        cout << "Enter roll number : \t";
        cin >> roll;
        cout << "Enter marks in English  out of 50: \t";
        cin >> mark1;
        cout << "Enter marks in Maths out of 50: \t";
        cin >> mark2;
        cout << "\n";
    }
};

class result : public mark
{
private:
    int total;

public:
    int cal_result()
    {
        total = mark1 + mark2;
        return total;
        if (total > 40)
            return 1;
        else
            return 0;
    }
    void display_result()
    {
        cout << name << "\t" << roll << "\t" << mark1 << "\t" << mark2;

        cout << "\t " << cal_result();
        if (cal_result() > 40)
            cout << "\tPASSED";
        else
            cout << "\tFAILED";

        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter how many students:  ";
    cin >> n;
    // student s[n];
    // mark m[n];
    result r[n];
    for (int i = 0; i < n; i++)
    {
        r[i].get_marks();
    }
    cout << "Name \t Roll \t English   Maths \t Total \t Result" << endl;
    cout << " ------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        r[i].display_result();
    }
    return 0;
}

/*int main()
{

    int i;
    i = 1 + (1, 23, 4, 3);
    cout <<i;
    return 0;
}*/