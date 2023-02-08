#include <iostream>
#include <stdio.h>
using namespace std;

void ShowString(const char str[]) ;

int main()
{
    
	ShowString("good");
	
	return 0;
}

void ShowString(const char str[]){
	cout << "String is " << str << endl;
	//str[10] = '@' ;
	//str[20] = '.' ;
}


