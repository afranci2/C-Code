#include "Car.h"

Car::Car(std::string make, std::string model, std::string color, int year)
{
    this->make = make;
    this->model = model;
    this->color = color;
    this->year = year;
}

void Car::setMake(std::string someMake)
{
    this->make = someMake;
}

void Car::setModel(std::string someModel)
{
    this->model = someModel;
}

void Car::setColor(std::string someColor)
{
    this->color = someColor;
}

void Car::setYear(int someYear)
{
    this->year = someYear;
}

void Car::setMileage(double someMileage)
{
    this->mileage = someMileage;
}

std::string Car::getMake()
{
    return this->make;
}

std::string Car::getModel()
{
    return this->model;
}

std::string Car::getColor()
{
    return this->color;
}

int Car::getYear()
{
    return this->year;
}

double Car::getMileage()
{
    return this->mileage;
}

void Car::printDetails()
{
    std::cout << "Car Details:" << std::endl;
    std::cout << "Make: " << this->make << std::endl;
    std::cout << "Model: " << this->model << std::endl;
    std::cout << "Color: " << this->color << std::endl;
    std::cout << "Year: " << this->year << std::endl;
    std::cout << "Mileage: " << this->mileage << " miles" << std::endl;
}