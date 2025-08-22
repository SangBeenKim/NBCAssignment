#include "Warrior.h"
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    HP = 80;
}

void Warrior::attack() {
    cout << "* ����� �ֵθ���" << endl;
}

void Warrior::attack(Monster* monster) {
    cout << "�÷��̾ �����մϴ�." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "���� ���� " << damage << "�� �����" << endl;
    monster->setHP(-damage);
}