/*

    Нейронная сеть

    Версия 0.0

    Автор Олег Троицкий

*/


#include <iostream>
#include <cstdlib>
#include <ctime>

#include "NeuronNetwork.h"
#include "Layer.h"
#include "Neuron.h"
#include "Net.h"



int main(int argc, const char * argv[]) {

    std::srand(static_cast<unsigned>(std::time(0)));

    // NeuronNetwork nn("Neuron Network 1");

    Neuron::Neuron neur1("Neuron1 Mars", false);
    Neuron::Neuron neur2("Neuron2 Vega", false);
    Neuron::Neuron neur3("Neuron3 Pluton", false);
    Neuron::Neuron neur4("Neuron4 Luna", false);
    Neuron::Neuron neur5("Neuron5 Sirius", false);

    Layer::Layer layer1("Layer 01");
    Layer::Layer layer2("Layer 02");

    layer1.addNeuron(&neur1);
    layer1.addNeuron(&neur2);
    layer1.addNeuron(&neur3);

    layer2.addNeuron(&neur4);
    layer2.addNeuron(&neur5);

    Net::Net net1("Network 01");

    net1.addLayer(&layer1);
    net1.addLayer(&layer2);

    neur1.addInputLink(&neur2);
    neur1.addInputLink(&neur3);
    neur1.addInputLink(&neur4);
    neur1.addInputLink(&neur5);

    neur2.addInputLink(&neur3);
    neur2.addInputLink(&neur5);
    neur2.addInputLink(&neur1);

    neur3.addInputLink(&neur1);

    neur4.addInputLink(&neur5);
    
    neur5.addInputLink(&neur2);
    
    // neur1.printStatistic();
    // neur2.printStatistic();
    // neur3.printStatistic();
    // neur4.printStatistic();
    // neur5.printStatistic();

    // layer1.printStatistic();
    // layer2.printStatistic();
    // 
    // 
    

    net1.printStatistic();

    return 0;

}

//  ---------------------------------------------------------------------------------

/*
#include <iostream>
#include <vector>
using namespace std;

class Xray
{
	public:
		int id;
};


int main()
{
	Xray * pXR;
	vector<Xray*> v;

	for(int i = 0; i < 10; i++)
	{
		pXR = new Xray;
		pXR->id = rand();
		v.push_back(pXR);

        cout << "Размер v: " << v.size() << "  Емкость v: " << v.capacity() << "   Записали значение :" << v[i]->id << endl;

	}

    cout << "Выводим полученнй вектор указателей!" << endl;

	for(vector<Xray*>::iterator it = v.begin(); it!=v.end(); it++)
        cout << (*it)->id << endl;

    cout << "Done!" << endl;
}
*/

//  ---------------------------------------------------------------------------------

/*
#include <iostream>
#include <vector>
using namespace std;

class Xray
{
	public:
        // ------------------------------------------------------------------------------------
        void addPointer (Xray * ptr) {
            vec.push_back(ptr);
        }

        // ------------------------------------------------------------------------------------
        Xray* getPointer (int pos) const {
            return vec[pos];
        }

        // ------------------------------------------------------------------------------------
        void print() const {

            for (vector<Xray*>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
                cout << "****" << endl;

        }

    private:
        vector<Xray*> vec;
};


int main()
{
    Xray x1;
    Xray x2;
    Xray x3;
    Xray x4;
    Xray x5;

    Xray rrr;

    rrr.addPointer(&x1);
    rrr.addPointer(&x2);
    rrr.addPointer(&x3);
    rrr.addPointer(&x4);
    rrr.addPointer(&x5);

    cout << "Ссылка на 1: " << rrr.getPointer(0) << endl;
    cout << "Ссылка на 2: " << rrr.getPointer(1) << endl;
    cout << "Ссылка на 3: " << rrr.getPointer(2) << endl;
    cout << "Ссылка на 4: " << rrr.getPointer(3) << endl;
    cout << "Ссылка на 5: " << rrr.getPointer(4) << endl;

    rrr.print();    

    cout << "Конец" << endl;
}

*/