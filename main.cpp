#include <iostream>

#include <Gem_Headers/Wolf.hpp>
#include <Atl_Headers/Person.hpp>

int main ()
{
	Person p ("Balint", "Fazekas", 25);
	Wolf w (223, "Floof");

	std::cout << p << std::endl;
	std::cout << w << std::endl;

	return 0;
}