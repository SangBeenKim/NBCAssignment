#include "Magician.h"

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    MP = 80;
}

void Magician::attack() {
    cout << "* ������ ����Ѵ�" << endl;
}
void Magician::attack(Monster* monster) {
    cout << "�÷��̾ �����մϴ�." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "���� ���� " << damage << "�� �����" << endl;
    monster->setHP(-damage);
}