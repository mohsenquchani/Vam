#include "datee.h"
#include <iostream>
using namespace std;

datee::datee()
{
	int y = yy = 0;
	int m = 0;
	int d = 0;
};

void datee::set()
{
	int a;
	cout << "enter day" << endl;
	cin >> a;
	set_d(a);
	cout << "enter month" << endl;
	cin >> a;
	set_m(a);
	cout << "enter year" << endl;
	cin >> a;
	set_y(a);
};

void datee::setv()
{
	int a;
	cout << "enter day" << endl;
	cin >> a;
	set_d(a);
	cout << "enter month" << endl;
	cin >> a;
	set_m(a);
	cout << "enter year" << endl;
	cin >> a;
	set_yy(a);
};

void datee::set_d(int w)
{
	d = w >= 1 && w < 32 ? w : 1;
};

void datee::set_m(int w)
{
	m = w >= 1 && w < 13 ? w : 1;
};

void datee::set_y(int w)
{
	y = w >= 1300 && w < 1386 ? w : 1380;
};

void datee::set_yy(int u)
{
	yy = u;
};

void datee::print()const
{
	cout << "date ->" << y << " / " << m << " / " << d << endl;
};

int datee::get_d()const
{
	return d;
};

int datee::get_m()const
{
	return m;
};

int datee::get_y()const
{
	return y;
};

int datee::get_yy()const
{
	return yy;
};

void datee::printv()const
{
	cout << "date ->" << yy << " / " << m << " / " << d << endl;
};