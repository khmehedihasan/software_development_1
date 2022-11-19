#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;


    struct Supplier{
        int id;
        string name;
        string email;
        string phone;
        string address;
        string date;
        struct Supplier *next;
    };

    typedef struct Supplier suppliers;

    suppliers *startS = NULL;

