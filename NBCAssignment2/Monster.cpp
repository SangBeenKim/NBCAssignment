#include "Player.h"
using namespace std;
// Monster ������
// - ������ �̸��� �Ű������� �Է� �޽��ϴ�.
// - ��� ���ʹ� HP 10, ���ݷ� 30, ���� 10, ���ǵ� 10�� �ɷ�ġ�� �����ϴ�.
Monster::Monster(string name) {
	this->name = name;
	this->HP = 10;
	this->power = 30;
	this->defence = 10;
	this->speed = 10;
}

// ������ ���� �Լ�
// - �÷��̾� ��ü�� �����͸� �Ű������� �Է� �޽��ϴ�.
// - ������ ���ݷ�-�÷��̾��� ������ �������� �����մϴ�.
// - ���� ������ ����� �������� 0 ���϶��, �������� 1�� �����մϴ�.
// - �÷��̾�� �󸶳� �������� �������� ����մϴ�.
// - setHP �Լ��� �����Ͽ� HP-������ ��� ����� �Ű������� �����մϴ�.
// - setHP���� ���� ���� ���� ���θ� �������� �б⹮�� ����˴ϴ�.
// - �������� ���, �÷��̾��� ���� HP�� ����մϴ�.
// - �������� ������ ���, �÷��̾��� ���� HP�� ������ �¸� ������ ����մϴ�.
void Monster::attack(Player* player) {
	cout << "���Ͱ� �����մϴ�." << endl;
	int damage = this->power - player->getDefence();
	if (damage <= 0) damage = 1;
	cout << "�÷��̾� ���� " << damage << "�� �����" << endl;
	player->setHP(-damage);
}

// ������ �Ӽ����� �����ϴ� get �Լ�
string Monster::getName() {
	return this->name;
}
int Monster::getHP() {
	return this->HP;
}
int Monster::getPower() {
	return this->power;
}
int Monster::getDefence() {
	return this->defence;
}
int Monster::getSpeed() {
	return this->speed;
}

// ������ �Ӽ����� �����ϴ� set �Լ�
// setHP�� ��� ��Ʋ �ý��ۿ� ����Ǵ� �Լ��̹Ƿ�, ���� ���θ� �����մϴ�.
// HP�� 1 �̻��� �� true, HP�� 0 ���ϰ� �Ǿ��� �� false�� �����մϴ�.
// HP�� 1 �̻��� ���� ���ο� HP�� ���Ǹ� �����մϴ�.
// 0 ������ ��� HP�� 0���� �����մϴ�.
void Monster::setName(string name) {

}
bool Monster::setHP(int HP) {
	if (this->getHP() <= 0) {
		cout << "���� �Ҹ�" << endl;
		this->HP = 0;
		return false;
	}
	else {
		this->HP += HP;
		cout << "������ ���� ü��: " << this->getHP() << endl;
		return true;
	}

}
void Monster::setPower(int power) {

}
void Monster::setDefence(int defence) {

}
void Monster::setSpeed(int speed) {

}