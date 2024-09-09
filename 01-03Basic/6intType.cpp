//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    //1 byte is of 8 bits
    
    printf("Size of this data type is %ld bits\n", sizeof(uint16_t) * 8);
    
    int fun = 0b00010110;
    printf("Fun value is %d\n", fun);
    
    
    return 0;
}
