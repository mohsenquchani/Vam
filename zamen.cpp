#include "zamen.h"
#include "datee.h"
#include <string.h>
#include <iostream>
using namespace std;

zamen::zamen()
{
	string ful_name;
	string dad_name;
	datee DD;
};
void zamen::set_f_n(string q)
{
	ful_name = q;
};
void zamen::set_d_n(string q)
{
	dad_name = q;
};
void zamen::set()
{
	string w;
	cout << "enter full name zamen" << endl;
	cin >> w;
	set_f_n(w);
	cout << "enter dad name zamen" << endl;
	cin >> w;
	set_d_n(w);
	cout << "enter birthday  zamen" << endl;
	DD.set();
};
void zamen::print()const
{
	cout << "zamen info -> " << endl;
	cout << "full name -> " << ful_name << endl;
	cout << "dad name -> " << dad_name << endl;
	cout << "birth day -> "; DD.print();

};