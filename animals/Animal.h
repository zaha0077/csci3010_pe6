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

//The hornet. An animal that gets stronger the more it loses, 
//until its power reaches a value of 10.
class Hornet : public Animal {
public:
	Hornet():
	Animal("angry buzzing")
	{}

	void Fight(Animal &opponent);

	int GetPower(){ return 2+anger_; };
	
	private:
	int anger_ = 0;
};

class Wombat : public Animal{
public:
	Wombat();
	Animal("nom nom nom")
	{}
	
	void EatGrass(); //wombat eats grass for some GAINZ
	
	int GetPower (return power_;);

private:
	int power_;
	
};

#endif  // _ANIMAL_H_
