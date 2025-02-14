/**************************************************
 * Name: TJ Norred                                 *
 * OSU Email: norredt@oregonstate.edu              *
 * Course: CS361 - Software Engineering I          *
 * File: menu.c                                    *
 * Description: All functions related to           *
 * displaying the menu to the user.                *
 **************************************************/

#include <stdio.h>
#include "../include/menu.h"

void printSunMenu() {
    printf("\nThe Sun\n");
    printf("----------------\n\n");
    printf("Length of day: 25 Earth days at the equator and 36 Earth days at the poles.\n\n");
    printf("Length of year: The Sun doesn't have a “year,” per se. But the Sun orbits the center of the Milky Way about every 230 million Earth years, bringing the planets, asteroids, comets, and other objects with it.\n\n");
    printf("Star type: G2 V, yellow dwarf main-sequence star\n\nPhotosphere temperature (Surface): 5,500 °C\nCorona temperature (solar atmosphere): Up to 2 million °C\n\n");
}

void printAsteroidMenu() {
    printf("\nAsteroids are Coming Soon!\n");
    printf("----------------\n");
}

void printCometMenu() {
    printf("\nComets are Coming Soon!\n");
    printf("----------------\n");
}

void printMeteorMenu() {
    printf("\nMeteors are Coming Soon!\n");
    printf("----------------\n");
}

void printTelescopeMenu() {
    printf("\nTelescopes are Coming Soon!\n");
    printf("----------------\n");
}

void printPlanetaryCalculator() {
    printf("\nPlanetary Calculator\n");
    printf("----------------\n\n");
    printf("Enter the number for the calculation you wish to make.\n\n");

    int choice;
    do {
        printf("1.) Relative Size    4.) Escape Velocity\n");
        printf("2.) Surface Gravity  5.) Absolute Magnitude  9.) More Details\n");
        printf("3.) Travel Time      6.) Apparent Magnitude");
        printf("  0.) Main Menu\n");
        printf("Enter a valid number for a calculator (or '0' to return): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: {
            printRelativeSizeCalcMenu();
            break;
        } case 2: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 3: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 4: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 5: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 6: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 9: {
            printf("----------------\n");
            printf("Details:\n\n");
            printf("\n1.) Relative Size: Calculates and displays the size of the selected planet relative to Earth.\n\n");
            printf("2.) Surface Gravity: Calculates the surface gravity of a planet or moon based on its mass and radius.\n\n");
            printf("3.) Travel Time: calculates the estimated travel time to a planet.\n\n");
            printf("4.) Escape Velocity: .\n\n");
            printf("5.) Absolute Magnitude: .\n\n");
            printf("6.) Apparent Magnitude: .\n\n");
            printf("----------------\n");
            break;
        } case 0: {
            printf("\n");
            break;
        } default:
            printf("\nYou entered an incorrect choice. Try again.\n\n");
            break;
        }

    } while (choice != 0);

}

void printRelativeSizeCalcMenu() {
    printf("----------------\n");
    printf("Relative Size Calculator\n");
    printf("----------------\n\n");
    printf("Choose a planet to compare its size to Earth or provide custom inputs for comparison.\n\n");

    int choice;
    do {
        printf("1.) Mercury  4.) Jupiter  7.) Neptune\n");
        printf("2.) Venus    5.) Saturn   8.) Custom Inputs\n");
        printf("3.) Mars     6.) Uranus   0.) Go Back\n");
        printf("Enter a valid number (or '0' to return): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 2: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 3: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 4: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 5: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 6: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 7: {
            printf("\n----------------\n");
            printf("Coming Soon!\n");
            printf("----------------\n");
            break;
        } case 8: {
            float objectA;
            float objectB;
            char confirm;
            int exit = 0;

            do {
                printf("Enter the diameter for object A (Whole number or decimal): ");
                scanf("%f", &objectA);
                printf("Enter the diameter for object B (Whole number or decimal): ");
                scanf("%f", &objectB);
                
                do {
                    printf("Please confirm your selection for Object A: %f and Object B:%f.\n", objectA, objectB);
                    printf("Type 'y' to confirm or 'n' to correct the data: ");
                    scanf("%s", &confirm);
    
                    if (confirm == 'Y' || confirm == 'y') {
                        exit = 1;
                        printf("Your input is confirmed\n Calculating now...\n\n");
                        break;
                    } else if (confirm == 'N' || confirm == 'n') {
                        exit = 0;
                    } else {
                        printf("\nYou entered an incorrect choice. Try again.\n\n");
                    }

                } while (exit != 1);

            } while (exit != 1);
            break;
        } case 9: {
            printf("----------------\n");
            printf("Details:\n\n");
            printf("\n1.) Relative Size: Calculates and displays the size of the selected planet relative to Earth.\n\n");
            printf("2.) Surface Gravity: Calculates the surface gravity of a planet or moon based on its mass and radius.\n\n");
            printf("3.) Travel Time: calculates the estimated travel time to a planet.\n\n");
            printf("4.) Escape Velocity: .\n\n");
            printf("5.) Absolute Magnitude: .\n\n");
            printf("6.) Apparent Magnitude: .\n\n");
            printf("----------------\n");
            break;
        } case 0: {
            printf("\n");
            break;
        } default:
            printf("\nYou entered an incorrect choice. Try again.\n\n");
            break;
        }

    } while (choice != 0);

}

void printGreeting() {
    printf("  *   .     *     .\n   .   *   .   *\n  *     .   *     .\n   .   *   .   *\n");
    printf("   Space Explorer\n");
    printf("   ----------------\n");
    printf(" Explore the Universe!\n\n");
}

void printGoodbye() {
    printf("\nGoodbye, Explorer!\n\n");
}