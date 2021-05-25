#ifndef SUB_HPP
#define SUB_HPP

#include "base.hpp"
#include <bits/stdc++.h>
using namespace std;
#include <string.h>

class Sub : public Base {

private:
        double value1;
        double value2;
        string paraOne;
        string paraTwo;
	Base* left;
	Base* right;
	
public:
	~Sub() {
		delete this->left;
		delete this->right;
		delete this;
	}
        Sub(Base* para1, Base* para2) : Base() {
                value1 = para1->evaluate();
                value2 = para2->evaluate();
                paraOne = para1->stringify();
                paraTwo = para2->stringify();
		this->left = para1;
		this->right = para2;
         }
        virtual double evaluate() { return (value1 - value2); }
        virtual std::string stringify()
        {

                 return "(" + paraOne + "-" + paraTwo + ")";

         }//end stringify function
};

#endif
