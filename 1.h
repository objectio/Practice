#pragma once

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class Draw
{
public:
	void AddRandom(int Prob, const T& Data); //Ȯ���� ������ �Է�
	bool GetRandom(T& Data) const; //Ȯ���� ���� ������ 1���� �����ϰ� ���� ������ false ����
};

class Skill
{
private:
	int odds;
	string name;

public:
	inline void setOdds(int newOdds) { this->odds = newOdds; }
	inline int getOdds() { return this->odds; }
	inline void setName(string newName) { this->name = newName; };
	inline string getName() { return this->name; }
};