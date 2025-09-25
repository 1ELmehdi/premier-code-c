#include <stdio.h>

int main() {
    // Variables aéro
    int speed    = 300;     // en kts
    int altitude = 10000;   // en ft
    int pitch    = 5;       // degrés
    int roll     = -10;     // degrés
    int heading  = 12;      // degrés

    // ------------------- EFIS principal -------------------
    printf("+===============================    EFIS  ============================+\n");
    printf("| SPD(kts)                                                          ALT(ft) |\n");
    printf("| +--------+           +----------------------------------+        +------+ |\n");
    printf("| | %3d    |           |              SKY                 |        |%5d | |\n", speed + 50, altitude + 1000);
    printf("|>| %3d    |<          | Pitch:%+3d°           Roll:%+3d° |       >|%5d |<|\n", speed, pitch, roll, altitude);
    printf("| | %3d    |           |   +10°    ----|----    +10°      |        |%5d | |\n", speed - 50, altitude - 1000);
    printf("| | %3d    |           |    +5°     ---|---     +5°       |        |%5d | |\n", speed - 100, altitude - 2000);
    printf("| | %3d    |           |------   FLIGHT DIRECTOR  --------|%5d | |\n", speed - 150, altitude - 3000);
    printf("| | %3d    |           |    -5°     ---|---     -5°       |        |%5d | |\n", speed - 200, altitude - 4000);
    printf("| | %3d    |           |   -10°    ----|----    -10°      |        |%5d | |\n", speed - 250, altitude - 5000);
    printf("| +--------+           |             GROUND               |        +------+ |\n");
    printf("|                      +----------------------------------+                 |\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                   HDG: %3d°                                   \n", heading);
    printf("          330   0    30    60    90   120   150   180   210   240   270   300   \n");
    printf("                N                       E                        S        W     \n");
    printf("------------------------------------------------------------------------------\n");

    // ------------------- FMS -------------------
    printf("       +----------------------------------------------------+\n");
    printf("       | FMS COMMAND                                        |\n");
    printf("       |                                                    |\n");
    printf("       | SPD: %3d kts   ALT: %5d ft                         |\n", speed, altitude);
    printf("       | PITCH: %+3d°   ROLL: %+3d°                         |\n", pitch, roll);
    printf("       | HDG: %3d°                                          |\n", heading);
    printf("       |                                                    |\n");
    printf("       | [L] LSK1    [R] LSK2    [U] LSK3    [D] LSK4       |\n");
    printf("       | [1] TO      [2] LNAV     [3] VNAV    [4] APPR      |\n");
    printf("       +----------------------------------------------------+\n");

    return 0;
}
