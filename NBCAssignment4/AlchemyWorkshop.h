#pragma once
#include "PotionRecipe.h"
#include <vector>
#include <string>
#include <iostream>


using namespace std;
// AlchemyWorkshop Ŭ����: ������ ����� ����
class AlchemyWorkshop {
private:
    vector<PotionRecipe> recipes;
public:
    // addRecipe �޼���: ��� ���(vector)�� �Ű������� �޵��� ����
    void addRecipe(const string& name, const vector<string>& ingredients);
    // ��� ������ ��� �޼���
    void displayAllRecipes() const;
    // �˻� ��� / ���� �̸����� �˻� ����, ���� �˻� ����(�̶� �˻��� ��Ḧ ������ �����Ǵ� ��� ���)
    PotionRecipe searchRecipeByName(const string& name);
    vector<PotionRecipe> searchRecipeByIngredient(const string& ingredient);
};