#include <stdio.h>
#include "../include/planet.h"

void printDwarfPlanetMenu()
{
    int choice;
    do
    {
        printf("Enter the number for the dwarf planet you wish to explore.\n");
        printf("1.) Pluto      4.) Makemake\n2.) Ceres      5.) Eris\n3.) Haumea                 ");
        printf("    0.) Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\nPluto\n");
            printf("----------------\n\n");
            printf("Pluto is a complex and mysterious world with mountains, valleys, plains, craters, and glaciers. It is located in the distant Kuiper Belt.\n\n");
            printf("Discovered in 1930, Pluto was long considered our solar system's ninth planet. But after the discovery of similar worlds deeper in the Kuiper Belt, Pluto was reclassified as a dwarf planet in 2006 by the International Astronomical Union.\n\n");
            printf("According to the 2006 IAU Resolution, \"a dwarf planet is an object in orbit around the Sun that is large enough to pull itself into a nearly round shape but has not been able to clear its orbit of debris.\" The IAU stated that Pluto falls into the dwarf planet category because it is located in a part of our solar system known as the Trans-Neptunian region (beyond Neptune) where other objects might cross Pluto's orbital path.\n\n");
            break;
        }
        case 2:
        {
            printf("\nCeres\n");
            printf("----------------\n\n");
            printf("Dwarf planet Ceres is the largest object in the asteroid belt between Mars and Jupiter, and it's the only dwarf planet located in the inner solar system. It was the first member of the asteroid belt to be discovered when Giuseppe Piazzi spotted it in 1801. When NASA's Dawn arrived in 2015, Ceres became the first dwarf planet to receive a visit from a spacecraft.\n\n");
            printf("Called an asteroid for many years, Ceres is so much bigger and so different from its rocky neighbors that scientists classified it as a dwarf planet in 2006. Even though Ceres comprises 25 percent of the asteroid belt's total mass, Pluto is still 14 times more massive.\n\n");
            break;
        }
        case 3:
        {
            printf("\nHaumea\n");
            printf("----------------\n\n");
            printf("Dwarf planet Haumea was originally designated 2003 EL61 (and nicknamed Santa by one discovery team). Haumea is located in the Kuiper Belt, a doughnut-shaped region of icy bodies beyond the orbit of Neptune.\n\n");
            printf("Haumea is an oval-shaped dwarf planet that is one of the fastest rotating large objects in our solar system. The fast spin distorts Haumea's shape, making this dwarf planet look like a football.\n\n");
            break;
        }
        case 4:
        {
            printf("\nMakemake\n");
            printf("----------------\n\n");
            printf("Dwarf planet Makemake - along with Pluto, Haumea, and Eris - is located in the Kuiper Belt, a donut-shaped region of icy bodies beyond the orbit of Neptune. Makemake is slightly smaller than Pluto, and is the second-brightest object in the Kuiper Belt as seen from Earth while Pluto is the brightest. It takes about 305 Earth years for this dwarf planet to make one trip around the Sun.\n\n");
            printf("Makemake holds an important place in the history of solar system studies because it was one of the objects - along with Eris - whose discovery prompted the International Astronomical Union to reconsider the definition of a planet, and to create the new group of dwarf planets.\n\n");
            printf("Makemake was first observed in March 2005 by M.E. Brown, C.A. Trujillo, and D.L. Rabinowitz at the Palomar Observatory, California. Its unofficial codename was Easterbunny, Brown said, \"in honor of the fact that it was discovered just a few days past Easter.\" Before this dwarf planet was confirmed, its provisional name was 2005 FY9. In 2016, NASA's Hubble Space Telescope spotted a small, dark moon orbiting Makemake.\n\n");
            break;
        }
        case 5:
        {
            printf("\nEris\n\n");
            printf("----------------\n");
            printf("Eris is one of largest the dwarf planets in our solar system. It's about the same size as Pluto, but it's three times farther from the Sun.\n\n");
            printf("The discovery of Eris help trigger a debate in the scientific community that led to the International Astronomical Union's decision in 2006 to clarify the definition of a planet. Pluto, Eris, and other similar objects are now classified as dwarf planets.\n\n");
            printf("Eris was discovered on Jan. 5, 2005, from data obtained on Oct. 21, 2003, during a Palomar Observatory survey of the outer solar system by Mike Brown, a professor of planetary astronomy at the California Institute of Technology; Chad Trujillo of the Gemini Observatory; and David Rabinowitz of Yale University.\n\n");
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("\nYou entered an incorrect choice. Try again.\n\n");
        }
        }

    } while (choice != 0);
}

void printPlanetMenu()
{
    int choice;
    do
    {
        printf("Enter the number for the planet you wish to explore.\n");
        printf("1.) Mercury     5.) Jupiter\n2.) Venus       6.) Saturn\n3.) Earth       7.) Uranus\n4.) Mars        8.) Neptune");
        printf("     0.) Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            struct Planet mercury;
            mercury.name = "Mercury";
            mercury.description = "The smallest planet in our solar system and nearest to the Sun, Mercury is only slightly larger than Earth's Moon. From the surface of Mercury, the Sun would appear more than three times as large as it does when viewed from Earth, and the sunlight would be as much as seven times brighter.";
            mercury.radius = 2440;
            mercury.diameter = mercury.radius * 2;
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
            venus.diameter = venus.radius * 2;
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
            earth.diameter = earth.radius * 2;
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
            mars.diameter = mars.radius * 2;
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
            jupiter.diameter = jupiter.radius * 2;
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
            saturn.diameter = saturn.radius * 2;
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
            uranus.diameter = uranus.radius * 2;
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
            neptune.diameter = neptune.radius * 2;
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
            printf("\nYou entered an incorrect choice. Try again.\n\n");
        }
        }

    } while (choice != 0);
}

void printPlanetData(struct Planet planet)
{
    printf("\n----------------\n");
    printf("%s\n", planet.name);
    printf("----------------\n\n");
    printf("Description:\n");
    printf("----------------\n");
    printf("%s\n\n", planet.description);
    printf("Size and Distance:\n");
    printf("----------------\n");
    printf("Diameter: %d km   Dist. from the Sun: %.1f AU\n", planet.diameter, planet.distanceFromSun);
    printf("Radius:   %d km   Dist. from Earth:   %.1f AU\n\n", planet.radius, planet.distanceFromEarth);
    printf("Orbit and Rotation:\n");
    printf("----------------\n");
    printf("Orbit: %d Earth days\nRotation: %.1f hours\n\n", planet.orbit, planet.hoursInSolarDay);
    printf("Atmosphere:\n");
    printf("----------------\n");
    printf("%s\n\n", planet.composition);
    printf("Temperature: (Low - High)\n");
    printf("----------------\n");
    printf("%d C - %d C\n\n", planet.lowTemp, planet.highTemp);
    printf("Magnetosphere:\n");
    printf("----------------\n");
    printf("%s\n\n", planet.magnetosphere);

}