#include "gtest/gtest.h"

#include "Gem_Headers/Wolf.hpp"

TEST (WolfTestSuite, ConstructorTest)
{
	Wolf w (5542, "Regina");

	EXPECT_EQ (5542, w.GetId ());
	EXPECT_EQ ("Regina", w.GetName ());
}

TEST (WolfTestSuite, SetIdTest)
{
	Wolf w (1, "Floof");

	EXPECT_EQ (1, w.GetId ());
	
	w.SetId (2);

	EXPECT_EQ (2, w.GetId ());
}
