/*

    Класс Neuron

    Версия 0.0

    Автор Олег Троицкий

*/
#include <iostream>
#include <iomanip>
#include <string>
#include "Neuron.h"

// ---------------------------------------------------------------------------------------------------- Конструктор нейрона
Neuron::Neuron(std::string name, bool bias_flg) : neuronName(name), bias_flg(bias_flg)
{

    if (bias_flg)
        Neuron::signal = 1.0;
    else
        Neuron::signal = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}

// -------------------------------------------------------------------------------------------- Возвращает название нейрона
std::string Neuron::getName() const
{
    return Neuron::neuronName;
}

// --------------------------------------------------------------------------- Связываем нейрон с нейроном предыдущего слоя
void Neuron::addInputLink(Neuron::Neuron *pInputLink)
{
    Neuron::inputLink.push_back(pInputLink);
}

// ------------------------------------------------------------------------------------------ Выводит статистику по нейрону
void Neuron::printStatistic() const
{
    std::cout << "        ++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "        Нейрон:  '" << Neuron::neuronName << "'" << std::endl;
    std::cout << "        Bias:    " << Neuron::bias_flg << std::endl;
    std::cout << "        Сигнал:  " << Neuron::signal << std::endl;

    std::cout << "        Входов:  " << Neuron::inputLink.size() << std::endl;
    std::cout << "        Вх.cap:  " << Neuron::inputLink.capacity() << std::endl;

    if (Neuron::inputLink.size() > 0)
    {
        for (std::vector<Neuron *>::const_iterator iter = Neuron::inputLink.begin(); iter != Neuron::inputLink.end(); ++iter)
            std::cout << "             '" << (*iter)->getName() << "'" << std::endl;
    }

}



// ------------------------------------------------------------------------------------------------------------ Конструктор
// NeuronsLink::NeuronsLink(const Neuron::Neuron* mst, const Neuron::Neuron* slv)
//     : weightCurr(static_cast<float>(rand()) / static_cast<float>(RAND_MAX)),
//       weightPrev(weightCurr),
//       masterNeuron(mst),
//       slaveNeuron(slv)
// {
// }