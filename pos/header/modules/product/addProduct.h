#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "../../store.h"
#include "productClass.h"
    int currentProductId = 1;
using namespace std;

    void addProduct(){

        int id = currentProductId;
        string name;
        int purchasePrice;
        int salePrice;

        cout<<"Enter product name:";
        getline(cin, name);
        cout<<name;
        system ("CLS");

        cout<<"Enter product name:";
        getline(cin, name);
        cout<<name;
        system ("CLS");

        cout<<"Enter product purchase price:";
        cin>>purchasePrice;
        system ("CLS");

        cout<<"Enter product sale price:";
        cin>>salePrice;
        system ("CLS");

        Product p1(id, name, purchasePrice, salePrice, 0, "16/11/2022");

        cout<< p1.id <<endl;
        cout<< p1.name <<endl;
        cout<< p1.purchasePrice <<endl;
        cout<< p1.salePrice <<endl;
        cout<< p1.inStock <<endl;
        cout<< p1.date <<endl;



    }
