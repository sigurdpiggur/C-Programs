#include <string>
#include <iostream>
#include "permutations.h"
#include <ctime>//For å måle tidsbruk

using std::string;
using std::cout;
using std::cin;

int main(){

	bool done = true;
	while (done)
	{
		string input;
		cout << "Skriv inn ditt ord:\t";
		cin >> input;
		const int LENGTH = input.length();
		char *word = new char[LENGTH + 1];//Tar inn ordet og legger det i en char-array.
		ReturnWordArr(input, word);


		clock_t begin = clock();
		permute(word, 0, LENGTH);//Permutasjonskall
		clock_t end = clock();
		

		double elapsed_secs = double(end - begin) / (CLOCKS_PER_SEC);
		cout << "\nTidsbruk: " << elapsed_secs << "\n\n";//			Skriver ut div., som ant. permutasjoner, antall sekunder.
		cout << calcPermutations(input.length()) << " permutasjoner utskrevet.\n\n";


		delete[] word;
		word = nullptr;
		cout << "0) Avslutt\n1) Tast nytt ord\n";//			Opprydning
		cin >> done;
		cout << "\n\n";

	}	
}