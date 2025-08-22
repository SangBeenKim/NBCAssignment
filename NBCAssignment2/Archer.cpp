#include "Archer.h"

using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "아처";
    cout << "* 아처로 전직하였습니다." << endl;
    accuracy = 80;
}

void Archer::attack() {
    cout << "* 화살을 쏜다" << endl;
}
void Archer::attack(Monster* monster) {
    cout << "플레이어가 공격합니다." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "몬스터 에게 " << damage << "의 대미지" << endl;
    monster->setHP(-damage);
}