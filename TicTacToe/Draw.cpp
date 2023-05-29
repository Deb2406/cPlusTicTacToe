#include <iostream>
#include <windows.h>
/**
    Ýòîò ôàéë îòâå÷àåò çà ïðîðèñîâêó, èãðîâîãî ïîëÿ
*/
char drawGameTable(char board[][3]) {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    std::cout << "\n";
    int sizeBoard { 3 };

    //ïóòåì ïåðåáîðà,èç 2-óõ ìåðíîãî ìàññèâà ïå÷àòàåòñÿ èãðîâîå ïîëå
    for (int line = 0; line < sizeBoard; line++) {
        for (int number = 0; number < sizeBoard; number++) {
            //ñ íà÷àëà ïå÷àòàåòñÿ ïóñòîå ìåñòî, à çàòåì öèôðà èç ìàññèâà
            std::cout << " " << board[line][number];
            //ïîñëå 2 èòòåðàöèè íå ñòàâèòñÿ |
            if (number != 2) {
                std::cout << "  |";

            }

        }
        //ïå÷àòàåò ðàçãðàíè÷åíèå
        if (line != 2) {
            std::cout << "\n";
            std::cout << "----+----+----";
            std::cout << "\n";

        }
    }
    std::cout << "\n";
    std::cout << "\n";
    return 0;
}
