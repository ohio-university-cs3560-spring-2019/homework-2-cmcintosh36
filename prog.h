/*
 Christian McIntosh
 CS 3560
 Chad Mourning
 Homework 1
 1/28/19
 */

#ifndef _PROG_H_
#define _PORG_H_
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

class Replace {
	public:
		void replace(string target_change, string old_word, string new_word);
	private:
		string target_change, old_word, new_word;

};

#endif
