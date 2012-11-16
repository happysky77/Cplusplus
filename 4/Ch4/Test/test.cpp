#include <iostream>
#include <vector>
#include <string>


int main()
{
	int i = -1;
	const int ic = i;
	const int *pic = &ic;
	const int *const cpic = &ic;

	i = ic;
	pic = cpic;
	pic = &ic;
	return 0;
}