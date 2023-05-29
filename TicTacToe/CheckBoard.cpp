#include <iostream>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
int computer();
char drawGameTable(char board[][3]);
int player();
char emptyPlayingField[][3] = {
              {' ', ' ', ' '},
              {' ', ' ', ' '},
              {' ', ' ', ' '}
};
int sizeBoard{ 3 };

//проверка на победу
//принимает таблицу и печатает ее
//ЭТО ЯЩИК ПАНДОРЫ НЕ ОТКРЫВАЙ ЕГО!!!
bool checkWin() {
    //26.05.23 ептвою мать, это че за хуйня
    //27.05.23 не хуйня, а проверка на победу
    int number{ 0 };
    for (int line{ 0 }; line < sizeBoard; line++) {
        if (emptyPlayingField[line][number] == 'X' && emptyPlayingField[line][number + 1] == 'X' && emptyPlayingField[line][number + 2] == 'X') {
            std::cout << "You win!!!\n";
           return true;
            
        }
        if (emptyPlayingField[number][line] == 'X' && emptyPlayingField[number][line + 1] == 'X' && emptyPlayingField[number][line + 2] == 'X') {
            std::cout << "You win!!!";
            return true;
        }

        if (emptyPlayingField[line][number] == 'O' && emptyPlayingField[line][number + 1] == 'O' && emptyPlayingField[line][number + 2] == 'O') {
            std::cout << "Сomputer win!!!";
            return true;
        }
        if (emptyPlayingField[number][line] == 'O' && emptyPlayingField[number][line + 1] == 'O' && emptyPlayingField[number][line + 2] == 'O') {
            std::cout << "You win!!!";
            return true;
        }
    }
    if (emptyPlayingField[0][0] == 'X' && emptyPlayingField[1][1] == 'X' && emptyPlayingField[2][2] == 'X') {
        std::cout << "You win!!!";
        return true;
    }
    if (emptyPlayingField[0][2] == 'X' && emptyPlayingField[1][1] == 'X' && emptyPlayingField[2][0] == 'X') {
        std::cout << "You win!!!";
        return true;
    }
    if (emptyPlayingField[0][0] == 'O' && emptyPlayingField[1][1] == 'O' && emptyPlayingField[2][2] == 'O') {
        std::cout << "Сomputer win!!!";
        return true;
    }
    if (emptyPlayingField[0][2] == 'O' && emptyPlayingField[1][1] == 'O' && emptyPlayingField[2][0] == 'O') {
        std::cout << "Сomputer win!!!";
        return true;
        
    }
    return false;
}


//проверка, занято ли место
int checkGameTable(int line, int number, char symbol) {
    char charSymbol=static_cast<char>(symbol);
    while (true) {
        if (charSymbol == 'O') {
                drawGameTable(emptyPlayingField);
        }

        if (emptyPlayingField[line][number] == ' ') {
            emptyPlayingField[line][number] = symbol;
            break;
        }
        else if (symbol == 'X') {
            std::cout << "This place is occupied, try again :/ \n";  
            player();
            break;
        }
        else {
            break;
        }

    }
    return 0;
}

int computer() {
    int max{ 3 };
    int min{ 0 };
    char symbol{ 'O' };
    while (true)
    {
      srand(time(NULL));
      int line =rand() % max + min;
      //int line = min + rand() % (max - min + 1);
      //int number = min + rand() % (max - min + 1);
      int number = rand() % max + min;
      if (emptyPlayingField[line][number] == ' ') {
          emptyPlayingField[line][number] = symbol;
          checkGameTable(line, number, symbol);
          break;
      }
    }
   
    return 0;
}