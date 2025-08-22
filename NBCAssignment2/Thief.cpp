#include "Thief.h"

using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "* �ܰ��� �ֵθ���" << endl;
}
void Thief::attack(Monster* monster) {
    cout << "�÷��̾ �����մϴ�." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "���� ���� " << damage << "�� �����" << endl;
    monster->setHP(-damage);
}