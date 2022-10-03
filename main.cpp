
#include <iostream>
#include <fibonacci.hpp>

int main()
{
	Fibonacci obj_fib;
	auto result = obj_fib.getFib(80);
	std::cout << "result : " << result << " !!" << std::endl;
	
	return 0;
}