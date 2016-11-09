/*

    Класс NeuronNetwork

    Версия 0.0 

    Автор Олег Троицкий

*/

#include <iostream>


class NeuronNetwork {

    public:
        NeuronNetwork(std::string);
        std::string name() const;
        void setName(std::string);
        
    private:
        std::string networkName;
};