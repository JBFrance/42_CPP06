#include "Serializer.hpp"

int main(void)
{
	struct Data data;
	data.str1 = "Hello";
	data.str2 = "world";
	data.num = 42;

	Data *ptr = &data;

	std::cout << "pointer = " << ptr << std::endl;

	uintptr_t iptr = Serializer::serialize(ptr);
	std::cout << "int pointer: " << iptr << std:: endl;

	ptr = Serializer::deserialize(iptr);
	std::cout << "pointer = " << ptr << " value1 = " << ptr->str1 << "; value2 = " << ptr->str2 << "; value3 = " << ptr->num << std::endl;
};