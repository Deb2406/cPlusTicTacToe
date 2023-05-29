#include <iostream>

/**
    Этот файл отвечает за прорисовку, игрового поля
*/
char drawGameTable(char board[][3]) {
    std::cout << "\n";
    int sizeBoard { 3 };

    //путем перебора,из 2-ух мерного массива печатается игровое поле
    for (int line = 0; line < sizeBoard; line++) {
        for (int number = 0; number < sizeBoard; number++) {
            //с начала печатается пустое место, а затем цифра из массива
            std::cout << " " << board[line][number];
            //после 2 иттерации не ставится |
            if (number != 2) {
                std::cout << "  |";

            }

        }
        //печатает разграничение
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