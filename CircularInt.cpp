//
// Created by ori on 4/16/18.
//

#include <iostream>
#include "CircularInt.hpp"
using namespace std;


CircularInt::CircularInt(int x, int y){
    if (x<=y){
        lowlimit=x;
        highlimit=y;
        value=x;
    }
    else cout<<"low limit higher than high limit";
}
CircularInt& CircularInt:: operator = (int num){
    value=num;
    if (value>highlimit) {
        while (value > highlimit) {
            value -= (highlimit - lowlimit) + 1;
        }
    }
    else{
        while (value<lowlimit){
            value+=(highlimit-lowlimit)+1;
        }
    }
    return *this;
}

CircularInt& CircularInt:: operator += (int num){
    value+=num;
    while (value>highlimit){
        value-=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt& CircularInt:: operator += (CircularInt ci){
    value+=ci.value;
    while (value>highlimit){
        value-=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt CircularInt:: operator + (int num){
    CircularInt result(lowlimit,highlimit);
    result.value=value+num;
    while (result.value>highlimit){
        result.value-=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt CircularInt:: operator + (CircularInt ci){
    CircularInt result(lowlimit,highlimit);
    result.value=value+ci.value;
    while (result.value>highlimit){
        result.value-=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt& CircularInt:: operator -= (int num){
    value-=num;
    while (value<lowlimit){
        value+=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt& CircularInt:: operator -= (CircularInt ci){
    value-=ci.value;
    while (value<lowlimit){
        value+=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt CircularInt:: operator - (int num){
    CircularInt result(lowlimit,highlimit);
    result.value=value-num;
    while (result.value<lowlimit){
        result.value+=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt CircularInt:: operator - (CircularInt& ci){
    CircularInt result(lowlimit,highlimit);
    result.value=value-ci.value;
    while (result.value<lowlimit){
        result.value+=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt& operator-(int num, CircularInt& ci){
    ci.value=num-ci.value;
    while (ci.value<ci.lowlimit){
        ci.value+=(ci.highlimit-ci.lowlimit)+1;
    }
    return ci;
}

CircularInt CircularInt:: operator - (){
    CircularInt result(lowlimit,highlimit);
    result.value=0-this->value;
    while (result.value<lowlimit){
        result.value+=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt& CircularInt:: operator *= (int num){
    value*=num;
    while (value>highlimit){
        value-=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt& CircularInt:: operator *= (CircularInt ci){
    value*=ci.value;
    while (value>highlimit){
        value-=(highlimit-lowlimit)+1;
    }
    return *this;
}

CircularInt CircularInt:: operator * (int num){
    CircularInt result(lowlimit,highlimit);
    result.value=value*num;
    while (result.value>highlimit){
        result.value-=(highlimit-lowlimit)+1;
    }
    return result;
}

CircularInt CircularInt:: operator * (CircularInt ci) {
    CircularInt result(lowlimit, highlimit);
    result.value = value * ci.value;
    while (result.value > highlimit) {
        result.value -= (highlimit - lowlimit) + 1;
    }
    return result;
}


CircularInt& CircularInt:: operator ++ () {
    this->value++;
    if(this->value>highlimit)
        this->value=lowlimit;
    return *this;
}

CircularInt& CircularInt:: operator ++ (int num){
    num++;
    CircularInt result(lowlimit, highlimit);
    if(num>highlimit) {
        num = lowlimit;
    }
    result.value=num;
    return result;
}

CircularInt& CircularInt:: operator -- () {
    this->value--;
    if(this->value<lowlimit)
        this->value=highlimit;
    return *this;
}

CircularInt& CircularInt:: operator / (int num){

}

ostream& operator << (ostream& os , CircularInt ci){
    os << ci.value ;
}

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

