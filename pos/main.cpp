#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include "tabulate/table.hpp"
#include "header/menu/mainMenu.h"
#include "header/product.h"
using namespace tabulate;
using namespace std;



int main() {
    int value;

    while(1){
        value = mainMenu();
        if(value == 0){
            break;
        }
    }



    //Product p1;

    //p1.getName();

    //getch();
    //system ("CLS");



  return 0;

}
