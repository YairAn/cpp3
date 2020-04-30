#include <iostream>
#include <complex>
using namespace std;


namespace solver{



class RealVariable{
    public:
    double d;
    RealVariable(){
        d = 0;
    }
    RealVariable(double x){
        d=x;
    }


};
class ComplexVariable{
    public:
    complex<double> c;
    ComplexVariable():c(0.0,0.0){}
    ComplexVariable(double re,double im):c(re,im){}  
 
};

     const complex<double> solve(ComplexVariable c);
     double solve(RealVariable r);





RealVariable operator==(RealVariable x ,RealVariable other);
 RealVariable operator*(double other,RealVariable t) ;
 RealVariable operator*(RealVariable t,double other) ;
 RealVariable operator-(RealVariable t,RealVariable other) ;
 RealVariable operator^(RealVariable R,int other) ;
  RealVariable operator^(RealVariable R,RealVariable other) ;

RealVariable operator+(RealVariable x ,RealVariable other);
RealVariable operator/(RealVariable x ,RealVariable other);


ComplexVariable operator==(ComplexVariable x ,double other);
 ComplexVariable operator==(ComplexVariable x ,ComplexVariable other);
 ComplexVariable operator*(double other,ComplexVariable t) ;
 ComplexVariable operator*(ComplexVariable t,double other) ;
 ComplexVariable operator-(ComplexVariable t,ComplexVariable other) ;
 ComplexVariable operator-(ComplexVariable t,double other) ;
 ComplexVariable operator-(double t,ComplexVariable other) ;

 ComplexVariable operator^(ComplexVariable R,double other) ;
ComplexVariable operator+(ComplexVariable x ,ComplexVariable other);
ComplexVariable operator+(ComplexVariable x ,complex<double> other);
ComplexVariable operator+(double x ,ComplexVariable other);


ComplexVariable operator/(ComplexVariable x ,ComplexVariable other);

  ComplexVariable operator/(ComplexVariable x ,double other);


}