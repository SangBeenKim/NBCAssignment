#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;
// PotionRecipe Ŭ����: ��� ����� vector<string>���� ����
class PotionRecipe {
private:
    // ���� ó���� ���� bool Ÿ�� ��� ���� �߰�
    bool valid;
public:
    string potionName;
    vector<string> ingredients; // ���� ��ῡ�� ��� '���'���� ����
    // ������: ��� ����� �޾� �ʱ�ȭ�ϵ��� ����
    PotionRecipe(const string& name, const vector<string>& ingredients);
    // ���� ó���� ���� �⺻ ������, �Լ�
    PotionRecipe();
    bool isvalid();
};