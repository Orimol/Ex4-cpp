//
// Created by ori on 4/22/18.
//

#ifndef EX4_CIRCULARINT_HPP
#define EX4_CIRCULARINT_HPP

#endif //EX4_CIRCULARINT_HPP
#include <iostream>
using namespace std;

class CircularInt {
private:
    int lowlimit, highlimit;
    int value;
public:
    CircularInt(int x, int y);
    CircularInt& operator = (int num);

    CircularInt& operator += (int num);

    CircularInt& operator += (CircularInt ci);

    CircularInt operator + (int num);

    CircularInt operator + (CircularInt ci);

    CircularInt& operator -= (int num);

    CircularInt& operator -= (CircularInt ci);

    CircularInt operator - (int num);

    CircularInt operator - (CircularInt& ci);

    friend CircularInt& operator-(int num, CircularInt& ci);

    CircularInt operator - ();

    CircularInt& operator *= (int num);

    CircularInt& operator *= (CircularInt ci);

    CircularInt operator * (int num);

    CircularInt operator * (CircularInt ci);

    CircularInt& operator ++ ();

    CircularInt& operator ++ (int num);

    CircularInt& operator -- ();

    CircularInt& operator / (int num);

    friend ostream& operator << (ostream& os, CircularInt ci);

  /*  CircularInt operator ++ (CircularInt ci) {
        CircularInt result(ci.lowlimit, ci.highlimit);
        result.value =ci.value+1;
        if(result.value>ci.highlimit)
            result.value=ci.lowlimit;
        return result;
    }

    CircularInt operator -- (CircularInt ci) {
        CircularInt result(ci.lowlimit, ci.highlimit);
        result.value =ci.value-1;
        if(result.value<ci.lowlimit)
            result.value=ci.highlimit;
        return result;
    }
*/


};
