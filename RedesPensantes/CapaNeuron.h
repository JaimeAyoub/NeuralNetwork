#pragma once
#include "Neurona.h"
class CapaNeuron
{
public:
	CapaNeuron(int num_neurons);
	~CapaNeuron();

	std::vector<Neurona> neuronas;
	std::vector<float> Feed_Forward(std::vector<float>);
	std::vector<float> GetOutPuts();
private:

};

