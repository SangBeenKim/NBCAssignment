#include "Player.h"

//using namespace std;

Player::Player(string nickname) {
    this->nickname = nickname;
    this->level = 1;
    this->HP = 50;
    this->MP = 50;
    this->power = 5;
    this->defence = 5;
    this->accuracy = 50;
    this->speed = 50;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}

// getter �Լ�
string Player::getJobName() {
    return job_name;
}
string Player::getNickname() {
    return nickname;
}
int Player::getLevel() {
    return level;
}
int Player::getHP() {
    return HP;
}
int Player::getMP() {
    return MP;
}
int Player::getPower() {
    return power;
}
int Player::getDefence() {
    return defence;
}
int Player::getAccuracy() {
    return accuracy;
}
int Player::getSpeed() {
    return speed;
}

// setter �Լ�
void Player::setNickname(string nickname) {
    this->nickname = nickname;
}
bool Player::setHP(int HP) {
    if (this->getHP() <= 0){
        this->HP = 0;
        cout << "�÷��̾� ���" << endl;
        return false;
    }
    else {
        this->HP += HP;
        cout << "�÷��̾��� ���� ü��: " << this->getHP() << endl;
        return true;
    }
}
bool Player::setMP(int MP) {
    if (MP <= 0) {
        cout << "���� ����" << endl;
        this->MP = 0;
        return false;
    }
    else {
        this->MP += MP;
        return true;
    }
}
void Player::setPower(int power) {
    this->power = power;
}
void Player::setDefence(int defence) {
    this->defence = defence;
}
void Player::setAccuracy(int accuracy) {
    this->accuracy = accuracy;
}
void Player::setSpeed(int speed) {
    this->speed = speed;
}