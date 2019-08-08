//
//  complex.hpp
//  complex
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>

class Complex
{
public:
    Complex(){real = 0;imag = 0;}
    Complex(double r,double i){real = r;imag = i;}
    Complex operator + (Complex &c2);
    void display();
private:
    double real;
    double imag;
};


#endif /* complex_hpp */
