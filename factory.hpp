#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <iostream>
#include <typeinfo> 
#include <string>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"


using namespace std;

class factory {



public:

	Base* parse ( char** input, int length) {
	
		int i = 1;
		Base* root = nullptr;

		while( i < length ){
		
			if ( i == 1){
				try {
				    double test = stod(input[i]);
			            root = new Op (test);
				}//ensure proper first input
				catch(exception&e)
				{
					cout << "ERROR!" << endl;
					return nullptr;	
				}//end catch 
				
			}//check to get first number input
 
			else if(strcmp(input[i], "+" ) == 0){
				Base* left = root;
				//ensure next
				 try {
                                    double test = stod(input[++i]);
			           
				    root = new Add (left, new Op(test) );
                                }//ensure proper first input


                                catch(exception&e)
                                {
                                        cout << "ERROR!" << endl;
                                        return nullptr;
                                }//end catch



			}//check plus

			else if(strcmp(input[i], "-" ) == 0){
				Base* left = root;
				//ensure next
				 try {
                                    double test = stod(input[++i]);
				    root = new Sub (left, new Op(test) );
                                }//ensure proper first input


                                catch(exception&e)
                                {
                                        cout << "ERROR!" << endl;
                                        return nullptr;
                                }//end catch



			}//check minus




			else if(strcmp(input[i], "*" ) == 0){
				Base* left = root;
				//ensure next
				 try {
                                    double test = stod(input[++i]);
				    root = new Mult (left, new Op(test) );
                                }//ensure proper first input


                                catch(exception&e)
                                {
                                        cout << "ERROR!" << endl;
                                        return nullptr;
                                }//end catch



			}//check mult



			else if(strcmp(input[i], "/" ) == 0){
				Base* left = root;
				//ensure next
				 try {
                                    double test = stod(input[++i]);
				    root = new Div (left, new Op(test) );
                                }//ensure proper first input


                                catch(exception&e)
                                {
                                        cout << "ERROR!" << endl;
                                        return nullptr;
                                }//end catch



			}//check div




			else if(strcmp(input[i], "**" ) == 0){
				Base* left = root;
				//ensure next
				 try {
                                    double test = stod(input[++i]);
				    root = new Pow (left, new Op(test) );
                                }//ensure proper first input


                                catch(exception&e)
                                {
                                        cout << "ERROR!" << endl;
                                        return nullptr;
                                }//end catch



			}//check pow


			else {
				cout << "ERROR!" << endl;
				return nullptr;
			}//end else 

			++i; //increment for some reason 


		}//end while 
		
			return root;

	}//end Base 



};//end factory class 














#endif

