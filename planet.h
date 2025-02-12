#ifndef PLANET_H
#define PLANET_H

struct Planet
{
    char* name;
    char* description;
    int radius;
    float mass;  // future use
    int diameter; // future use
    float distanceFromSun;
    float distanceFromEarth;
    int orbit;
    float speed; // future use
    float hoursInSolarDay;
    int lowTemp;
    int highTemp;
    char* composition;
    char* magnetosphere;

    // Calculated
    float relativeSize;
    float surfaceGravity;
    float travelTime;
    float surfaceArea;
    float escapeVelocity;
    float absoluteMagnitude;
    float apparentMagnitude;

    // aphelion
    // perihelion
    // semi-major axis
    // eccentricity
    

    // Possibly calculate the radius or diameter via microservice

};

// declare functions in this file
// ex: void addPlanet();

#endif