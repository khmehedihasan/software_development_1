#include<iostream>
#include "supplierClass.h"
using namespace std;

    suppliers *findSupplier(int id){
        suppliers *data = startS;

        while(data != NULL){
            if(data->id == id){
                return(data);
            }
            data = data->next;
        }

    }
