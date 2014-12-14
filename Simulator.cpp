#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int days = 30;
	int hours = 24;
	int production = 250;
	int consumption = 135;
	ofstream datafile;

	string daysOfWeek[] =  {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

	for(int day = 0 ; day <= days ; day++){
		cout <<  daysOfWeek[day%7] << day+1 << endl;
	}

	return 0;
}

