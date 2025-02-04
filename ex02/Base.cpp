#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base::~Base()
{
};


void identify(Base* p)
{
    	std::cout << "Pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
};


void identify(Base& p)
{
    std::cout << "Reference: ";
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
};


Base * generate()
{
    srand(time(NULL));
    int randNum = (rand() % 3);
    
    if (randNum == 0)
        return new A;
    else if (randNum == 1)
        return new B;
    else
        return new C;

};