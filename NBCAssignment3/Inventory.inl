#pragma once
#include <iostream>
#include "Inventory.h"

template<typename T>
inline Inventory<T>::Inventory(int capacity) {
	if (capacity <= 0) capacity = 1;
	capacity_ = capacity;
	pItems_ = new T[capacity_];
	size_ = 0;
}

template<typename T>
inline Inventory<T>::Inventory(const Inventory<T>& other) {
	Assign(other);
	cout << "�κ��丮 ���� �Ϸ�" << endl;
}

template<typename T>
inline Inventory<T>::~Inventory() {
	delete[] pItems_;
	pItems_ = nullptr;
}

template<typename T>
inline void Inventory<T>::AddItem(const T& item) {
	if (size_ >= capacity_) {
		cout << "�κ��丮�� �� á���ϴ�!" << endl;
		Resize(capacity_ * 2);
		cout << "�κ��丮 Ȯ�� �Ϸ�" << endl;
	}
	pItems_[size_] = item;
	Item* getItem = dynamic_cast<Item*>(&pItems_[size_]);
	cout << "������ �߰� -> " << getItem->GetName() << endl;
	size_++;
}

template<typename T>
inline void Inventory<T>::RemoveLastItem() {
	if (size_ <= 0) {
		cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
		return;
	}
	cout << "������ �������� ���ŵǾ����ϴ�." << endl;
	size_--;
}

template<typename T>
inline int Inventory<T>::GetSize() const {
	return size_;
}

template<typename T>
inline int Inventory<T>::GetCapacity() {
	return capacity_;
}

template<typename T>
inline void Inventory<T>::PrintAllItems() const {
	cout << "===== ������ ��� =====" << endl;
	if (size_ <= 0) {
		cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
		return;
	}
	for (int i = 0; i < size_; i++) {
		Item* item = dynamic_cast<Item*>(&pItems_[i]);
		if (item != nullptr) {
			item->PrintInfo();
		}
		
	}
}

template<typename T>
inline void Inventory<T>::Assign(const Inventory<T>& other) {
	capacity_ = other.capacity_;
	size_ = other.size_;
	pItems_ = new T[capacity_];
	for (int i = 0; i < size_; ++i) {
		pItems_[i] = other.pItems_[i];
	}
}

template<typename T>
inline void Inventory<T>::Resize(int newCapacity) {
	capacity_ = newCapacity;
	T* tempItems = new T[capacity_];
	for (int i = 0; i < size_; ++i) {
		tempItems[i] = pItems_[i];
	}
	delete[] pItems_;
	pItems_ = nullptr;
	pItems_ = tempItems;
}

template<typename T>
inline void Inventory<T>::SortItems() {
	sort(pItems_, pItems_ + size_, compareItemsByPrice);
}

template<typename T>
inline bool Inventory<T>::compareItemsByPrice(const Item& a, const Item& b) {
	return a.GetPrice() < b.GetPrice();
}
