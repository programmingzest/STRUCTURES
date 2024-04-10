#include <stdio.h>
#include "myfunctions.h"

void addCountry(struct Country *countryArray,int arraySize){
	for(int i=0;i<arraySize;i++){
	printf("Enter details for Countries %d:\n",i+1);
	printf("Country name: ");
	scanf("%s", countryArray[i].countryName);
	printf("developmentLevel:");
	scanf("%d", &countryArray[i].developmentLevel);
	printf("counties:");
	scanf("%s",countryArray[i].counties);
	printf("ranking (out of 9) :");
	scanf("%d", &countryArray[i].ranking);
	}
	}

void printCountry(struct Country *countryArray,int arraySize){
    printf("\nCountry Details: \n");
	for(int i=0;i<arraySize;i++){
		printf("Country %d:\n",i+1);
		printf("Country name :%s\n",countryArray[i].countryName);
		printf("developmentlevel :%d\n",countryArray[i].developmentLevel);
		printf("ranking :%d/9\n",countryArray[i].ranking);
		printf("counties :%s\n",countryArray[i].counties);
	}
}
