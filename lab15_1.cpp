#include <iostream>
#include <string>
using namespace std;

int main(){	
int a=5;
string b="A";
string &c=b;
int *x=&a;
string *y=&b;
int **z=&x;
	cout << y;
	return 0;
}
