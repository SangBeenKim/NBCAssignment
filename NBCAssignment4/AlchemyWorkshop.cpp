#include "AlchemyWorkshop.h"
#include <optional>

using namespace std;

// addRecipe 메서드: 재료 목록(vector)을 매개변수로 받도록 수정


void AlchemyWorkshop::addRecipe(const string& name, const vector<string>& ingredients) {
    //recipes.push_back(PotionRecipe(name, ingredients));
    recipes.emplace_back(name, ingredients); // emplace_back 으로 객체 생성과 동시에 push_back 하여 코드 간결성 확보
    cout << ">> 새로운 레시피 '" << name << "'이(가) 추가되었습니다." << endl;
}

// 모든 레시피 출력 메서드
void AlchemyWorkshop::displayAllRecipes() const {
    if (recipes.empty()) {
        cout << "아직 등록된 레시피가 없습니다." << endl;
        return;
    }

    cout << "\n--- [ 전체 레시피 목록 ] ---" << endl;
    for (size_t i = 0; i < recipes.size(); ++i) {
        cout << " > 물약 이름: " << recipes[i].potionName << endl;
        cout << " > 필요 재료: ";

        // 재료 목록을 순회하며 출력
        for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
            cout << recipes[i].ingredients[j];
            // 마지막 재료가 아니면 쉼표로 구분
            if (j < recipes[i].ingredients.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    cout << "---------------------------\n";

}

// 이름으로 검색
PotionRecipe AlchemyWorkshop::searchRecipeByName(const string& name) {
    if (recipes.empty()) {
        cout << "아직 등록된 레시피가 없습니다." << endl;
        return PotionRecipe{};
    } // 예외 처리
    for (const auto& it : recipes) {
        if (it.potionName == name) {
            return it;
        }
    }
    cout << "찾는 이름: " << name << "으로 검색된 레시피가 없습니다." << endl;
    return PotionRecipe{}; // 검색 실패
}

// 재료로 검색
vector<PotionRecipe> AlchemyWorkshop::searchRecipeByIngredient(const string& ingredient) {
    vector<PotionRecipe> returnRecipes;
    if (recipes.empty()) {
        cout << "아직 등록된 레시피가 없습니다." << endl;
        return {};
    } // 예외 처리
    for (const auto& it : recipes) {
        for (int i = 0; i < it.ingredients.size(); i++) {
            if (it.ingredients[i] == ingredient) {
                returnRecipes.push_back(it);
            }
        }
    }
    if (returnRecipes.empty()) {
        cout << "해당 재료: " << ingredient << " 를 포함하는 레시피가 존재하지 않습니다." << endl;
        return {};
    } // 검색 실패
    return returnRecipes;
}
