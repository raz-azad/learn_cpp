#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
	std::vector<int> my_vector_0 =
	{ 1, 2, 3, 4, 5 };
	std::vector<int> my_vector_1 =
	{ 1, 2, 3, 4 };

	auto is_equal = std::equal(std::begin(my_vector_0), std::end(my_vector_0),std::begin(my_vector_1), std::end(my_vector_1));
	std::cout << "Is both collections are equal : " << is_equal << std::endl;

	auto missmatch = std::mismatch(std::begin(my_vector_0),	std::end(my_vector_0), std::begin(my_vector_1));
	std::cout << "First element missmatch : " << *missmatch.first << std::endl;
	std::cout << "Second element missmatch : " << *missmatch.second	<< std::endl;

	auto missmatch_at = missmatch.first - std::begin(my_vector_0);
	std::cout << "Missmatch of first collection at : " << missmatch_at << std::endl;

	auto total_number = std::accumulate(std::begin(my_vector_1), std::end(my_vector_1), 0);
	std::cout << "Total Number : " << total_number << std::endl;

	auto total_number_with_lambda = std::accumulate(std::begin(my_vector_1),std::end(my_vector_1), 0,
			[](const auto &total, const auto &item)
			{
				return item%2==0 ? total+item : total;}
			);
	std::cout << "Total Number with lambda : " << total_number_with_lambda << std::endl;

	return 0;
}
