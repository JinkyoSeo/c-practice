#include <iostream>

class Point{
	public:
		void Print();
	    Point();
	    void SetXY(int numX, int numY);
	    void MoveLeft();
	    void MoveRight();
	private:
		int x, y;
};

Point::Point(){
	x = 50 ;
	y = 50 ;
	
	Print();
}

void Point::SetXY(int numX, int numY){
	x = numX ;
	y = numY ;
	
}

void Point::MoveLeft(){
	x -= 1;
	Print();
}

void Point::MoveRight(){
	x += 1;
	Print();
}

void Point::Print(){
	std::cout << "x : " << x << ", y : " << y << std::endl;
}

int main()
{
	Point point1 ;
	
	point1.SetXY(30, 100);
	point1.Print();
	
	point1.MoveLeft();
	point1.MoveLeft();
	point1.MoveRight();
	point1.MoveLeft();
	 
	return 0;
}
