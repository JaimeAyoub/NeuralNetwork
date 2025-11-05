#pragma once
#include "CapaNeuron.h"
#include <vector>

class RedNeuron
{
public:
	RedNeuron(int numInputs, int numHidden, int numOutputs);
	~RedNeuron() = default;

	std::vector<CapaNeuron> capaOculta;
	std::vector<CapaNeuron> capaOutPut;
	int inputs;

	void InitPesos();
private:
};

