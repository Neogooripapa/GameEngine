#pragma once

#include <string>

class Pokemon
{
private:
	int level;				// 레벨
	std::string name;		// 이름
	int hitPoint;			// 체력
	int skillPoint;			// 기력
	int physicsAttack;		// 물리 공격력
	int physicsDefense;		// 물리 방어력
	int skillDefense;		// 스킬 방어력
	int skillAttack;		// 스킬 공격력
	// TODO : 스킬 리스트 저장 변수 추가

public:
	Pokemon();
	~Pokemon();
};