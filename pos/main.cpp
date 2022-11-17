#include<iostream>
//#include <ctime>
#include <string>
//#include <conio.h>
//#include <stdlib.h>
#include "tabulate/table.hpp"
#include "header/menu/mainMenu.h"
//#include "header/message/errorMessage.h"
//#include "header/message/successMessage.h"
using namespace tabulate;
using namespace std;

void successMessage();
void errorMessage();


int main() {


   // time_t now = time(0); // get current dat/time with respect to system

   // char* dt = ctime(&now); // convert it into string


  //cout << dt << endl; // print local date and time
        //string name;

       //cout<<"Enter product name:";
        //getline(cin, name);
        //system ("CLS");
        //cout<<name;


    int value;

    while(1){
        value = mainMenu();
        if(value == 10000000){
            break;
        }
    }



    //Product p1;

    //p1.getName();

    //getch();
    //system ("CLS");



  return 0;

}
