#include "Thief.h"

using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "* 단검을 휘두른다" << endl;
}
void Thief::attack(Monster* monster) {
    cout << "플레이어가 공격합니다." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "몬스터 에게 " << damage << "의 대미지" << endl;
    monster->setHP(-damage);
}