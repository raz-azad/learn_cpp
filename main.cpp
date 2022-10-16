#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>

int main()
{
	std::vector<int> my_vector = { 1, 3, 6, 5, 8, 9, 11, -100, 12, 13, 14, 3, 15 };

	auto number_of_3 = std::count(std::begin(my_vector), std::end(my_vector), 3);
	std::cout << "Number of Three are : " << number_of_3 << " !!" << std::endl;

	auto number_odd = std::count_if(std::begin(my_vector),std::end(my_vector),[](const auto &vec_element){return vec_element%2==0;});
	std::cout << "Odd Numbers are : " << number_odd << " !!" << std::endl;

	auto all_is_even  = std::all_of (std::begin(my_vector),std::end(my_vector),[](const auto &vec_element){return vec_element%2==0;});
	std::cout << "All contain Even Number : " << all_is_even << " !!" << std::endl;

	auto none_is_even = std::none_of(std::begin(my_vector),std::end(my_vector),[](const auto &vec_element){return vec_element%2==0;});
	std::cout << "None of Contain Even Number : " << none_is_even << " !!" << std::endl;

	auto any_is_even  = std::any_of (std::begin(my_vector),std::end(my_vector),[](const auto &vec_element){return vec_element%2==0;});
	std::cout << "Any of Contain Even Number : " << any_is_even << " !!" << std::endl;

	auto find_first_8 = std::find(std::begin(my_vector), std::end(my_vector), 8);
	auto before_8 = (--find_first_8);
	std::cout << "Number before 8 is : " << *before_8 << " !!" << std::endl;

	auto find_if_is_11 = std::find_if(std::begin(my_vector), std::end(my_vector), [](const auto &vec_element){return vec_element==11;});
	auto after_11 = (++find_if_is_11);
	std::cout << "Number after 11 is : " << *after_11 << " !!" << std::endl;

	auto my_vector_2 = my_vector;
	std::sort(std::begin(my_vector_2), std::end(my_vector_2));
	std::sort(std::begin(my_vector_2), std::end(my_vector_2), [](const auto & element1, const auto & element2){return element1>element2;});
	std::sort(std::begin(my_vector_2), std::end(my_vector_2), [](const auto & element1, const auto & element2){return std::fabs(element1)>std::fabs(element2);});

	auto is_sorted = std::is_sorted(std::begin(my_vector_2), std::end(my_vector_2));
	std::cout << "Is Sorted without lambda : " << is_sorted << std::endl;
	is_sorted = std::is_sorted(std::begin(my_vector_2), std::end(my_vector_2), [](const auto& element1, const auto& element2){return std::fabs(element1)>std::fabs(element2);});
	std::cout << "Is Sorted with lambda : " << is_sorted << std::endl;

	auto max_element = std::max_element(std::begin(my_vector_2), std::end(my_vector_2));
	std::cout << "Max Element : " << *max_element << std::endl;

	auto min_element = std::min_element(std::begin(my_vector_2), std::end(my_vector_2));
	std::cout << "Min Element : " << *min_element << std::endl;

	auto find_uperbound = std::upper_bound(std::begin(my_vector_2), std::end(my_vector_2), 5);
	std::cout << "Uper bound of unsorted linst : " << *find_uperbound << std::endl;

	auto find_lowerbound = std::lower_bound(std::begin(my_vector_2), std::end(my_vector_2), 5);
	std::cout << "Lower bound of unsorted linst : " << *find_lowerbound << std::endl;

	std::random_device random_device;
	std::mt19937 randomGenerator(random_device());
	std::shuffle(std::begin(my_vector_2), std::end(my_vector_2), randomGenerator);
	std::for_each(std::begin(my_vector_2), std::end(my_vector_2), [](const auto &element){std::cout << element << " ";});
	std::cout << std::endl;

	std::partial_sort(std::begin(my_vector_2), std::begin(my_vector_2)+7, std::end(my_vector_2));
	std::for_each(std::begin(my_vector_2), std::end(my_vector_2), [](const auto &element){std::cout << element << " ";});
	std::cout << std::endl;

	std::nth_element(std::begin(my_vector_2),std::begin(my_vector_2)+4, std::end(my_vector_2));
	std::for_each(std::begin(my_vector_2), std::end(my_vector_2), [](const auto &element){std::cout << element << " ";});
	std::cout << std::endl;

	return 0;
}
