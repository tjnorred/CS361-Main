#ifndef MOON_H
#define MOON_H

struct Moon
{
    char* name;
    char* description;
    int radius;
    int mass;
    int diameter;
    float distanceFromPlanet;
    int orbit;
    int speed;
    int lowTemp;
    int highTemp;
    char* composition;
    char* magnetosphere;

};

// declare functions in this file
// ex: void addPlanet();

#endif