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
	cout << "인벤토리 복사 완료" << endl;
}

template<typename T>
inline Inventory<T>::~Inventory() {
	delete[] pItems_;
	pItems_ = nullptr;
}

template<typename T>
inline void Inventory<T>::AddItem(const T& item) {
	if (size_ >= capacity_) {
		cout << "인벤토리가 꽉 찼습니다!" << endl;
		Resize(capacity_ * 2);
		cout << "인벤토리 확장 완료" << endl;
	}
	pItems_[size_] = item;
	Item* getItem = dynamic_cast<Item*>(&pItems_[size_]);
	cout << "아이템 추가 -> " << getItem->GetName() << endl;
	size_++;
}

template<typename T>
inline void Inventory<T>::RemoveLastItem() {
	if (size_ <= 0) {
		cout << "인벤토리가 비어있습니다." << endl;
		return;
	}
	cout << "마지막 아이템이 제거되었습니다." << endl;
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
	cout << "===== 아이템 목록 =====" << endl;
	if (size_ <= 0) {
		cout << "인벤토리가 비어있습니다." << endl;
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
