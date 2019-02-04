/*
 Christian McIntosh
 CS 3560
 Chad Mourning
 Homework 1
 1/28/19
 */

#include "prog.h"

int main(int argc, char * argv[]) {
	Replace Action;
	string target_change;
	string old_word, new_word;
	string content;

	old_word = argv[1];
	cout << "The target word is: " << old_word << endl; //writes to output file what the targeted word is
	new_word = argv[2];
	cout << "The new word will be: " << new_word << endl; //writes to output file what the targeted word becomes
	while (getline(cin, target_change)) {
		content += target_change;
	}
	Action.replace(content, old_word, new_word);	//calls replace function
}
