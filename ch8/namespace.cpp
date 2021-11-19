#include "std_lib_facilities.h"

namespace X 
{
	int var;
	void print()
	{
		cout <<"X: "<<var<<endl;
	}
	
} //eddig tartott X

namespace Y 
{
	int var;
	void print()
	{
		cout <<"Y: "<<var<<endl;
	}
	
} //eddig tartott Y

namespace Z 
{
	int var;
	void print()
	{
		cout <<"Z: "<<var<<endl;
	}
	
} //eddig tartott Z


int main()
{
	X::var = 7;		// 7 el egyenlővé teszi
	X::print();		// kiirja
	using namespace Y;// Y-ont használ
	var = 9;		// 9 el egyenlővé teszi
	print();		// kiirja
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();	// print Z’s var
	}
	print();		// kívül még Y van használatban Y-t ír ki
	X::print();		// print X’s var
}
