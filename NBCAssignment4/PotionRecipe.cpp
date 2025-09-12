#include "PotionRecipe.h"
#include <string>
#include <vector>

using namespace std;

// PotionRecipe 클래스: 재료 목록을 vector<string>으로 변경
PotionRecipe::PotionRecipe(const string& name, const vector<string>& ingredients) : valid(true), potionName(name), ingredients(ingredients) {}

PotionRecipe::PotionRecipe() {
	//cout << "기본 생성자 호출됨" << endl; // 디버깅용 메세지
	valid = false;
	PotionRecipe::isvalid();
}

bool PotionRecipe::isvalid() {
	return valid;
}
