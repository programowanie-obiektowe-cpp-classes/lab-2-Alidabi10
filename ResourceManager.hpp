#pragma once

#include "Resource.hpp"
class ResourceManager
{ 
	//resource to jakby robot
	//resourceManager to pilot do robota
private:
	Resource* resource;

public:
	ResourceManager()
	{
		resource = new Resource();
	}
	~ResourceManager()
	{
		delete resource;
	}

	//konstruktor kopiujacy
	ResourceManager(const ResourceManager& other) 
	{
		resource = new Resource(*other.resource);
	}

	//operator przypisania kopiujacego =
	ResourceManager& operator=(const ResourceManager& other)
	{
		if (this != &other)
		{
			Resource* tmp = new Resource(*other.resource);
			delete resource;
			resource = tmp;
		}
		return *this;
	}
	double get() const 
	{
		return (*resource).get();
	}


};

