#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "factory.hpp"

int main(int argc, char** argv) {

factory* nacl;

Base* result = nacl->parse(argv, argc);

if(result == nullptr)
{
	return 0;
}
cout << "Result: " << result->stringify() << "=" <<  result->evaluate() << endl;

    return 0;
}//end main


