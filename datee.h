#ifndef datee_h
#define datee_h
class datee
{
private:
	int y, m, d, yy;

public:
	datee();
	void set();
	void setv();
	void set_y(int);
	void set_yy(int);
	void set_m(int);
	void set_d(int);
	int get_y() const;
	int get_yy() const;
	int get_m() const;
	int get_d() const;
	void print()const;
	void printv()const;
};
#endif