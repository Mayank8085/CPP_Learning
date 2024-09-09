#include <iostream>
#include <string>
using namespace std;

class One
{

public:
     virtual void sayOne(){
        puts("I am One");
    }
};

class Two: public One
{

public:
    void sayOne(){
        puts("I am Two");
    }
};

class Three: public One
{

public:
    void sayOne(){
        puts("I am Three");
    }
};

int main()
{
    
    One *a; 
    Two b;
    Three c;
    a=&b;
    a->sayOne();

     a=&c;
    a->sayOne();
     

    return 0;
}

