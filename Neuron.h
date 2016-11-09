/*

    Класс Neuron
    
    Версия 0.0

    Автор Олег Троицкий

*/

#ifndef NEURON_H
#define NEURON_H

#include <string>
#include <vector>


// ---------------------------------------------------------------------------------------------------- Связь между нейронами
class Neuron {

public:
    Neuron(std::string, bool);
    std::string getName() const;

    void addInputLink(Neuron::Neuron*);
    void addOutputLink(Neuron::Neuron*);

    void printStatistic() const;


private:
    const std::string neuronName;                                           // Название нейрона
    const bool bias_flg;                                                    // Флаг признака того, что нейрон всегда выдает 1.0
    float signal;                                                           // Текущий сигнал, выдаваемый нейроном

    std::vector<Neuron::Neuron*> inputLink;                                 // Вектор входных связей (с другими нейронами)
    // std::vector<Neuron::Neuron*> outputLink;                             // Вектор выходных связей (с другими нейронами)

    std::vector<float> inputWeight;                                         // Вектор входных связей (с другими нейронами)
    std::vector<float> inputWeight_Prev;                                    // Вектор входных связей (с другими нейронами)

    // ddd testDD;

};

// ---------------------------------------------------------------------------------------------------- Связь между нейронами
// class NeuronsLink {

// public:
//     NeuronsLink(const Neuron*, const Neuron*);
//     void printStatistic() const;


// private:
//     float weightCurr;                                                   // Текущее значение связи между нейронами
//     float weightPrev;                                                    // Предыдущее значение связи между нейронами (нужно для момента)

//     const Neuron* masterNeuron;                                          // Указатель на управляющий нейрон (на входе связи)
//     const Neuron* slaveNeuron;                                           // Указатель на ведомый нейрон (на выходе связи)
    
// };

#endif