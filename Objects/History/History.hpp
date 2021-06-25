#ifndef HISTORY_HPP
#define HISTORY_HPP
#include <stdlib.h>
#include <iostream>
#include <string>
#include"../Movement/Movement.hpp"

using namespace std;

class History
{
    private:
        int nElement;
        Movement movimients[10];

    public:
        History();
        void add(Movement movimiento); 
        Movement getMovement(int position);
        void toDeploy(); 
        Movement* getMovements();

        void setNElement(int nElementos);
        int getNElement();
};
#endif
