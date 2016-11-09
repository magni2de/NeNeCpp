/*

    Класс NeuronLink

    Версия 0.0

    Автор Олег Троицкий

*/

#ifndef NEURONSLINK_H
#define NEURONSLINK_H

// #include <string>
// #include <vector>
#include "Neuron.h"

class NeuronsLink {

public:
    NeuronsLink(const Neuron*, const Neuron*);
    void printStatistic() const;


private:
    float weightCurr;                                                   // Текущее значение связи между нейронами
    float weightPrev;                                                   // Предыдущее значение связи между нейронами (нужно для момента)

    const Neuron* masterNeuron;                                         // Указатель на управляющий нейрон (на входе связи)
    const Neuron* slaveNeuron;                                          // Указатель на ведомый нейрон (на выходе связи)
    
};

#endif