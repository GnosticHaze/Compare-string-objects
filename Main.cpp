#include <iostream>
#include <string>
#include <algorithm>  // compare()

void compareStringObj( std::string str, std::string str2 ) {
	// A value of 0 means the strings are equal
	str.compare( str2 ) == 0 ? std::cout << "Strings are the same" : std::cout << "Strings are not the same" << std::endl;
}

int main( int argc, char* arv[] ) {

	std::string str { "A string" };
	std::string str2 { "Another string" };

	compareStringObj( str, str2 );

	std::cout << std::endl;

}


