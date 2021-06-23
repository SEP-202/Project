#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;
class Music {
private:
	string name;
	int like;
	bool grammy;
public:
	Music(string name,int like, bool grammy){
		this->name = name;
		this->like = like;
		this->grammy = grammy;
	}
	Music(){}
	void print() {
		cout << "Name :" << name << endl;
		cout << "Like or Spotify :" << like << endl;
		cout << "Grammy or " << boolalpha << grammy << endl;
	
	}
};