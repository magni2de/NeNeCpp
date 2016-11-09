/*

    Класс Net

    Версия 0.0 

    Автор Олег Троицкий

*/

#ifndef NET_H
#define NET_H

#include <string>
#include <vector>
#include "Layer.h"


// ---------------------------------------------------------------------------------------------------- Класс сети
class Net {

public:
    Net(std::string);
    std::string getName() const;

    void addLayer(Layer::Layer*);
    void printStatistic() const;

private:
    const std::string netName;                                              // Название сети
    std::vector<Layer::Layer*> layersSet;                                   // Вектор указателей на слои

};

#endif