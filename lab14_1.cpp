#include <iostream>
using namespace std;


int main(){
	int a = 5 ;
	char b = 'A' ;
	char &c = b ;
	int *x = &a ;
	char *y = &b ;
	int **z = &x ;

	cout << "a = " << a << "\n";
	cout << "b = " << b<< "\n";
	cout << "c = " << c<< "\n";
	cout << "x = " << x<< "\n";
	cout << "y = " << y<< "\n";
	cout << "z = " << z<< "\n"<< "\n";

	cout << "&a = " << &a<< "\n";
	cout << "&b = " << &b<< "\n";
	cout << "&c = " << &c<< "\n";
	cout << "&x = " << &x<< "\n";
	cout << "&y = " << &y<< "\n";
	cout << "&z = " << &z<< "\n"<< "\n";

	c = 'F';
	cout << "a = " << a << "\n";
	cout << "b = " << b<< "\n";
	cout << "c = " << c<< "\n";
	cout << "x = " << x<< "\n";
	cout << "y = " << y<< "\n";
	cout << "z = " << z<< "\n"<< "\n";
	
	*y = 'W' ;
	cout << "a = " << a << "\n";
	cout << "b = " << b<< "\n";
	cout << "c = " << c<< "\n";
	cout << "x = " << x<< "\n";
	cout << "y = " << y<< "\n";
	cout << "z = " << z<< "\n"<< "\n";

	*x = 6 ;
	cout << "a = " << a << "\n";
	cout << "b = " << b<< "\n";
	cout << "c = " << c<< "\n";
	cout << "x = " << x<< "\n";
	cout << "y = " << y<< "\n";
	cout << "z = " << z<< "\n"<< "\n";

	**z = 7 ;
	cout << "a = " << a << "\n";
	cout << "b = " << b<< "\n";
	cout << "c = " << c<< "\n";
	cout << "x = " << x<< "\n";
	cout << "y = " << y<< "\n";
	cout << "z = " << z<< "\n"<< "\n";

	return 0;
}
