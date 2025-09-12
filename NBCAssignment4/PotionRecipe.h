#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;
// PotionRecipe 클래스: 재료 목록을 vector<string>으로 변경
class PotionRecipe {
private:
    // 예외 처리를 위한 bool 타입 멤버 변수 추가
    bool valid;
public:
    string potionName;
    vector<string> ingredients; // 단일 재료에서 재료 '목록'으로 변경
    // 생성자: 재료 목록을 받아 초기화하도록 수정
    PotionRecipe(const string& name, const vector<string>& ingredients);
    // 예외 처리를 위한 기본 생성자, 함수
    PotionRecipe();
    bool isvalid();
};