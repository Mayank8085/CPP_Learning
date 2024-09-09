#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    double _length;
    double _breadth;


public:
    Rectangle(double l=1.0 , double b=1.0){
        _length=l;
        _breadth=b;
    };

    double Area(){
        return _length*_breadth;
    }

    bool campare(Rectangle rectangle){
        return this->Area()> rectangle.Area();

    }
   
};

int main()
{
    /* code */
    Rectangle h1(5.0,5.0);
    Rectangle h2(4.0,4.0);

    std::cout << h1.campare(h2) << std::endl;
    if (h1.campare(h2))
    {
        std::cout << "h1 has greater area" << std::endl;
    }
    else
    {
        std::cout << "h2 has greater area" << std::endl;
        
    }
    
    return 0;
}


