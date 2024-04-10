#ifndef FUNCTION_H
#define FUNCTION_H

struct Country{
	char countryName[10];
	int developmentLevel;
	char counties[10];
	int ranking;

};
void addCountry(struct Country *countryArray,int arraySize);
void printCountry(struct Country *countryArray,int arraySize);

#endif
