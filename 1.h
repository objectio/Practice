#pragma once

#include <iostream>
#include <map>
#include <cstring>
using namespace std;

template <class T>
class Draw
{
private:
	vector<T> DataSet;

public:
	void AddRandom(int Prob, const T& Data); //Ȯ���� ������ �Է�
	bool GetRandom(T& Data) const; //Ȯ���� ���� ������ 1���� �����ϰ� ���� ������ false ����
};

class Skill
{
private:
	int Prob;
	string Name;

public:
	Skill();
	Skill(string Name, int Prob);
	inline void setProb(int newProb) { this->Prob = newProb; }
	inline int getProb() { return this->Prob; }
	inline void setName(string newName) { this->Name = newName; };
	inline string getName() { return this->Name; }
};
