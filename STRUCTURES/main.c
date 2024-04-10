#include<stdio.h>
#include"myfunctions.h"
int main()
{
	int arraySize=10;
	struct 	Country countryArray[arraySize];
	addCountry(countryArray,arraySize);
	printCountry(countryArray,arraySize);
	return 0;
}
