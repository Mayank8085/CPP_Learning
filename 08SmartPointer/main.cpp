#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User{
public:
    User(){
        cout << "User created\n";
    }
    ~User(){
        cout << "User destroyed\n";
    }
    
    void testFunc(){
        cout << "I am a test function\n";
    }
};


int main()
{
  
    {
//        unique_ptr<User> sam(new User()); // non fav. way of developers
        
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();
        
//        unique_ptr<User> samm = sam;  NOT ALLOWED
        
    }
    
    {
//        shared_ptr<User> tim(new User());
        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim =  tim;
        shared_ptr<User> timm = tim;
    }
    
    
    cout << "outside code\n";
    
    return 0;
    
}
