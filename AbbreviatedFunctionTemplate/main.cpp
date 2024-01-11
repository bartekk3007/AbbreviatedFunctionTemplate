#include <iostream>

using namespace std;

// Project -> Properties -> General -> C++ Language Standard
auto square(auto number)
{
	return number* number;
}

int main()
{
	cout << square(3);

	return 0;
}