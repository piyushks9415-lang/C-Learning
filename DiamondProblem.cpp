#include <iostream>
using namespace std;

class A
{
public:
    void showMsg()
    {
        cout << "This is main class - A!" << endl;
    }
};
class B : virtual public A
{
public:
    void newMsg()
    {
        cout << "This is child class of A - B!" << endl;
    }
};
class C : virtual public A
{
public:
    void nextMsg()
    {
        cout << "This is also the child of class A - C!" << endl;
    }
};
class D : public B, public C
{
public:
    void lastMsg()
    {
        cout << "This is the subchild of child classes B and C - D!" << endl;
    }
};

int main()
{
    D d1;
    d1.showMsg();
    // This prints the data stored in the method of class A.
    d1.newMsg();
    d1.nextMsg();
    // If we remove the virtual keyword from the classes B and C while inheriting A, it throws an error named - DIAMOND PROBLEM!
    return 0;
}