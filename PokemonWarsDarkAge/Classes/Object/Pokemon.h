#pragma once

#include <string>

class Pokemon
{
private:
	int level;				// ����
	std::string name;		// �̸�
	int hitPoint;			// ü��
	int skillPoint;			// ���
	int physicsAttack;		// ���� ���ݷ�
	int physicsDefense;		// ���� ����
	int skillDefense;		// ��ų ����
	int skillAttack;		// ��ų ���ݷ�
	// TODO : ��ų ����Ʈ ���� ���� �߰�

public:
	Pokemon();
	~Pokemon();
};