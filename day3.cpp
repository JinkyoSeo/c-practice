#include <iostream>
#include <cstring>
class Person{
	public:
		int age;
	    char name[10];
};

int main()
{
	Person kim ; 
	kim.age = 23 ;
	strcpy(kim.name, "Sunghoon");
	std::cout << "이름 : " << kim.name << std::endl;
	std::cout << "나이 : " << kim.age << std::endl;
	 
	return 0;
}
