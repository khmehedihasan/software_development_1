#include<iostream>
#include "supplierClass.h"
using namespace std;

    suppliers *findSupplier(int id){
        suppliers *dataFS = startS;

        while(dataFS != NULL){
            if(dataFS->id == id){
                return(dataFS);
            }
            dataFS = dataFS->next;
        }
        return(NULL);
    }
