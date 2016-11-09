/*

    Класс Net

    Версия 0.0

    Автор Олег Троицкий

*/
#include <iostream>
#include "Layer.h"
#include "Neuron.h"
#include "Net.h"

// ------------------------------------------------------------------------------------------------------- Конструктор сети
Net::Net(std::string name) : netName(name)
{
}

// ----------------------------------------------------------------------------------------------- Возвращает название сети
std::string Net::getName() const
{
    return Net::netName;
}

// -------------------------------------------------------------------------------------------------- Добавляем в сеть слой
void Net::addLayer(Layer::Layer *pLayer)
{
    Net::layersSet.push_back(pLayer);
}

// ---------------------------------------------------------------------------------------------- Выводит статистику по сети
void Net::printStatistic() const
{
    std::cout << "**************************************************" << std::endl;
    std::cout << "Сеть:          '" << Net::netName << "'" << std::endl;

    std::cout << "Слоев:      " << Net::layersSet.size() << std::endl;
    std::cout << "Слоев.cap:  " << Net::layersSet.capacity() << std::endl;

    if (Net::layersSet.size() > 0)
    {
        for (std::vector<Layer *>::const_iterator iter = Net::layersSet.begin(); iter != Net::layersSet.end(); ++iter)
            // std::cout << "     '" << (*iter)->getName() << "'" << std::endl;
            (*iter)->printStatistic();
    }

}