
#include<iostream>
#include "customerClass.h"
using namespace std;

    customers *findCustomer(int id){
        customers *dataFC = startC;

        while(dataFC != NULL){
            if(dataFC->id == id){
                return(dataFC);
            }
            dataFC = dataFC->next;
        }
        return(NULL);
    }
