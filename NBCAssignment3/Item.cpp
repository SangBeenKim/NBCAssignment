#include "Item.h"

Item::Item() {
	name_ = "";
	price_ = 0;
}

Item::Item(string name, int price) {
	name_ = name;
	price_ = price;
}

void Item::PrintInfo() const {
	cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << endl;
}

string Item::GetName() const {
	return name_;
}

int Item::GetPrice() const {
	return price_;
}
