/*

    Класс Layer

    Версия 0.0

    Автор Олег Троицкий

*/

#ifndef LAYER_H
#define LAYER_H

#include <string>
#include <vector>
#include "Neuron.h"


// ---------------------------------------------------------------------------------------------------- Класс слоя
class Layer {

public:
    Layer(std::string);
    std::string getName() const;

    void addNeuron(Neuron::Neuron*);
    void printStatistic() const;

private:
    const std::string layerName;                                            // Название слоя
    std::vector<Neuron::Neuron*> neuronsSet;                                // Вектор указателей на нейроны слоя

};

#endif