#include <iostream>
#include <string>
using namespace std;

class Money
{

public:
   
   void gotMoney(){
        puts("Got 5k USD in my account");  
   }
};

class Man
{
private:
    string _name;
    int _age;
    Man(){};

    friend class Superman;

protected:
    Man(const string &name, const int &age)
        : _name(name), _age(age){};

    void run() { puts("I  can Run"); }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is: " << _name <<" and age is: "<<_age<< endl;
}

//superman
class Superman : public Man
{
private:
    bool flight;

public:
    Superman(string name) : Man(name, 26) {}

    void run()
    {
        printf("I can run at light speed %d \n", _age);
    }
};

//superman
class Spiderman : public Man, public Money
{
private:
    bool webbling;

public:
    Spiderman(string name) : Man(name, 19) {}

    void run()
    {
        puts("I can run at normal speed");
    }
};

int main()
{
    /* code */

    Superman Kent=Superman("Kent");
    Kent.sayName();
    Kent.run();

    Spiderman Peter=Spiderman("Peter");
    Peter.sayName();
    Peter.run();
    Peter.gotMoney();

    return 0;
}
