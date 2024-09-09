// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
#include <iostream>
#include <string>
using namespace std;

class User
{
    int secret=123;
    public:
        string name= "default";
        void classMessage();
        void setSecret(const int &newscret){ secret=newscret;}
        int getSecret()const;
};

void User::classMessage(){
    cout<<"My name is "<<name<<endl;
}

int User::getSecret()const{
    return secret;
}

int main() {

    User sam,Mayank;
    sam.name="Sam";
    sam.classMessage();
    sam.setSecret(333);
    cout<<sam.getSecret()<<endl;

    Mayank.name="Mayank";
    Mayank.classMessage();

    const User rock;
    // rock.classMessage();
    rock.getSecret();

    User peter=sam; //copy constructor     
    return 0;
}