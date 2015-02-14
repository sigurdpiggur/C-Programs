#include <fstream>
#include <iostream>


using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;



int main(){

	int counter = 0;//				Teller bytes
	ifstream inStream;//			Filen vår
	inStream.open("infile.txt");//	Åpner filen.
	char n;//						Tar inn alt i fila som char
	if (inStream.good())//			true betyr at fila er åpnet som den skulle, false i motsatt tilfelle.
	{
		inStream >> std::noskipws >> n;//	noskipws sier at >> ikke skal ignorere \n eller space.
		while (!inStream.eof())//			not end of file
		{
			cout << n;					//Skriver ut innholdet.
			inStream >> std::noskipws >> n;
			++counter;
			/*if (n=='\n')
			{
				++counter;
			}*/
		}
		inStream.close();
		cout << "\n\nFilstørrelse: " << counter << " bytes\n\n";
	}
	else
	{
		cout << "Could not open file!";
	}

	return 0;
}