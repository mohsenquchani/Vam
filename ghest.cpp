#include "ghest.h"
#include"zamen.h"
#include "datee.h"
#include <string.h>
#include <iostream>
using namespace std;

int ghest::idd = 995;
ghest::ghest()
{
    string f_name;
    string d_name;
    string em;
    float request = 0;
    float tedadz = 0;
    float siz = 0;
    float tota = 0;
    datee* po;
    datee varizz;
    zamen* FF;
}
void ghest::set()
{
    string qq;
    int ww;
    cout << "enter full name" << endl;
    cin >> qq;
    set_ful_name(qq);
    cout << "enter dad name" << endl;
    cin >> qq;
    set_dad_name(qq);
    cout << "enter employee name" << endl;
    cin >> qq;
    set_emp(qq);
    cout << "enter request price" << endl << "warning must between10--100 " << endl;
    cin >> ww;
    set_request(ww);
    tota = total(request);
    cout << "enter tedad zamen" << endl << "between 1--3" << endl;
    cin >> ww;
    set_tedadz(ww);
    FF = new zamen[tedadz];
    for (int i = 0; i < tedadz; i++)
    {
        cout << "enter zamen info" << endl;
        FF[i].set();
    };
    cout << "enter tarikh variz" << endl;
    varizz.setv();
    cout << "enter tedad ghest" << endl << "warning must between5--12 " << endl;
    cin >> ww;
    set_siz(ww);
    po = new datee[siz];
    for (int i = 0; i < siz; i++)
    {
        po[i].set_d(varizz.get_d());
        if (varizz.get_m() + 6 + i > 12)
        {
            po[i].set_m((varizz.get_m() + 6 + i) - 12);
            po[i].set_yy(((varizz.get_m() + 6 + i) / 12) + varizz.get_yy());
        }
        else
        {
            po[i].set_m(varizz.get_m() + 6 + i);
            po[i].set_yy(varizz.get_yy());
        };

    };
    yt = ever(request, siz);
};
void ghest::set_siz(int a)
{
    siz = a >= 5 && a < 13 ? a : 10;
};
void ghest::set_ful_name(string t)
{
    ful_name = t;
};
void ghest::set_emp(string t)
{
    emp = t;
};
void ghest::set_dad_name(string t)
{
    dad_name = t;
};
void ghest::set_request(int a)
{
    request = a > 9 && a < 101 ? a : 10;
};
void ghest::set_tedadz(int a)
{
    tedadz = a >= 1 && a < 4 ? a : 2;
};
int ghest::get_request() const
{
    return request;
};
int ghest::get_tedadz() const
{
    return tedadz;
};

float ghest::total(float r)
{
    float re = r + ((r / 100) * 25);
    return re;
};
float ghest::ever(float r, float t)
{
    float w = (tota / t);
    return w;
};
void ghest::print()const
{
    cout << "ghest info ->" << endl;
    cout << "name = " << ful_name << endl;
    cout << "dad_name = " << dad_name << endl;
    cout << "employee name = " << emp << endl;
    for (int i = 0; i < tedadz; i++)
    {
        FF[i].print();
    };
    cout << "request price = " << request << endl;
    cout << "total = " << tota << endl;
    cout << "tarikh variz "; varizz.printv();
    cout << "tdad ghest = " << siz << endl;
    for (int i = 0; i < siz; i++)
    {
        cout << "tarikh ghest " << i + 1 << " -> " << endl;
        po[i].printv();
    };
    cout << "mablagh har ghest = " << yt << endl;

};