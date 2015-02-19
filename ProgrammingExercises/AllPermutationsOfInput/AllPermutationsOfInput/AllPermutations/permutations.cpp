#include <iostream>
#include <string>
#include "permutations.h"


void ReturnWordArr(std::string input, char word[]){//Skriv inn ordet som skal permuteres, returnerer char array, med siste element=0;
	word[input.length()] = 0;
	for (int i = 0; i < input.length(); i++)
	{
		word[i] = input[i];
	}
}


int calcPermutations(int length){
	int n = 1;
	for (int i = 1; i <= length; i++)
	{
		n *= i;
	}
	return n;
}


void swapChar(char word[], const int I, const int J){//Brukes for å bytte om plassene på bokstaver i ordet.
	char temp = word[I];
	word[I] = word[J];
	word[J] = temp;
}


void permute(char word[], int point, const int LENGTH){//Utfører selve permuteringen.
	for (int i = 0; i < LENGTH-point; i++)
	{
		if (point == LENGTH-1)
		{
			std::cout << word<< std::endl;
		}
		else
		{
			permute(word, point + 1, LENGTH);//Kaller seg selv.
			for (int j = 0; j < LENGTH-point; j++)
			{
				swapChar(word, point, point+j);
			}		
		}
	}
}