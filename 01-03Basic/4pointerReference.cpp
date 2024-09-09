#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int score =200;
    int *myp=&score;
    cout<<"value of score is"<<score<<endl;
    cout<<"value of pointer is"<<myp<<endl;
    printf("value of pointer is %d \n",myp);

    int &anotherScore =score;
    anotherScore=800;
    cout<<"value of score is"<<score<<endl;
    cout<<"value of pointer is"<<myp<<endl;
    printf("value of pointer is %p \n",myp);


    return 0;
}
