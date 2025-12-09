// COMSC-210 | Final Pt.1 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main(){
	//Milestone 1
	map<string, int> airports;
	
	ifstream fin("routes.txt")
	if (!fin){
		cout << "Error: The file "routes.txt" could not be accessed." << endl;
		return 1;
	}

	string orig;
	string dest;
	while (fin >> orig >> dest){
		airports[orig] += 1;		//come back to check/test this logic
		airports[dest] += 1;
	}

	//print to test?
	cout << "All airport traffic counts:" << endl;
	for (auto it = airports.begin(); it != airports.end(); it++)


}

