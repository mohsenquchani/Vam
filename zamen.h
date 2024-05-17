#include<string.h>
#include"datee.h"
#include <iostream>

#ifndef zamen_h
#define zamen_h
using namespace std;
class zamen
{
private:
	string ful_name;
	string dad_name;
	datee DD;
public:
	zamen();
	void set();
	void set_f_n(string);
	void set_d_n(string);
	void print()const;
};
#endif