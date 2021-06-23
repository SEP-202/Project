#pragma once
class Car {
private:
	string model;
	string color;
public:
	Car(string model, string color;) :model(model), color(color);
	Car();
	void print() {
		cout << "Car's model: " << model << "Color: " << color;
	}
};