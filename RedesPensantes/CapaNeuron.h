#pragma once
#include "Neurona.h"
class CapaNeuron
{
public:
	CapaNeuron(int num_neurons);
	~CapaNeuron();

	std::vector<float> Feed_Forward(std::vector<float>);
	std::vector<Neurona>& GetNeuronas() { return neuronas; }
private:

	std::vector<Neurona> neuronas;
};

