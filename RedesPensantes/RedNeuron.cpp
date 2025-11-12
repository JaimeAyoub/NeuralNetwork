#include "RedNeuron.h"
#include <random>
#include <iostream>
RedNeuron::RedNeuron(int numInputs, int numHidden, int numOutputs)
	:inputs(numInputs)
	,capaOculta(numHidden)
	,capaOutPut(numOutputs)
{
	InitPesosToHidden();
	InitPesosToOutput();
}

void RedNeuron::InitPesosToHidden()
{
			std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<float> distribucion(0.01f, 0.99f);
	for (auto &C : capaOculta.GetNeuronas())
	{
		auto& pesos = C.getPesos();
		for (int i = 0; i < inputs; i++)
		{
			float random = distribucion(mt);
			pesos.push_back(random);
		}
	}
}
void RedNeuron::InitPesosToOutput()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<float> distribucion(0.01f, 0.99f);
	for (auto& C : capaOutPut.GetNeuronas())
	{
		auto& pesos = C.getPesos();
		for (int i = 0; i < inputs; i++)
		{
			float random = distribucion(mt);
			pesos.push_back(random);
		}
	}
}
std::vector<float> RedNeuron::FeedForward(const std::vector<float>& input)
{
	auto outHidden = capaOculta.Feed_Forward(input);
	return capaOutPut.Feed_Forward(outHidden);
}
void RedNeuron::Train(const std::vector<float>& input, const std::vector<float>& output)
{
	auto outfin = FeedForward(input);
	if (output.size() != outfin.size()) { return; }

	float totalError = 0.f;
	for (int i = 0; i < outfin.size(); i++)
	{
		totalError += calculateError(outfin[i], output[i]);
	}


	//BackPropagation

	std::cout << "Error Total: " << totalError << '\n';
}
float RedNeuron::calculateError(float out, float target)
{
	float Tmin0 = target - out;
	return 0.5f * (Tmin0 * Tmin0);
}
 //https://github.com/mattm/simple-neural-network