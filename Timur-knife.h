#pragma once
class Knife {
	string name;
	int blade_length;
public:
	Knife(){}
	Knife(string name, int blade_length):name(name),blade_length(blade_length){}
	void print() {
		cout << "Name: " << name << "\nBlade length: " << blade_length << endl;
	}
};