#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b){
    int tmp=move(a);
    a=move(b);
    b=move(tmp);
}

string printMe(){
    return "I am Print";
}

int main(int argc, char const *argv[])
{
    
    int a=3;
    int b=4;
    swap(a,b);
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;

    string&& ss=printMe();
    cout<<ss<<endl;
    return 0;
}
