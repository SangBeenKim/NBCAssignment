#include "Warrior.h"
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 80;
}

void Warrior::attack() {
    cout << "* 장검을 휘두른다" << endl;
}

void Warrior::attack(Monster* monster) {
    cout << "플레이어가 공격합니다." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "몬스터 에게 " << damage << "의 대미지" << endl;
    monster->setHP(-damage);
}