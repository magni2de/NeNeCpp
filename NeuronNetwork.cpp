/*

    Класс NeuronNetwork

    Версия 0.0 

    Автор Олег Троицкий

*/

#include <iostream>

#include "NeuronNetwork.h"

NeuronNetwork::NeuronNetwork(std::string name) : networkName(name){
    // setName(name);
}
        
std::string NeuronNetwork::name() const {
    return networkName;
}

void NeuronNetwork::setName(std::string newName) {
    networkName = newName;
}
