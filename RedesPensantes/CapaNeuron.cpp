#include "CapaNeuron.h"

CapaNeuron::CapaNeuron(int num_neurons)
	:neuronas(num_neurons)
{
}

std::vector<float> CapaNeuron::Feed_Forward(std::vector<float> inputs)
{
	std::vector<float> Outputs;
	for (auto N : neuronas)
	{
		Outputs.push_back(N.CalcOut(inputs));
	}
	return Outputs;
}

std::vector<float> CapaNeuron::GetOutPuts()
{
	/*std::vector<float> Outputs;
	for (auto N : neuronas)
	{
		Outputs.push_back(N.CalcOut(inputs));
	}*/
}
