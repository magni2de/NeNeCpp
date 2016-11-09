/*

    Класс Layer

    Версия 0.0 

    Автор Олег Троицкий

*/
#include <iostream>
// #include <iomanip>
// #include <string>
#include "Layer.h"
#include "Neuron.h"

// ------------------------------------------------------------------------------------------------------- Конструктор слоя
Layer::Layer(std::string name) : layerName(name)
{
}

// ----------------------------------------------------------------------------------------------- Возвращает название слоя
std::string Layer::getName() const
{
    return Layer::layerName;
}

// ------------------------------------------------------------------------------------------------ Добавляем в слой нейрон
void Layer::addNeuron(Neuron::Neuron *pNeuron)
{
    Layer::neuronsSet.push_back(pNeuron);
}

// ------------------------------------------------------------------------------------------ Выводит статистику по нейрону
void Layer::printStatistic() const
{
    std::cout << "    --------------------------------------------" << std::endl;
    std::cout << "    Слой:          '" << Layer::layerName << "'" << std::endl;

    std::cout << "    Нейронов:      " << Layer::neuronsSet.size() << std::endl;
    std::cout << "    Нейронов.cap:  " << Layer::neuronsSet.capacity() << std::endl;

    if (Layer::neuronsSet.size() > 0)
    {
        for (std::vector<Neuron *>::const_iterator iter = Layer::neuronsSet.begin(); iter != Layer::neuronsSet.end(); ++iter)
            // std::cout << "     '" << (*iter)->getName() << "'" << std::endl;
            (*iter)->printStatistic();
    }

}