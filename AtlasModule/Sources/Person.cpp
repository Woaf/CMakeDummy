#include "Atl_Headers/Person.hpp"

Person::Person (const std::string & firstName, const std::string & lastName, int32_t age) : 
	firstName (firstName), 
	lastName (lastName), 
	age(age)
{
}

std::string Person::GetFirstName () const
{
	return firstName;
}

std::string Person::GetLastName () const
{
	return lastName;
}

int32_t Person::GetAge () const
{
	return age;
}

std::ostream & operator<<(std::ostream & out, const Person & person)
{
	out << person.firstName << " " << person.lastName << " is " << person.age << " years old.";
	return out;
}
