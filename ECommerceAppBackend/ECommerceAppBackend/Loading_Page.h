#include <iostream>
#include <ctime>
#include <windows.h>

void gotoXY(int x, int y) {
    COORD d;
    d.X = x;
    d.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void F_Loading() {
    std::cout << "\n\n\n\n\n\n";
    setColor(12); 
    std::cout << "\t\t\t       ----------------------------------------  \n";
    std::cout << "\t\t\t             PENTAGRAM GAME HACKING STORE        \n";
    std::cout << "\t\t\t       ---------------------------------------- \n";
    std::cout << "\t\t\t                   GAME HACKING CENTER              \n";
    std::cout << "\t\t\t       ________________________________________  \n";

    char a = 219;
    gotoXY(45, 14);
    setColor(10); 

    std::cout << "LOADING...... " << std::endl;

    gotoXY(37, 16);
    for (int r = 1; r <= 26; r++) {
        for (int speed = 0; speed <= 30000000; speed++);
        std::cout << a;
    }
    std::cout << std::endl;

    setColor(15); 
}
