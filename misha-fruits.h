#include<string>

class fruits{
private:
	string name;
	string color;
public:
	fruits(string name, string color)
		:name(name),color(color){}
	void print() {
		printf("Fruit name: %s\nColor: %s\n", 
			this->name.c_str(), this->color.c_str());
	}
};