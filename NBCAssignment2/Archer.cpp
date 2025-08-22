#include "Archer.h"

using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "��ó";
    cout << "* ��ó�� �����Ͽ����ϴ�." << endl;
    accuracy = 80;
}

void Archer::attack() {
    cout << "* ȭ���� ���" << endl;
}
void Archer::attack(Monster* monster) {
    cout << "�÷��̾ �����մϴ�." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "���� ���� " << damage << "�� �����" << endl;
    monster->setHP(-damage);
}