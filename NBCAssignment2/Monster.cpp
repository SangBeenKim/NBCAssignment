#include "Player.h"
using namespace std;
// Monster 생성자
// - 몬스터의 이름을 매개변수로 입력 받습니다.
// - 모든 몬스터는 HP 10, 공격력 30, 방어력 10, 스피드 10의 능력치를 가집니다.
Monster::Monster(string name) {
	this->name = name;
	this->HP = 10;
	this->power = 30;
	this->defence = 10;
	this->speed = 10;
}

// 몬스터의 공격 함수
// - 플레이어 객체의 포인터를 매개변수로 입력 받습니다.
// - 몬스터의 공격력-플레이어의 방어력을 데미지로 정의합니다.
// - 만약 위에서 계산한 데미지가 0 이하라면, 데미지를 1로 정의합니다.
// - 플레이어에게 얼마나 데미지를 입혔는지 출력합니다.
// - setHP 함수를 실행하여 HP-데미지 계산 결과를 매개변수로 전달합니다.
// - setHP에서 리턴 받은 생존 여부를 기준으로 분기문이 실행됩니다.
// - 생존했을 경우, 플레이어의 남은 HP만 출력합니다.
// - 생존하지 못했을 경우, 플레이어의 남은 HP와 몬스터의 승리 문구를 출력합니다.
void Monster::attack(Player* player) {
	cout << "몬스터가 공격합니다." << endl;
	int damage = this->power - player->getDefence();
	if (damage <= 0) damage = 1;
	cout << "플레이어 에게 " << damage << "의 대미지" << endl;
	player->setHP(-damage);
}

// 몬스터의 속성값을 리턴하는 get 함수
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

// 몬스터의 속성값을 정의하는 set 함수
// setHP의 경우 배틀 시스템에 직결되는 함수이므로, 생존 여부를 리턴합니다.
// HP가 1 이상일 때 true, HP가 0 이하가 되었을 때 false를 리턴합니다.
// HP가 1 이상일 때만 새로운 HP값 정의를 진행합니다.
// 0 이하일 경우 HP를 0으로 정의합니다.
void Monster::setName(string name) {

}
bool Monster::setHP(int HP) {
	if (this->getHP() <= 0) {
		cout << "몬스터 소멸" << endl;
		this->HP = 0;
		return false;
	}
	else {
		this->HP += HP;
		cout << "몬스터의 남은 체력: " << this->getHP() << endl;
		return true;
	}

}
void Monster::setPower(int power) {

}
void Monster::setDefence(int defence) {

}
void Monster::setSpeed(int speed) {

}