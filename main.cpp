// COMSC-210 | Final Pt.1 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <list>
using namespace std;

int main(){

	//Milestone 1
	map<string, int> airports;
	
	ifstream fin("routes.txt");
	if (!fin){
		cout << "Error: The file routes.txt could not be accessed." << endl;
		return 1;
	}

	string orig;
	string dest;
	while (fin >> orig >> dest){
		airports[orig] += 1;
		airports[dest] += 1;
	}

	cout << "All airport traffic counts:" << endl;
	for (auto it = airports.begin(); it != airports.end(); it++)
		cout << it->first << ' ' << it->second << endl;


	//Milestone 2
	list<string> busy_airports;
	int busiest = 0;
	for (auto it = airports.begin(); it != airports.end(); it++){
		if (it->second > busiest){
			busy_airports.clear();
			busiest = it->second;
			busy_airports.push_back(it->first);
		}else if (it->second == busiest)
			busy_airports.push_back(it->first);
	}
	cout << "\nBusiest airport(s) with count " << busiest << ":" << endl;
	for (auto it = busy_airports.begin(); it != busy_airports.end(); it++)
		cout << *it << ' ' << busiest << endl;

}

