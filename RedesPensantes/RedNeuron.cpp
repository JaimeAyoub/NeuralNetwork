#include "RedNeuron.h"
#include <random>

RedNeuron::RedNeuron(int numInputs, int numHidden, int numOutputs)
	:capaOculta(numHidden)
{
	 inputs = numInputs;
}

void RedNeuron::InitPesos()
{
			std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<float> distribucion(0.01f, 0.99f);
	for (auto C : capaOculta)
	{
		for (int i = 0; i < inputs; i++)
		{
			float random = distribucion(mt);
			C.neuronas[i].weights.push_back(random);
		}
	}
}
 //https://github.com/mattm/simple-neural-network