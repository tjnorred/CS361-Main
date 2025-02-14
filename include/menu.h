#ifndef MENU_H
#define MENU_H

#include "planet.h"
#include "moon.h"

void printGreeting();
void printGoodbye();
void printDwarfPlanetMenu();
void printSunMenu();
void printAsteroidMenu();
void printCometMenu();
void printMeteorMenu();
void printTelescopeMenu();
void printCalculationMenu(struct Planet planet);
void printPlanetaryCalculator();
void printRelativeSizeCalcMenu();

#endif