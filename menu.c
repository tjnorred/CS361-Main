/**************************************************
 * Name: TJ Norred                                 *
 * OSU Email: norredt@oregonstate.edu              *
 * Course: CS361 - Software Engineering I          *
 * File: menu.c                                    *
 * Description: All functions related to           *
 * displaying the menu to the user.                *
 **************************************************/

#include <stdio.h>
#include "menu.h"

void printGreeting() {
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Welcome to Space Explorer!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("Explore the universe!  Enter the number for the category you wish to explore.\n\n");
}

void printGoodbye() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Goodbye!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printPlanetMenu()
{
    int planetChoice;
    do
    {
        printf("1.) Mercury     5.) Jupiter\n2.) Venus       6.) Saturn\n3.) Earth       7.) Uranus\n4.) Mars        8.) Neptune\n");
        printf("      0.) Main Menu\n");
        printf("Select a planet to learn more: ");
        scanf("%d", &planetChoice);

        switch (planetChoice)
        {
        case 1:
        {
            struct Planet mercury;
            mercury.name = "Mercury";
            mercury.description = "The smallest planet in our solar system and nearest to the Sun, Mercury is only slightly larger than Earth's Moon. From the surface of Mercury, the Sun would appear more than three times as large as it does when viewed from Earth, and the sunlight would be as much as seven times brighter.";
            mercury.radius = 2440;
            mercury.distanceFromSun = 0.4;
            mercury.distanceFromEarth = 0.6;
            mercury.orbit = 88;
            mercury.hoursInSolarDay = 1416;
            mercury.lowTemp = -180;
            mercury.highTemp = 430;
            mercury.composition = "Mercury's exosphere is composed mostly of oxygen, sodium, hydrogen, helium, and potassium.";
            mercury.magnetosphere = "Mercury's magnetic field is offset relative to the planet's equator. Though Mercury's magnetic field at the surface has just 1% the strength of Earth's, it interacts with the magnetic field of the solar wind to sometimes create intense magnetic tornadoes.";

            printPlanetData(mercury);
            break;
        }
        case 2:
        {
            struct Planet venus;
            venus.name = "Venus";
            venus.description = "Venus is the second planet from the Sun, and our closest planetary neighbor. It's the hottest planet in our solar system, and is sometimes called Earth's twin.";
            venus.radius = 6052;
            venus.distanceFromSun = 0.72;
            venus.distanceFromEarth = 0.28;
            venus.orbit = 225;
            venus.hoursInSolarDay = 5832;
            venus.lowTemp = 30;
            venus.highTemp = 70;
            venus.composition = "The atmosphere is mostly carbon dioxide - the same gas driving the greenhouse effect on Venus and Earth - with clouds composed of sulfuric acid.";
            venus.magnetosphere = "Even though Venus is similar in size to Earth and has a similar-sized iron core, the planet does not have its own internally generated magnetic field. Instead, Venus has what is known as an induced magnetic field. This weak magnetic field is created by the interaction of the Sun's magnetic field and the planet's outer atmosphere.";

            printPlanetData(venus);
            break;
        }
        case 3:
        {
            struct Planet earth;
            earth.name = "Earth";
            earth.description = "Earth - our home planet - is the third planet from the Sun, and the fifth largest planet. It's the only place we know of inhabited by living things.";
            earth.radius = 6371;
            earth.distanceFromSun = 1;
            earth.distanceFromEarth = 0;
            earth.orbit = 365;
            earth.hoursInSolarDay = 24;
            earth.lowTemp = -89;
            earth.highTemp = 56;
            earth.composition = "Earth has an atmosphere that consists of 78% nitrogen, 21% oxygen, and 1% other gases such as argon, carbon dioxide, and neon.";
            earth.magnetosphere = "Our planet's rapid rotation and molten nickel-iron core give rise to a magnetic field, which the solar wind distorts into a teardrop shape in space. (The solar wind is a stream of charged particles continuously ejected from the Sun.)";

            printPlanetData(earth);
            break;
        }
        case 4:
        {
            struct Planet mars;
            mars.name = "Mars";
            mars.description = "Mars, the fourth planet from the Sun, is a dusty, cold, desert world with a very thin atmosphere. This dynamic planet has seasons, polar ice caps, extinct volcanoes, canyons and weather.";
            mars.radius = 3390;
            mars.distanceFromSun = 1.5;
            mars.distanceFromEarth = 0.5;
            mars.orbit = 687;
            mars.hoursInSolarDay = 24.6;
            mars.lowTemp = -153;
            mars.highTemp = 20;
            mars.composition = "Composition: 95% carbon dioxide, 2.7% nitrogen, 1.6% argon gases, 0.7% other";
            mars.magnetosphere = "Mars has no global magnetic field today, but areas of the Martian crust in the southern hemisphere are highly magnetized, indicating traces of a magnetic field from 4 billion years ago.";

            printPlanetData(mars);
            break;
        }
        case 5:
        {
            struct Planet jupiter;
            jupiter.name = "Jupiter";
            jupiter.description = "Jupiter is a world of extremes. It's the largest planet in our solar system - if it were a hollow shell, 1,000 Earths could fit inside. It's also the oldest planet, forming from the dust and gases left over from the Sun's formation 4.6 billion years ago.";
            jupiter.radius = 69911;
            jupiter.distanceFromSun = 5.2;
            jupiter.distanceFromEarth = 4.2;
            jupiter.orbit = 4333;
            jupiter.hoursInSolarDay = 9.9;
            jupiter.lowTemp = -195;
            jupiter.highTemp = -108;
            jupiter.composition = "The composition of Jupiter is similar to that of the Sun - approximately 76% hydrogen and 24% helium. Deep in the atmosphere, pressure and temperature increase, compressing the hydrogen gas into a liquid. This gives Jupiter the largest ocean in the solar system - an ocean made of hydrogen instead of water.";
            jupiter.magnetosphere = "The Jovian magnetosphere is the region of space influenced by Jupiter's powerful magnetic field. It balloons 600,000 to 2 million miles (1 to 3 million kilometers) toward the Sun (seven to 21 times the diameter of Jupiter itself) and tapers into a tadpole-shaped tail extending more than 600 million miles (1 billion kilometers) behind Jupiter, as far as Saturn's orbit. Jupiter's enormous magnetic field is 16 to 54 times as powerful as that of the Earth.";

            printPlanetData(jupiter);
            break;
        }
        case 6:
        {
            struct Planet saturn;
            saturn.name = "Saturn";
            saturn.description = "Like fellow gas giant Jupiter, Saturn is a massive ball made mostly of hydrogen and helium. Saturn is not the only planet to have rings, but none are as spectacular or as complex as Saturn's. Saturn also has dozens of moons.";
            saturn.radius = 58232;
            saturn.distanceFromSun = 9.5;
            saturn.distanceFromEarth = 8.5;
            saturn.orbit = 10755;
            saturn.hoursInSolarDay = 10.7;
            saturn.lowTemp = -185;
            saturn.highTemp = -122;
            saturn.composition = "Like Jupiter, Saturn is made mostly of hydrogen and helium. At Saturn's center is a dense core of metals like iron and nickel surrounded by rocky material and other compounds solidified by intense pressure and heat. ";
            saturn.magnetosphere = "Saturn's magnetic field is smaller than Jupiter's but still 578 times as powerful as Earth's. Saturn, the rings, and many of the satellites lie totally within Saturn's enormous magnetosphere, the region of space in which the behavior of electrically charged particles is influenced more by Saturn's magnetic field than by the solar wind.";

            printPlanetData(saturn);
            break;
        }
        case 7:
        {
            struct Planet uranus;
            uranus.name = "Uranus";
            uranus.description = "Uranus is the seventh planet from the Sun, and it has the third largest diameter of planets in our solar system. Uranus appears to spin sideways.";
            uranus.radius = 25362;
            uranus.distanceFromSun = 19.0;
            uranus.distanceFromEarth = 18.0;
            uranus.orbit = 30687;
            uranus.hoursInSolarDay = 17.0;
            uranus.lowTemp = -226;
            uranus.highTemp = -216;
            uranus.composition = "Uranus' atmosphere is mostly hydrogen and helium, with a small amount of methane and traces of water and ammonia. The methane gives Uranus its signature blue color.";
            uranus.magnetosphere = "Uranus has an unusual, irregularly shaped magnetosphere. Magnetic fields are typically in alignment with a planet's rotation, but Uranus' magnetic field is tipped over.";

            printPlanetData(uranus);
            break;
        }
        case 8:
        {
            struct Planet neptune;
            neptune.name = "Neptune";
            neptune.description = "Dark, cold, and whipped by supersonic winds, ice giant Neptune is more than 30 times as far from the Sun as Earth. Neptune is the only planet in our solar system not visible to the naked eye. In 2011 Neptune completed its first 165-year orbit since its discovery in 1846.";
            neptune.radius = 24622;
            neptune.distanceFromSun = 30.0;
            neptune.distanceFromEarth = 29.0;
            neptune.orbit = 60190;
            neptune.hoursInSolarDay = 16.0;
            neptune.lowTemp = -218;
            neptune.highTemp = -201;
            neptune.composition = "Neptune's atmosphere is made up mostly of hydrogen and helium with just a little bit of methane. Neptune's neighbor Uranus has a similar makeup; the methane absorbs other colors but reflects blue, giving these ice giants their similar hue.";
            neptune.magnetosphere = "The main axis of Neptune's magnetic field is tipped over by about 47 degrees compared with the planet's rotation axis. Like Uranus, whose magnetic axis is tilted about 60 degrees from the axis of rotation, Neptune's magnetosphere undergoes wild variations during each rotation because of this misalignment. The magnetic field of Neptune is about 27 times more powerful than that of Earth.";

            printPlanetData(neptune);
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("\nInvalid selection. Try again.\n");
        }
        }

    } while (planetChoice != 0);
}

