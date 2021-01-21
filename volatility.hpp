#ifndef volatility_hpp
#define volatility_hpp

#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <numeric>
#include <functional>
#include <stdio.h>

namespace dauphine
{
    class volatility
     {
     public:
         explicit volatility();
         virtual ~volatility();
         virtual double get_sigma(double s, double t) = 0; // returns the volatility at space point s and time t
         
     };


     class vol_cst: public volatility
     {
     public:
         vol_cst(double initial_sigma);
         ~vol_cst();
         double get_sigma(double s, double t);
         
     private:
         double sigma;
     };
}

#endif
