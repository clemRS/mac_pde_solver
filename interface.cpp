#include "interface.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>


#include "rate.hpp"
#include "volatility.hpp"

namespace dauphine
{
	interface::interface()
	{
	}

	interface::interface(double spot, rate* r, double T, volatility* sig, class payoff* pay):
		 m_spot(spot), m_rate(r), m_maturity(T), m_vol(sig), m_payoff(pay)
	{
        	std::cout<<"interface constructor"<<std::endl;
	}

    interface::~interface(){}

    double interface::get_rate()
    {
        double s = 0;
        double t = 0;
    
        return m_rate->get_rate(s, t);
    }

    double interface::get_maturity()
    {
        return m_maturity;
    }

    double interface::get_vol()
    {
        double s = 0;
        double t = 0;
        return m_vol->get_sigma(s, t);
    }

    double interface::get_spot()
    {
        return m_spot;
    }

    payoff* interface::get_payoff()
    {
        return m_payoff;
    }

    void interface::set_spot(double spot)
    {
        this->m_spot = spot;
    }

    void interface::set_maturity(double t)
    {
        this->m_maturity = t;
    }

	
}