void printPlanetData(struct Planet planet)
{
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%s\n", planet.name);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Description:\n\n");
    printf("%s\n", planet.description);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Size and Distance:\n\n");
    printf("Dist. from the Sun: %.1f AU    Radius: %d km\nDist. from Earth: %.1f AU\n", planet.distanceFromSun, planet.radius, planet.distanceFromEarth);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Orbit and Rotation:\n\n");
    printf("Orbit: %d Earth days\nRotation: %.1f hours\n", planet.orbit, planet.hoursInSolarDay);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Atmosphere:\n\n");
    printf("%s\n", planet.composition);
    printf("Temperature: %d - %d C\n", planet.lowTemp, planet.highTemp);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Magnetosphere:\n\n");
    printf("%s\n", planet.magnetosphere);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printCalculationMenu(planet);
}

void printCalculationMenu(struct Planet planet)
{
    int choice;
    do
    {
        printf("Please make a selection\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Calculate %s's: 1.) Relative Size  2.) Surface Gravity  3.) Travel Time\n4.) More Details 0.) Return\n", planet.name);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Coming Soon!\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
        }
        case 2:
        {
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Coming Soon!\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
        }
        case 3:
        {
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Coming Soon!\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
        }
        case 4:
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Details:\n\n");
            printf("\n1.) Relative Size: Calculates and displays the size of the selected planet relative to Earth.\n\n");
            printf("2.) Surface Gravity: Calculates the surface gravity of a planet or moon based on its mass and radius.\n\n");
            printf("3.) Travel Time: calculates the estimated travel time to a planet.\n\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            break;
        }
        case 0:
        {
            break;
        }

        default:
            printf("\nYou entered an incorrect choice. Try again.\n\n");
            break;
        }

    } while (choice != 0);
}

void printMoonMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");

}

void printDwarfPlanetMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printSunMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("The Sun\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Length of day: 25 Earth days at the equator and 36 Earth days at the poles.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Length of year: The Sun doesn't have a “year,” per se. But the Sun orbits the center of the Milky Way about every 230 million Earth years, bringing the planets, asteroids, comets, and other objects with it.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Star type: G2 V, yellow dwarf main-sequence star\nSurface temperature: (Photosphere) 10,000 degrees Fahrenheit (5,500 degrees Celsius)\nCorona (solar atmosphere) temperature: Up to 3.5 million °F (2 million °C)\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printAsteroidMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printCometMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printMeteorMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void printTelescopeMenu() {
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Coming Soon!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

// calculateSurfaceGravity

// calculateTravelTime

// calculateRelativeSize