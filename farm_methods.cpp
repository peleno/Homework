#include <iostream>
using namespace std;

void Farm::setLocation(string loc)
{
    location = loc;
}

string Farm::getLocation()
{
    return location;
}

void Farm::setCount_of_animals(int animals)
{
    count_of_animals = animals;
}

int Farm::getCount_of_animals()
{
    return count_of_animals;
}

void Farm::setPower(int pow)
{
    power = pow;
}

int Farm::getPower()
{
    return power;
}

void Farm::setYear_of_foundatoin(int year)
{
    year_of_foundatoin = year;
}


int Farm::getYear_of_foundatoin()
{
    return year_of_foundatoin;
}

void Farm::setCount_of_vehicels(int vehicels)
{
    count_of_vehicels = vehicels;
}

int Farm::getCount_of_vehicels()
{
    return count_of_vehicels;
}

void Farm::getInfo()
{
    cout << "location: " <<  this->getLocation() << endl;
    cout << "count of animals: " <<  this->getCount_of_animals() << endl;
    cout << "power: " <<  this->getPower() << endl;
    cout << "year of foundation: " <<  this->getYear_of_foundatoin() << endl;
    cout << "count of vehicels: " <<  this->getCount_of_vehicels() << endl;
    cout <<"specialization: "<< specialization << endl;
    cout << "area of fields: "<< area_of_fields << endl;
}

Farm::Farm(string loc, int animals, int pow, int year, int vehicels, string spec, int area)
{
    setLocation(loc);
    setCount_of_animals(animals);
    setPower(pow);
    setYear_of_foundatoin(year);
    setCount_of_vehicels(vehicels); 
    specialization = spec;
    area_of_fields = area;
}

Farm::~Farm()
{
    cout << "Destructor was executed." << endl;
}