#include <iostream>
#include "../include/Workout.h"

Workout::Workout(int w_id, std::string w_name, int w_price, WorkoutType w_type)
        :id(w_id), name(w_name), price(w_price),type(w_type)
{
}

int Workout::getId() const
{
    return id;
}

std::string Workout::getName() const
{
    return name;
}

int Workout::getPrice() const
{
    return price;
}

WorkoutType Workout::getType() const
{
    return type;
}

std::string Workout::toString()
{
    std::string str;
    if (getType() == ANAEROBIC)
        str= getName() + ", Anaerobic, " ;
    else if (getType() == MIXED)
        str = getName() + ", Mixed, ";
    else
        str = getName() + ", Cardio, ";
    str=str+std::to_string(getPrice());
    return str;
}

Workout::~Workout()
{
    //all fields are on the stack
}

Workout::Workout(const Workout& other):id(other.id), name(other.name), price(other.price), type(other.type)
{

}

Workout& Workout::operator=(const Workout &other) {
    std::cout<<"enter operator =: "<<std::endl;

    return *this;
}

