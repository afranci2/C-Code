#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car
{
private:
    std::string make;
    std::string model;
    std::string color;
    int year;
    double mileage;

public:
    Car(std::string make, std::string model, std::string color, int year);

    void setMake(std::string someMake);
    void setModel(std::string someModel);
    void setColor(std::string someColor);
    void setYear(int someYear);
    void setMileage(double someMileage);

    std::string getMake();
    std::string getModel();
    std::string getColor();
    int getYear();
    double getMileage();

    void printDetails();
};

#endif