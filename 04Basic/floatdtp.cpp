#include <iostream>


using namespace std;

int main() {
    
    printf("Float size is %ld bits\n", sizeof(long double) * 8);
    
    float my_p_value = 20.2 + 20.2;
    
    if (my_p_value == 40.4) {
        puts("You got it right");
    }else{
        puts("something");
    }
    
    printf("My P value is: %1.3f in float\n", my_p_value);
    
    return 0;
}