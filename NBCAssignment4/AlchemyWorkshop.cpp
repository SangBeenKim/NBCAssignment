#include "AlchemyWorkshop.h"
#include <optional>

using namespace std;

// addRecipe �޼���: ��� ���(vector)�� �Ű������� �޵��� ����


void AlchemyWorkshop::addRecipe(const string& name, const vector<string>& ingredients) {
    //recipes.push_back(PotionRecipe(name, ingredients));
    recipes.emplace_back(name, ingredients); // emplace_back ���� ��ü ������ ���ÿ� push_back �Ͽ� �ڵ� ���Ἲ Ȯ��
    cout << ">> ���ο� ������ '" << name << "'��(��) �߰��Ǿ����ϴ�." << endl;
}

// ��� ������ ��� �޼���
void AlchemyWorkshop::displayAllRecipes() const {
    if (recipes.empty()) {
        cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
        return;
    }

    cout << "\n--- [ ��ü ������ ��� ] ---" << endl;
    for (size_t i = 0; i < recipes.size(); ++i) {
        cout << " > ���� �̸�: " << recipes[i].potionName << endl;
        cout << " > �ʿ� ���: ";

        // ��� ����� ��ȸ�ϸ� ���
        for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
            cout << recipes[i].ingredients[j];
            // ������ ��ᰡ �ƴϸ� ��ǥ�� ����
            if (j < recipes[i].ingredients.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    cout << "---------------------------\n";

}

// �̸����� �˻�
PotionRecipe AlchemyWorkshop::searchRecipeByName(const string& name) {
    if (recipes.empty()) {
        cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
        return PotionRecipe{};
    } // ���� ó��
    for (const auto& it : recipes) {
        if (it.potionName == name) {
            return it;
        }
    }
    cout << "ã�� �̸�: " << name << "���� �˻��� �����ǰ� �����ϴ�." << endl;
    return PotionRecipe{}; // �˻� ����
}

// ���� �˻�
vector<PotionRecipe> AlchemyWorkshop::searchRecipeByIngredient(const string& ingredient) {
    vector<PotionRecipe> returnRecipes;
    if (recipes.empty()) {
        cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
        return {};
    } // ���� ó��
    for (const auto& it : recipes) {
        for (int i = 0; i < it.ingredients.size(); i++) {
            if (it.ingredients[i] == ingredient) {
                returnRecipes.push_back(it);
            }
        }
    }
    if (returnRecipes.empty()) {
        cout << "�ش� ���: " << ingredient << " �� �����ϴ� �����ǰ� �������� �ʽ��ϴ�." << endl;
        return {};
    } // �˻� ����
    return returnRecipes;
}
