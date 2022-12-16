#include<iostream>
#include <string>
#include "tabulate/table.hpp"
#include "header/menu/mainMenu.h"
using namespace tabulate;
using namespace std;

void successMessage();
void errorMessage();


int main() {


    int value;

    while(1){
        value = mainMenu();
        if(value == 10000000){
            break;
        }
    }

  return 0;

}
