#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string type;
    string color;
    string class_of;
    int weight;
public:
    Animal(string type, string color, string class_of, int weight) : type(type), color(color), class_of(class_of), weight(weight){}
    Animal(){}
    void print()
    {
        cout << type << "\t" << color << "\t" << class_of << "\t" << weight << endl;
    }
    
};


