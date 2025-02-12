/**************************************************
* Name: TJ Norred                                 *
* OSU Email: norredt@oregonstate.edu              *
* Course: CS361 - Software Engineering I          *
* File: main.c                                    *
* Description: Main program to present data to    *
* the user.                                       *
**************************************************/

#include <stdio.h>
#include "menu.h"

int main(void) {
    int choice;

    printGreeting();

    do {

        printf("1.) Planets            5.) Asteroids            9.) Planetary Calculator\n2.) Moons              6.) Comets\n3.) Dwarf Planets      7.) Meteors\n4.) The Sun            8.) Telescopes\n");
        printf("             0.) Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // planets
                printPlanetMenu();
                break;
            } case 2: { // moons
                printMoonMenu();
                break;
            } case 3: { //dwarf planets
                printDwarfPlanetMenu();
                break;
            } case 4: { // the sun
                printSunMenu();
                break;
            } case 5: { // asteroids
                printAsteroidMenu();
                break;
            } case 6: { // comets
                printCometMenu();
                break;
            } case 7: { // meteors
                printMeteorMenu();
                break;
            } case 8: { // telescopes
                printTelescopeMenu();
                break;
            } case 9: { // calculator
                printPlanetaryCalculator();
                break;
            } case 0: {
                choice = -1;
                printf("Are you sure you want to exit the application? (Enter '0' to confirm): ");
                scanf("%d", &choice);
                break;
            } default: {
                printf("\nYou entered an incorrect choice. Try again.\n\n");
                break;
            }
        }

    } while (choice != 0);

    printGoodbye();
}