#include "gtest/gtest.h"
#include <Atl_Headers/Person.hpp>

TEST (PersonTestSuite, ConstructorTest)
{
	// setup
	Person p ("Balint", "Fazekas", 25);

	// action
	// ---

	// test
	EXPECT_EQ ("Balint", p.GetFirstName ());
	EXPECT_EQ ("Fazekas", p.GetLastName ());
	EXPECT_EQ (25, p.GetAge ());
}