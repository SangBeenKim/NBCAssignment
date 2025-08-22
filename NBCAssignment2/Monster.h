/*
#pragma once
//#include <string>
//#include <iostream>
#include "Player.h"

using namespace std;

class Monster {
public:
    Monster(string name);
    void attack(Player* player);
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();
    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name; // 몬스터의 이름
    int HP; // 몬스터의 HP
    int power; // 몬스터의 공격력
    int defence; // 몬스터의 방어력
    int speed; // 몬스터의 스피드
};
*/