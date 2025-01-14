// understanding multiline inharitence
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int a)
{
    roll_number = a;
}

void student ::get_roll_number(void)
{
    cout << "the rollnumber of this student is " << roll_number << endl;
}

class exam : public student
{
protected:
    float math;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam ::setmarks(float m, float p)
{
    math = m;
    physics = p;
}

void exam ::getmarks(void)
{
    cout << "maths marks : " << math << endl;
    cout << "physics marks : " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        cout << "your percentage is " << (math + physics) / 2 << endl;
    }
};

/*
note-
if we inharit b from a and c form b  [a--->b--->c]
    1. a is base class for b and b is base class for c
    2. abc is called inharitence path
*/
int main()
{
    result sayujya;
    sayujya.set_roll_number(420);
    sayujya.get_roll_number();
    sayujya.setmarks(94.4, 90.9);
    sayujya.getmarks();
    sayujya.display();
    return 0;
}