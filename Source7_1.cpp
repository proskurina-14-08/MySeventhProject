#include <iostream>

int main()
{
	short shortVariable{ 1 };
	int intVariable{ 100 };
	long longVariable{ 100000000 };
	long long longLongVariable{ 100000000000 };
	float floatVariable{ 0.1f };
	double doubleVariable{ 100.01 };
	long double longDoubleVariable{ 10000000.0001 };
	bool boolVariable{ true };

	std::cout << "short: " << &shortVariable << " " << sizeof(shortVariable) << std::endl;
	std::cout << "int: " << &intVariable << " " << sizeof(intVariable) << std::endl;
	std::cout << "long: " << &longVariable << " " << sizeof(longVariable) << std::endl;
	std::cout << "long long: " << &longLongVariable << " " << sizeof(longLongVariable) << std::endl;
	std::cout << "float: " << &floatVariable << " " << sizeof(floatVariable) << std::endl;
	std::cout << "double: " << &doubleVariable << " " << sizeof(doubleVariable) << std::endl;
	std::cout << "long double: " << &longDoubleVariable << " " << sizeof(longDoubleVariable) << std::endl;
	std::cout << "bool: " << &boolVariable << " " << sizeof(boolVariable) << std::endl;

	return EXIT_SUCCESS;
}