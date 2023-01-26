#include <iostream>
#include <string.h>

char name[] = "글로벌 변수";

class Product{
	public:
		Product();
	private:
		char name[100];
}; 

Product::Product()
{
	char name[] = "로컬 변수";
	strcpy(Product::name, "멤버 변수");
	
	std::cout << "name =" << name << std::endl ;
	std::cout << "name =" << Product::name << std::endl;
	std::cout << "name =" << ::name << std::endl; 
}

int main()
{
	Product myProduct;
	
	return 0;

}
