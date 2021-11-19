#include "std_lib_facilities.h"

void swap_v(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<< "a="<< a <<" b="<< b <<"\n";
}

void swap_r(int& a,int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<< "a="<< a <<" b="<< b <<"\n";
}
/*
void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}*/

int main()
{

int x = 7;
int y = 9;

swap_v(x,y);
swap_r(x,y);
swap_v(7,9);
//swap_r(7,9); error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’

const int cx = 7;
const int cy = 9;

swap_v(cx,cy);
//swap_r(cx,cy); error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers
swap_v(7.7,9.9);
//swap_r(7.7,9.9); error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers


double dx = 7.7;
double dy = 9.9;

swap_v(dx,dy); //működik, csak nem tizedeseket fog kiirni
//swap_r(dx,dy); error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
swap_v(7.7,9.9);
//swap_r(7.7,9.9); error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’



return 0;
}
