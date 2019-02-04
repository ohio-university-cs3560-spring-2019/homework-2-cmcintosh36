/*
Christian McIntosh
CS 3560
Chad Mourning
Homework 1
1/28/19
*/
#include "prog.h"
/*
 The purpose of this program is to replace a searched for string from the input word and replace targeted string with new selected string to the output file
 The elements that were used in this program were both word 1 and word 2, as well as target_change
*/

void Replace::replace(string target_change, string old_word, string new_word) {
	string swapped;
	swapped = target_change;
	string::size_type position = 0;
	while ((position = swapped.find(old_word, position)) != string::npos) {	//loop for replacement
		swapped.replace(position, old_word.size(), new_word);
		position += new_word.size();
	}
	cout << endl << endl;
	cout << swapped << endl;
}
