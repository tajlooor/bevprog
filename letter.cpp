#include "std_lib_facilities.h"

int main()
{
	
	string first_name;
	cout <<"Enter the name of the person u want to write to:";	
	cin >> first_name;
	cout <<"Dear " <<first_name << "\n\n";
	cout <<"How are u? I am fine. I miss u.\n";
	
	string friend_name;
	cout <<"Please enter the name of your friend:";
	cin >>friend_name;
	cout <<"Have u seen " << friend_name <<" lately?\n";
	
	char friend_sex=0;
	cout <<"Please enter 'f' if the friend is female or 'm' if male.\n";
	cin >> friend_sex;
	
	if(friend_sex == 'm')
		cout <<"If u see "<< friend_name <<" please ask him to call me.\n";
	if(friend_sex == 'f')
		cout <<"If u see "<< friend_name <<" please ask her to call me.\n";
	
	int age;
	cout <<"Please enter the age of recipient: \n";
	cin >> age;
	cout <<"I hear u just had a birthday and u are "<< age << " years old.\n";
	
	if (age <=0 || age >= 110)
		cout <<"You'r kidding!\n";
	if (age < 12)
		cout <<"Next year u will be " << age+1 <<".\n";
	else if (age == 17)
		cout <<"Next year u will able to vote.\n";
	else if (age > 70)
		cout <<"I hope u are enjoying retirement.\n";
	
	cout <<"Yours sincerely, \n\n";
	cout <<"Szabolcs\n";

	return 0;
}
