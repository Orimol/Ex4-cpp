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

friend std::ostream& operator<<(std::ostream& o, CircularInt const& ci);

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

CircularInt& operator ++ (int);

CircularInt& operator --(int);

CircularInt operator / (int num);

CircularInt operator ^(int num);

CircularInt operator ^(CircularInt const ci);

bool operator ==(int num);

bool operator ==(CircularInt const ci);

friend CircularInt operator == (int num, const CircularInt& ci);


};
