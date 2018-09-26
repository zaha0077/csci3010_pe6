#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("turtle turtle turtle")
	{}


	int GetPower() { return 7; };

};

// Define your animals here
class Cow : public Animal {
public:
	Cow():
	Animal("Moo.")
	{}

	int GetPower() { return 9001; };
};
#endif  // _ANIMAL_H_
