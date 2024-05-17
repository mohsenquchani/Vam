#include "zamen.h"
#include"datee.h"
#ifndef ghest_h
#define ghest_h
class ghest
{
private:
	string ful_name;
	string dad_name;
	string emp;
	float request;
	float total(float);
	float tota;
	float ever(float, float);
	float tedadz;
	int static idd;
	float siz;
	float yt;
	datee* po;
	datee varizz;
	zamen* FF;

public:
	ghest();
	void set();
	void set_ful_name(string);
	void set_emp(string);
	void set_dad_name(string);
	void set_request(int);
	int get_request() const;
	void set_tedadz(int);
	int get_tedadz() const;
	int get_id() const;
	void set_siz(int);
	int get_siz()const;
	void print()const;

};
#endif