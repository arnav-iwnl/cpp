#include <iostream>
using namespace std;
class Pouch
{
public:
    void openPouch()
    {
        cout << "Pouch was opened. " << endl;
    }
};
class Pencil : public Pouch
{
public:
    void openPouch()
    {
        cout << "Pencil was found. " << endl;
    }
};
class Pen : public Pouch
{
public:
    void openPouch()
    {
        cout << "Pen was found. " << endl;
    }
};
int main()
{
    Pouch p0;
    Pencil p1;
    Pen p2;
    p0.openPouch();
    p1.openPouch();
    p2.openPouch();
}
