#include "Magician.h"

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    MP = 80;
}

void Magician::attack() {
    cout << "* 마법을 사용한다" << endl;
}
void Magician::attack(Monster* monster) {
    cout << "플레이어가 공격합니다." << endl;
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;
    cout << "몬스터 에게 " << damage << "의 대미지" << endl;
    monster->setHP(-damage);
}