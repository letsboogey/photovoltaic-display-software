#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	int days = 30;
	int hours = 24;
	int production = 250;
	int consumption = 135;
	ofstream datafile;
	string filename;

	string daysOfWeek[] =  {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	for(int day = 0 ; day <= days ; day++){
		
		char buffer [20];
		sprintf(buffer,"%d.txt",day+1);
		filename = daysOfWeek[day%7]+buffer ;
		cout << filename << endl;
	}

	return 0;
}

