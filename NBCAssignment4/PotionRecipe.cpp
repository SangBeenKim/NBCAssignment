#include "PotionRecipe.h"
#include <string>
#include <vector>

using namespace std;

// PotionRecipe Ŭ����: ��� ����� vector<string>���� ����
PotionRecipe::PotionRecipe(const string& name, const vector<string>& ingredients) : valid(true), potionName(name), ingredients(ingredients) {}

PotionRecipe::PotionRecipe() {
	//cout << "�⺻ ������ ȣ���" << endl; // ������ �޼���
	valid = false;
	PotionRecipe::isvalid();
}

bool PotionRecipe::isvalid() {
	return valid;
}
