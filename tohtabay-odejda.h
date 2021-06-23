#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Odejda {
	string type;
	int razmer;
public:
	Odejda(string type,int razmer):type(type),razmer(razmer){}
	Odejda(){}
	void print() {
		cout << type << "-" << razmer << endl;
	}
};

