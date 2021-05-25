#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include <bits/stdc++.h>
using namespace std;
#include <string.h>
#include <math.h>

class Pow : public Base {

private:
        double value1;
        double value2;
        string paraOne;
        string paraTwo;
	Base* left;
	Base* right;	

public:
	~Pow() {
		delete this->left;
		delete this->right;
                delete this;
        }

        Pow(Base* para1, Base* para2) : Base() {
                value1 = para1->evaluate();
                value2 = para2->evaluate();
                paraOne = para1->stringify();
                paraTwo = para2->stringify();
		this->left = para1;
		this->right = para2;
         }
        virtual double evaluate() { return pow(value1, value2); }
        virtual std::string stringify()
        {

                 return "(" + paraOne + "**" + paraTwo + ")";

         }//end stringify function
};

#endif
