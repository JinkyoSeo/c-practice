#include <iostream>
#include <string.h>

char name[] = "�۷ι� ����";

class Product{
	public:
		Product();
	private:
		char name[100];
}; 

Product::Product()
{
	char name[] = "���� ����";
	strcpy(Product::name, "��� ����");
	
	std::cout << "name =" << name << std::endl ;
	std::cout << "name =" << Product::name << std::endl;
	std::cout << "name =" << ::name << std::endl; 
}

int main()
{
	Product myProduct;
	
	return 0;

}
