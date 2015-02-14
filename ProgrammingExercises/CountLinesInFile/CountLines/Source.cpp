#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;



int main(){

	int counter = 0;//				Teller bytes
	ifstream inStream;//			Filen vår
	inStream.open("infile.txt");//	Åpner filen.
	string n;//						Tar inn en linje i fila som string
	if (inStream.good())//			true betyr at fila er åpnet som den skulle, false i motsatt tilfelle.
	{
		while (!inStream.eof())//			not end of file
		{
			std::getline(inStream, n);
			counter += 1;
		}
		inStream.close();
		cout << "\n\Antall linjer: " << counter << "\n\n";
	}
	else
	{
		cout << "Could not open file!";
	}

	return 0;
}