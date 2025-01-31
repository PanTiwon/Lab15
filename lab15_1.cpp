#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int* x = &a;
	char* y = &b;
	int** z = &x;
	cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
	cout << (void *)&a << " " << (void *)&b << " " << (void *)&c << " " << (void *)&x << " " << (void *)&y << " " << (void *)&z << endl;
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " <<(void *) y << " " << z << endl;
	b = 'W';
	*y = b; 	
	cout << a << " " << b << " " << c << " " << x << " " <<(void *) y << " " << z << endl;
	a = 6;
	*x = a;
	cout << a << " " << b << " " << c << " " << x << " " <<(void *) y << " " << z << endl;
	a = 7;
	**z = a;
	cout << a << " " << b << " " << c << " " << x << " " <<(void *) y << " " << z << endl;
	return 0;
}