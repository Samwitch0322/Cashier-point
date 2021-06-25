#include"History.hpp"

History::History() {
    //movimients = new Movement[10];
    nElement = 0;
}

void History::add(Movement movimiento){
    //movimients.push_back(movimientos);
    int arrMovimientSize = sizeof(movimients)/sizeof(movimients[0]);
    movimients[getNElement()] = movimiento;
    setNElement(getNElement()+1);

    /*
    arrMovimientSize = sizeof(movimients)/sizeof(movimients[0]);
    for(int i=0; i < arrMovimientSize; i++){
        if(i == 0){
            cout<<endl<<endl<<endl<<"Historial de cuenta"<<endl;
            cout<<"Numero de cuenta: "<<movimients[i].getAccountNumber()<<endl;
            cout<<"Nombre del beneficiario: "<<movimients[i].getClient().getNombre()<<endl;
        }
        
        if(movimients[i].getCant()>0){
            cout<<"Movimiento: "<<movimients[i].getMove();
            cout<<"     Cantidad: $"<<movimients[i].getCant();
            cout<<"     Fecha: "<<movimients[i].getDate();
            cout<<endl<<endl<<endl;
        }
    }
    */
}
Movement History::getMovement(int position){
     return movimients[position];
}
void History::toDeploy(){
    int arrMovimientSize = sizeof(movimients)/sizeof(movimients[0]);
    for(int i=0; i < arrMovimientSize; i++){
        if(i == 0){
            cout<<endl<<"Historial de cuenta"<<endl;
            cout<<"Numero de cuenta: "<<movimients[i].getAccountNumber()<<endl;
            cout<<"Nombre del beneficiario: "<<movimients[i].getClient().getNombre()<<endl;
        }
        

        cout<<"Movimiento: "<<movimients[i].getMove();
        cout<<"     Cantidad: $"<<movimients[i].getCant();
        cout<<"     Fecha: "<<movimients[i].getDate();
        cout<<endl;
    }
}

Movement* History::getMovements(){
    return movimients;
}

void History::setNElement(int nElementos){
    nElement = nElementos;
}
int History::getNElement(){
    return nElement;
}
