#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>


	int gcd(int a, int b) {
	    return b == 0 ? a : gcd(b, a % b);
}