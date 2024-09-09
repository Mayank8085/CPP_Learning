#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    
    string firstName, lastName;
    cout<<"Enter your first Name: ";
    getline(cin,firstName);
    cout<<"Enter your last Name: ";
    getline(cin,lastName);
    cout<<"Your Name is "<< firstName +" "+ lastName<<endl;
    return 0;



}
