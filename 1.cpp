#include "1.h"

int main()
{
	Draw<Skill> draw;

	return 0;
}

template <class T>
void Draw<T>::AddRandom(int Prob, const T &Data)
{
}

template <class T>
bool Draw<T>::GetRandom(T &Data) const
{
	return false;
}

Skill::Skill()
{
}

Skill::Skill(string Name, int Prob)
{
	this->Name = Name;
	this->Prob = Prob;
}