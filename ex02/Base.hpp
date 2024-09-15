#ifndef BASE_HPP
# define BASE_HPP
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};
        
Base * generate(void); 
void identify(Base* p);
void identify(Base& p);


//Notes:
//It randomly instanciates A, B, or C and returns the instance as a Base pointer. Anything for random choice implement
//Prints actual type pointed to by p:"A", "B", "C"
//Prints the actual type of object pointed to p: A, B, C. Using a pointer in this function is forbidden

#endif