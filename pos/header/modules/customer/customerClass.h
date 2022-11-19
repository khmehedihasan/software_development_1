#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;


    struct Customer{
        int id;
        string name;
        string email;
        string phone;
        string address;
        string date;
        struct Customer *next;
    };

    typedef struct Customer customers;

    customers *startC = NULL;

