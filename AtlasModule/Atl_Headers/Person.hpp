#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

class Person
{
public: 
	Person (const std::string& firstName, const std::string& lastName, int32_t age);

	std::string GetFirstName () const;
	std::string GetLastName () const;
	int32_t GetAge () const;

	friend std::ostream& operator<< (std::ostream& out, const Person& person);

private: 
	std::string firstName;
	std::string lastName;
	int32_t age;
};

#endif