#pragma once
#include "PotionRecipe.h"
#include <vector>
#include <string>
#include <iostream>


using namespace std;
// AlchemyWorkshop 클래스: 레시피 목록을 관리
class AlchemyWorkshop {
private:
    vector<PotionRecipe> recipes;
public:
    // addRecipe 메서드: 재료 목록(vector)을 매개변수로 받도록 수정
    void addRecipe(const string& name, const vector<string>& ingredients);
    // 모든 레시피 출력 메서드
    void displayAllRecipes() const;
    // 검색 기능 / 물약 이름으로 검색 가능, 재료로 검색 가능(이때 검색된 재료를 포함한 레시피는 모두 출력)
    PotionRecipe searchRecipeByName(const string& name);
    vector<PotionRecipe> searchRecipeByIngredient(const string& ingredient);
};