#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    
    []{"Hello MayankSahu";}();

    auto sum =[](auto a ,auto b){return a+b;};

    cout<<sum(3,4)<<endl;
    
    cout<<sum(3.5,4.6);


    return 0;
}
