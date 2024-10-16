#pragma once

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class Draw
{
public:
	void AddRandom(int Prob, const T& Data); //확률과 데이터 입력
	bool GetRandom(T& Data) const; //확률에 따라 데이터 1개를 리턴하고 값이 없으면 false 리턴
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