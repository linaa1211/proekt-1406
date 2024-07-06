#include <iostream>
#include <iomanip>

using namespace std;

struct Dish {
    string name;  // название блюда
    double price; // цена 
};

const int MAX_MENU = 13; 

Dish menu[MAX_MENU] = { 
    {"Борщ", 224.0},
    {"Суп", 220.0},
    {"Салат", 150.0},
    {"Котлета", 79.0},
    {"Стейк", 256.0},
    {"Суші", 399.0},
    {"Піца", 299.0},
    {"Паста", 275.0},
    {"Салат", 150.0},
    {"Кава", 50.0},
    {"Чай", 50.0},
    {"Какао", 50.0},
    {"Лимонад", 50.0}
};

void displayMenu() { 
    cout << "Меню:" << endl; 
    for (int i = 0; i < MAX_MENU; i++) { 
        cout << i + 1 << ". " << menu[i].name << " - " << menu[i].price << " грн" << endl;
    }
    cout << endl;
}

void printCheck(Dish dish) { 
    cout << fixed << setprecision(2); 
    cout << "Ви обрали: " << dish.name << endl;
    cout << "Вартість: " << dish.price << " грн" << endl;
    cout << "Дякую за замовлення!" << endl;
}

int main() {
    int choice; 

    displayMenu(); 

    cout << "Введіть номер страви: ";
    cin >> choice;

    if (choice < 1 || choice > MAX_MENU) {
        cout << "Помилка, невірний номер страви" << endl;
        return 1;
    }

    printCheck(menu[choice - 1]);

    return 0;
}