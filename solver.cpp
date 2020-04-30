#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
using namespace solver;

 const complex<double> solver::solve(ComplexVariable c){
     return NULL;
 }
     double solver::solve(RealVariable r){
         return 9;
     }
RealVariable solver::operator==(RealVariable x ,RealVariable other){  return 0;}
 RealVariable solver::operator*(double other,RealVariable t) {  return 0;}
 RealVariable solver::operator*(RealVariable t,double other) {  return 0;}
 RealVariable solver::operator-(RealVariable t,RealVariable other) {  return 0;}
 RealVariable solver::operator^(RealVariable R,int other) {  return 0;}
   RealVariable operator^(RealVariable R,RealVariable other) {return 0;}

RealVariable solver::operator+(RealVariable x ,RealVariable other){  return 0;}
RealVariable solver::operator/(RealVariable x ,RealVariable other){  return 0;}

ComplexVariable c;
ComplexVariable solver::operator==(ComplexVariable x ,double other){  return c;}
 ComplexVariable solver::operator==(ComplexVariable x ,ComplexVariable other) {  return c;}
 ComplexVariable solver::operator*(double other,ComplexVariable t) {return c;}
 ComplexVariable solver::operator*(ComplexVariable t,double other) {return c;}
 ComplexVariable solver::operator-(ComplexVariable t,ComplexVariable other) {return c;}
 ComplexVariable solver::operator-(ComplexVariable t,double other) {return c;}

 ComplexVariable solver::operator^(ComplexVariable R,double other) {return c;}
ComplexVariable solver::operator+(ComplexVariable x ,ComplexVariable other){return c;}
ComplexVariable solver::operator+(ComplexVariable x ,complex<double> other){return c;}
ComplexVariable solver::operator+(double x ,ComplexVariable other){return c;}


ComplexVariable solver::operator/(ComplexVariable x ,ComplexVariable other){return c;}

  ComplexVariable solver::operator/(ComplexVariable x ,double other){return c;}

