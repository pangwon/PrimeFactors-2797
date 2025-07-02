#include "gmock/gmock.h"
#include "primefactors.cpp"

using namespace testing;
class PrimeFixture : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	PrimeFactors prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	PrimeFactors prime_factor;
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}