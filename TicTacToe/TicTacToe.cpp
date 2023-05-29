#include <iostream>
#include <string>

/**
    @author Deb
    @version 0.1
    Игра крестики нолки с выбором языка
*/
char drawGameTable(char board[][3]);
int beckend();

int main()
{
    char NUMBERS_BOARD[][3] = {
            {'9', '8', '7'},
            {'6', '5', '4'},
            {'3', '2', '1'},
    };
    unsigned size = sizeof(NUMBERS_BOARD) / sizeof(NUMBERS_BOARD);
    //устанавливает русский язык
    setlocale(LC_ALL, "Russian");
   
    /*
    std::cout << "You want to change language y n: ";
    std::string chooseLanguage;
    std::cin >> chooseLanguage;
    
    if (chooseLanguage == "y") {
        std::cout << "y";
        std::cout << "Подтвердить выбор: да нет";

        std::string confirmationOfSelection;
        std::cin >> confirmationOfSelection;
        if (confirmationOfSelection == "да") {
            
        }
    }*/
    std::cout << "Добро пожаловать,это игра крестики нолики." <<
        "\n" <<"Ниже представленно поле в котором каждая цифра означает свою клетку:"<<'\n'<< 
        "Введите число куда бы вы хотели посавить X." << "\n";

    //вызывает отрисовку игрового поля  
    drawGameTable(NUMBERS_BOARD);
    //вызывает функцию в которой отвечает за возможность ходить и работу компьютера
    beckend();
    
   
  
}

