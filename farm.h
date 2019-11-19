#include <iostream>
using namespace std;

class Farm
{
    private:
    string location;
    int count_of_animals;
    int power;
    
    public:
    string specialization;
    int area_of_fields;     //in square kilometers
    
    Farm(string loc, int animals, int pow, int year, int vehicels, string spec, int area);
    ~Farm();

    void setLocation(string location);
    string getLocation();
    void setCount_of_animals(int count_of_animals);
    int getCount_of_animals();
    void setPower(int power);
    int getPower();
    void setYear_of_foundatoin(int year_of_foundatoin);
    int getYear_of_foundatoin();
    void setCount_of_vehicels(int count_of_vehicels);
    int getCount_of_vehicels();
    void getInfo();
    
    protected:
    int year_of_foundatoin;
    int count_of_vehicels;
};