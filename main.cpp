#include "artikal.hpp"

int main()
{
    artikal a1("art1", 30);
    cout << a1 << endl;

    DinString d1("art1");
    cout << d1 << endl;
    artikal a2 (d1, 50);
    cout << d1.getNaziv() << endl;

    cout << a2 << endl;

    artikal a3(a1);
    cout << a3.getCena() << endl;

    return 0;
}