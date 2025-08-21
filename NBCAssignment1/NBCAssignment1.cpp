#include <iostream>

using namespace std;

void setPotion(int* usePotion, int* selectedPoint) {
	if (*usePotion < 1)
		cout << "해당 포션이 없습니다." << endl;
	else {
		*usePotion -= 1;
		*selectedPoint += 20;
		cout << "회복" << endl;
	}
}
int main() {
	int status[4] = { 0 };
	int choice;
	int HPPotion = 5, MPPotion = 5;

	while (status[0] <= 50 || status[1] <= 50) {
		cout << "HP와 MP를 입력(각각 51 이상 ex. 60 60)" << endl;
		cin >> status[0] >> status[1];
		if (status[0] <= 50 || status[1] <= 50)
			cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요." << endl;
	}

	while (status[2] < 1 || status[3] < 1) {
		cout << "공격력과 방어력을 입력(각각 1이상 ex. 5 5)" << endl;
		cin >> status[2] >> status[3];
		if (status[2] < 1 || status[3] < 1)
			cout << "공격력과 방어력 값이 너무 작습니다. 다시 입력해주세요." << endl;
	}
	cout << "포션이 지급 되었습니다. (HP, MP 포션 각 5개)" << endl;
	while (1) {
		cout << endl << "스탯 관리 시스템" << endl << "1. HP 회복 2. MP 회복 3. HP 강화 4. MP 강화 5. 공격 스킬 사용 6. 필살기 사용 7. 나가기" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "1. HP 회복" << endl;
			setPotion(&HPPotion, status);
			cout << "현재 HP: " << status[0] << "남은 HP 포션: " << HPPotion << endl;
			break;
		case 2:
			cout << "2. MP 회복" << endl;
			setPotion(&MPPotion, status + 1);
			cout << "현재 MP: " << status[1] << "남은 MP 포션: " << MPPotion << endl;
			break;
		case 3:
			cout << "3. HP 강화" << endl;
			if (status[0] < 1)
				cout << "error" << endl;
			else
				status[0] *= 2;
			cout << "현재 HP: " << status[0] << endl;
			break;
		case 4:
			cout << "4. MP 강화" << endl;
			if (status[1] < 1)
				cout << "error" << endl;
			else
				status[1] *= 2;
			cout << "현재 MP: " << status[1] << endl;
			break;
		case 5:
			cout << "5. 공격 스킬 사용" << endl;
			if (status[1] < 50)
				cout << "MP 부족" << endl;
			else
				status[1] -= 50;
			cout << "잔여 MP: " << status[1] << endl;
			break;
		case 6:
			cout << "6. 필살기 사용" << endl;
			if (status[1] < 1)
				cout << "MP 부족" << endl;
			else
				status[1] /= 2;
			cout << "잔여 MP: " << status[1] << endl;
			break;
		case 7:
			cout << "프로그램을 종료합니다." << endl;
			exit(0);
		}
	}

	return 0;
}