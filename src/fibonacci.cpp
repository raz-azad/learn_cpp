#include <fibonacci.hpp>

unsigned long long Fibonacci::getFib(const int &fib)
{
	auto it = store_fib_result_.find(fib);
	if (it != store_fib_result_.end())
	{
		return it->second;
	}
	else
	{
		switch (fib)
		{
		case 0 || 1:
			store_fib_result_[fib] = fib;
			return store_fib_result_[fib];
		default:
			auto result1 = getFib(fib - 1);
			store_fib_result_[fib - 1] = result1;

			store_fib_result_[fib - 2] = getFib(fib - 2);
			store_fib_result_[fib] = store_fib_result_[fib - 1]
					+ store_fib_result_[fib - 2];
			return store_fib_result_[fib];
		}
	}
}
