#pragma once

#include <map>

class Fibonacci
{
private:
	std::map<int,unsigned long long int> store_fib_result_;

public:
	unsigned long long getFib(const int& fib);
};