#include <iostream>
#include <string>

using namespace std;

std::string fizzbuzz(int N) {
    if (N % 3 == 0 && N % 5 == 0) {
        return "fizzbuzz";
    } else if (N % 3 == 0) {
        return "fizz";
    } else if (N % 5 == 0) {
        return "buzz";
    } else {
        return std::to_string(N);
    }
}
////////////////////////////////
// ADD FIZZBUZZ FUNCTION HERE //
////////////////////////////////



int main ()
{
  for (int n=1; n<=50; ++n)
  {

  std::cout << fizzbuzz(15) << std::endl;

	
	
    ////////////////////////////////////////
    // ADD CODE TO CALL FIZZBUZZ FUNCTION //
    // AND PRINT THE RETURNED VALUE HERE  //
    ////////////////////////////////////////

  }
}

