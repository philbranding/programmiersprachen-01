#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int gcd(int a, int b)
{
	int gcd = 0;
	for(int i=1; i<=a&&i<=b; i++){
		if(a%i == 0 && b%i == 0 )
		{
	        gcd=i;
   		}
	}
	return gcd;
}


TEST_CASE("describe_gcd ","[gcd]")
{
	REQUIRE( gcd(2,4) == 2 );
	REQUIRE( gcd(6,9) == 3 );
	REQUIRE( gcd(3,7) == 1 );
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
