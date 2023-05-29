#include <iostream>

/**
    Ёто файл отвечает за возможность ходить человеку и работу компьютера
*/
//объ€вление дл€ функции в другом файле, отвечает за прорисовку, игрового пол€.
char drawGameTable(char board[][3]);
//объ€вление в другом файле, отвечает за проверку, на зан€тость или пустоту в таблицу
int checkGameTable(int line, int number, char symbol);
//провер€ет победу
bool checkWin();
//отвечает за работу компьютера
int computer();

char NUMBERS_BOARD[][3] = {
            {'9', '8', '7'},
            {'6', '5', '4'},
            {'3', '2', '1'},
};


int comparisonTable(int place,char symbol) {
    int sizeBoard{ 3 };
    bool loop = true;
    char charNumber = static_cast<char>(place+'0');
    for (int line = 0; loop; line++) {
        for (int number = 0; loop; number++) {
            if (NUMBERS_BOARD[line][number] == charNumber) {
                checkGameTable(line, number, symbol);
                loop = false;
            }
        }
    }
    return 0;
}

//функци€ отвечающа€, за возможность ходить игрока
int player() {
    int motion{};
    while (true) {
        std::cout << "¬аш ход, введите число от 1 до 9: ";
        std::cin >> motion;

        if (motion <= 9 && motion >= 1) {
            break;
        }
        else {
            std::cout << "Try again :/ \n";
        }
    }
    // символ 'X' передаетс€ в функцию, что бы он ставилс€ на поле
    char symbol{ 'X' };
    comparisonTable(motion, symbol);
    return 0;
}

//ќбща€ функци€ этого файла из который вызываютс€  generationNumbers и player
int beckend() {

    setlocale(LC_ALL, "Russian");
    bool loop = true;
    while (loop)
    {
        player();
        computer();
        if (checkWin()) {
            break;
        }
    }
    return 0;
}