/*
 * C++ Design Patterns: Factory Method
 *
 * Define an interface for creating an object, but let subclasses decide which class to instantiate.
 * Factory Method lets a class defer instantiation to subclasses. The pattern has creational purpose
 * and applies to classes where deals with relationships through inheritence ie. they are static-fixed
 * at compile time. In contrast to Abstract Factory, Factory Method contain method to produce only one
 * type of product.
 *
 */

#include<iostream>
#include<vector>

/*
 * ### When to use ###
 *
 * a class cant anticipate the class of objects it must create
 * a class wants its subclasses to specify the objects it creates
 * classes delegate responsibility to one of several helper subclasses, and you want to localize the knowledge of which helper subclass is the delegate
 *
 */

// Hierarchy of classes of game characters
#pragma region Units

class Unit
{
public:
	virtual void info()	= 0;
	virtual ~Unit()		= default;
	// ...
};

class Tank : public Unit
{
public:
	void info() override
	{
		std::cout << "Tank" << std::endl;
		// ...
	}
	// ...
};

class Plain : public Unit
{
public:
	void info() override
	{
		std::cout << "Plain" << std::endl;
		// ...
	}
	// ...
};

class Solder : public Unit
{
public:
	void info() override
	{
		std::cout << "Solder" << std::endl;
		// ...
	}
	// ...
};

#pragma endregion

// Factories of objects
#pragma region Factories

class Factory
{
public:
	virtual Unit* create()	= 0;
	virtual ~Factory()		= default;
	// ...
};

class TankFactory : public Factory
{
public:
	Unit * create() override
	{
		return new Tank();
	}
	// ...
};

class PlainFactory : public Factory
{
public:
	Unit * create() override
	{
		return new Plain();
	}
	// ...
};

class SolderFactory : public Factory
{
public:
	Unit * create() override
	{
		return new Solder();
	}
	// ...
};

#pragma endregion


// Creating objects using object factories
int main()
{
	std::vector<Factory*> factories{
		new TankFactory(),
		new PlainFactory(),
		new SolderFactory()
		// ...
	};

	std::vector<Unit*> vec;

	for (auto& factor : factories)
		vec.push_back(factor->create());

	for (auto& object : vec)
		object->info();
	// ...

	return 0;
}
