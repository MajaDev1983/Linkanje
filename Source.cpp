#include <iostream>
#include <memory>

class Entity
{
public:
	Entity();
	~Entity();

private:

};


int main()
{
	int* someNumber = (int*)malloc(sizeof(int));
	free(someNumber);

	int* newNumber = new int;
	delete newNumber;

	Entity* mallocEntity = (Entyity*)malloc(sizeof(Entity));
	free(mallocEntity);

	Entity* newEntity = new Entity;
	delete newEntity;

	//Malloc ne poziva konstruktor klase, free ne poziva destruktor klase 
	//new poziva konstruktora i delete destruktora

}