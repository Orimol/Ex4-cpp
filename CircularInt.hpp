#include <iostream>
using namespace std;

class CircularInt{
private:
    int value;
    int lowLimit;
    int highLimit;

public:
//Constractor and Destractor
    CircularInt (int x, int y);
    ~CircularInt();

//Methods

    int modulo(int x);

    friend std::ostream& operator<<(std::ostream& o, CircularInt const& ci);

    friend std::istream& operator>>(std::istream& o, CircularInt &ci);

    CircularInt operator * (CircularInt const ci);

    CircularInt& operator = (int num);

    CircularInt operator + (int num);

    CircularInt operator + (CircularInt const ci);

    friend CircularInt operator + (int num, const CircularInt& ci);

    CircularInt operator - (int num);

    CircularInt operator - (CircularInt const ci);

    friend CircularInt operator - (int num, const CircularInt& ci);

    CircularInt operator - ();

    CircularInt& operator += (int num);

    CircularInt& operator += (CircularInt const& ci);

    CircularInt& operator -= (int num);

    CircularInt& operator -= (CircularInt const ci);

    CircularInt& operator *= (int num);

    CircularInt& operator *= (CircularInt const ci);

    const CircularInt operator ++ (int);

    CircularInt& operator++();

    const CircularInt operator --(int);

    CircularInt& operator--();

    CircularInt operator / (int num);

    CircularInt operator / (CircularInt ci);

    friend CircularInt operator / (int num, const CircularInt& ci);

    CircularInt& operator /= (int num);

    CircularInt& operator /= (const CircularInt& ci);

    CircularInt operator ^(int num);

    CircularInt operator ^(CircularInt const ci);

    bool operator ==(int num);

    bool operator ==(CircularInt const ci);

    friend bool operator == (int num, const CircularInt& ci);

    bool operator != (int num);

    bool operator != (const CircularInt& other);

    friend bool operator!=(int num, const CircularInt& ci);

    bool operator < (int num);

    bool operator < (const CircularInt& other);

    friend bool operator < (int num, const CircularInt& ci);

    bool operator > (int num);

    bool operator > (const CircularInt& other);

    friend bool operator > (int num, const CircularInt& ci);

    bool operator <= (int num);

    bool operator <= (const CircularInt& other);

    friend bool operator <= (int num, const CircularInt& ci);

    bool operator >= (int num);

    bool operator >= (const CircularInt& other);

    friend bool operator >= (int num, const CircularInt& ci);

};