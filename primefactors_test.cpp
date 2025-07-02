#include "gmock/gmock.h"
#include "primefactors.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
	EXPECT_EQ(1, 1);
}