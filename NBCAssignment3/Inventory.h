#pragma once
#include <iostream>
#include <algorithm>
#include "Item.h"

using namespace std;

template <typename T>

class Inventory {
private:
	T* pItems_;
	int capacity_;
	int size_;

public:
	Inventory(int capacity = 10);
	Inventory(const Inventory<T>& other);
	~Inventory();
	void AddItem(const T& item);
	void RemoveLastItem();
	int GetSize() const;
	int GetCapacity();
	void PrintAllItems() const;
	void Assign(const Inventory<T>& other);
	void Resize(int newCapacity);
	void SortItems();
	static bool compareItemsByPrice(const Item& a, const Item& b);
};

#include "Inventory.inl"