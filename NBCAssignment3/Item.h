#pragma once
#include <string>
#include <iostream>

using namespace std;

class Item {
private:
	string name_;
	int price_;

public:
	Item();
	Item(string name, int price);
	void PrintInfo() const;
	string GetName() const;
	int GetPrice() const;
};
