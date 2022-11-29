
#include<iostream>
using namespace std;

    products* findProduct(int id){
        products *dataFP = start;

        while(dataFP != NULL){
            if(dataFP->id == id){
                return(dataFP);
            }
            dataFP = dataFP->next;
        }
        return(NULL);
    }
