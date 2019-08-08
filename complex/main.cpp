//
//  main.cpp
//  complex
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include "complex.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Complex c1(3,4),c2(5,-10),c3;
    c3 = c1 +c2;
    cout <<"c1 = ";c1.display();
    cout <<"c2 = ";c2.display();
    cout <<"c1 + c2 = ";c3.display();
    return 0;
}
