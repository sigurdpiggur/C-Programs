#ifndef _PERMUTATIONS_H
#define _PERMUTATIONS_H

void ReturnWordArr(std::string input, char word[]);
int calcPermutations(int length);
void swapChar(char word[], const int I, const int J);
void permute(char word[], int point, const int LENGTH);

#endif