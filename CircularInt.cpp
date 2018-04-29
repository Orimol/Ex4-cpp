#include "CircularInt.hpp"


CircularInt::CircularInt (int x, int y){
	if(x<=y){
	lowLimit=x;
	highLimit=y;
	value=lowLimit;
	}
	else cout<<"The highLimit must be bigger than lowLimit"<<endl;
}

CircularInt::~CircularInt(){};

int CircularInt::modulo(int x){
	while(x>highLimit){
		x=x-(highLimit-lowLimit+1);
	}
	while(x<lowLimit){
		x=x+(highLimit-lowLimit+1);
	}
	return x;
}


std::ostream& operator<<(std::ostream& o, CircularInt const& ci){
	return o<<ci.value;
}

std::istream& operator>> (std::istream& o, CircularInt& ci)
{
    int num;
    o >> num;
		ci.value=ci.modulo(num);
    return o;
}

CircularInt CircularInt::operator + (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=result.modulo(value+num);
	return result;
}

CircularInt CircularInt::operator + (CircularInt const ci){
	CircularInt result(lowLimit,highLimit);
	result.value=result.modulo(value+ci.value);
	return result;
}

CircularInt CircularInt::operator - (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=result.modulo(value-num);
	return result;
}

CircularInt CircularInt::operator - (CircularInt ci){
	CircularInt result(lowLimit,highLimit);
	result.value=result.modulo(value-ci.value);
	return result;
}
//---------------------------------------------------------------------------------------
CircularInt& CircularInt::operator += (int num){
	value=modulo(value+num);
	return *this;
}

CircularInt& CircularInt::operator += (CircularInt const& ci){
	value=modulo(value+ci.value);
	return *this;
}

CircularInt& CircularInt::operator -= (const int num){
	value=modulo(value-num);
	return *this;
}


CircularInt& CircularInt::operator -= (const CircularInt ci){
	value=modulo(value-ci.value);
	return *this;
}

CircularInt& CircularInt::operator *= (const int num){
	value=modulo(value*num);
	return *this;
}

CircularInt& CircularInt::operator *= (const CircularInt ci){
	value=modulo(value*ci.value);
	return *this;
}

CircularInt& CircularInt::operator ++ (int){
	value=modulo(value++);
	return *this;
}

CircularInt& CircularInt::operator -- (int){
	value=modulo(value--);
	return *this;
}

CircularInt CircularInt::operator - (){
	CircularInt result(lowLimit,highLimit);
	result.value=modulo(-value);
	return result;
}

CircularInt operator - (int num, const CircularInt& ci){
	CircularInt result(ci.lowLimit,ci.highLimit);
	result.value=modulo(num-ci.value);
	return result;
}

CircularInt operator + (int num, const CircularInt& ci){
	CircularInt result(ci.lowLimit,ci.highLimit);
	result.value=modulo(num+ci.value);

	return result;
}

CircularInt CircularInt::operator ^ (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=modulo(value^num);
	return result;
}

CircularInt CircularInt::operator ^ (const CircularInt ci){
	CircularInt result(lowLimit,highLimit);
	result.value=modulo(value^ci.value);
	return result;
}

bool CircularInt::operator ==(int num){
	CircularInt result(lowLimit,highLimit);
	if(value==modulo(num)) return true;
	return false;
}

bool CircularInt::operator ==(const CircularInt ci){
	if(value==ci.value) return true;
	return false;
}

bool operator == (int num, const CircularInt& ci){
	if(modulo(num)==ci.value) return true;
	return false;
}

CircularInt CircularInt::operator/(int a){
  CircularInt tmp(min,max);
  if( hour%a == 0 ){
    int ans = hour/a;
    tmp.hour = modulo(ans);
    return tmp;
  }
  throw std::invalid_argument( "There is no such a number\n" );
}
CircularInt CircularInt::operator/(const CircularInt other){
  CircularInt tmp(min,max);
  if( hour%other.hour == 0 ){
    int ans = hour/other.hour;
    tmp.hour = modulo(ans);
    return tmp;
  }
  throw std::invalid_argument( "There is no such a number\n" );
}
	return result;
}
;
