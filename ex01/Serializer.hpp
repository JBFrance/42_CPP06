#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
    int num;
    std::string str1;
    std::string str2;
};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif