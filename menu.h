#ifndef MENU_H
#define MENU_H

#include "planet.h"

void printGreeting();
void printGoodbye();
void printPlanetMenu();
void printMoonMenu();
void printDwarfPlanetMenu();
void printSunMenu();
void printAsteroidMenu();
void printCometMenu();
void printMeteorMenu();
void printTelescopeMenu();
void printPlanetData(struct Planet planet);
void printCalculationMenu(struct Planet planet);

#endif