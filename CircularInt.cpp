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

std::ostream& operator<<(std::ostream& o, CircularInt const& ci){
	return o<<ci.value;
}


CircularInt CircularInt::operator + (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=value+num;
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	return result;
}

CircularInt CircularInt::operator + (CircularInt const ci){
	CircularInt result(lowLimit,highLimit);
	result.value=value+ci.value;
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	return result;
}

CircularInt& CircularInt::operator += (int num){
	value=value+num;
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt& CircularInt::operator += (CircularInt const& ci){
	value=value+ci.value;
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt CircularInt::operator - (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=value-num;
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}
	return result;
}

CircularInt CircularInt::operator - (CircularInt ci){
	CircularInt result(lowLimit,highLimit);
	result.value=value-ci.value;
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}
	return result;
}

CircularInt& CircularInt::operator -= (const int num){
	value=value-num;
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	return *this;
}


CircularInt& CircularInt::operator -= (const CircularInt ci){
	value=value-ci.value;
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt& CircularInt::operator *= (const int num){
	value=value*num;
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt& CircularInt::operator *= (const CircularInt ci){
	value=value*ci.value;
	while(value<lowLimit){
		value=value+(highLimit-lowLimit+1);
	}
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt& CircularInt::operator ++ (int){
	value++;
	while(value>highLimit){
		value=value-(highLimit-lowLimit+1);
	}
	return *this;
}

CircularInt CircularInt::operator - (){
	CircularInt result(lowLimit,highLimit);
	result.value=-value;
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}

	return result;
}

CircularInt operator - (int num, const CircularInt& ci){
	CircularInt result(ci.lowLimit,ci.highLimit);
	result.value=num-ci.value;
	while(result.value<ci.lowLimit){
		result.value=result.value+(ci.highLimit-ci.lowLimit+1);
	}
	while(result.value>ci.highLimit){
		result.value=result.value-(ci.highLimit-ci.lowLimit+1);
	}

	return result;
}

CircularInt CircularInt::operator / (int num){
	CircularInt result(lowLimit,highLimit);
	result.value=value/num;
	while(result.value<lowLimit){
		result.value=result.value+(highLimit-lowLimit+1);
	}
	while(result.value>highLimit){
		result.value=result.value-(highLimit-lowLimit+1);
	}

	return result;
}
;
