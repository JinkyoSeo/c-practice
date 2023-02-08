#include <iostream>
using namespace std;

void swap1(int &x, int &y);
void swap2(int x, int y);


int main() {
	int x = 50 ;
	int y = 100;
	cout << "x = " << x << ", y = " << y << endl;
	swap1(x,y);
	cout << "swap1 : x = "<< x << " y = " << y << endl;
	swap2(x,y);
	cout << "swap2 : x = "<< x << " y = " << y << endl;
	
	return 0;
}

void swap1(int &x, int &y){
	int c;
	c = x;
	x = y;
	y = c;
	
}

void swap2(int x, int y){
	int z;
	z = x;
	x = y;
	y = z;
}

