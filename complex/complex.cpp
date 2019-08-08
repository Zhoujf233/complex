//
//  complex.cpp
//  complex
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include "complex.hpp"
#include <iostream>
using namespace std;

Complex Complex::operator + (Complex &c2)
{
    Complex c;
    c.real = real + c2.real;
    c.imag = imag + c2.imag;
    return c;
}

void Complex::display()
{
    cout <<"("<<real<<","<<imag<<"i)"<<endl;
}
