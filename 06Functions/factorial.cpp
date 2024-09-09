#include <iostream>
int factorial(int n);

int main(){
    
    // Factorial : 5*4*3*2*1
    //Factorial :  1*2*3*4*5
    
    int n;
    
    std::cout << "Enter a value: ";
    std::cin >> n;
    
    std::cout << "Your result for factorial is: " << factorial(n) << std::endl;
    
    return 0;
}

int factorial(int n){
    
    if (n > 1) {
         return n * factorial(n -1);
    } else {
        return 1;
    }
}
