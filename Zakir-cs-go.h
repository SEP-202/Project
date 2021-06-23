#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>

using namespace std;

class cs_go {
private:
	string name;
	int time;
	int kill;
public:
	cs_go(string n, int t, int k) : name(n), time(t), kill(k){}
	cs_go(){}

	void ptint() {
		cout << "UserName: " << name << endl;
		cout << "Time: " << time << endl;
		cout << "Kill: " << kill << endl;
	}
};