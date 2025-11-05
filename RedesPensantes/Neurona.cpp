#include "Neurona.h"



float Neurona::CalcOut(const std::vector<float>& inputs)
{
	float net = CalcNet(inputs);
	return  1.f / (1 + expf(-1 * net));
	
}

float Neurona::CalcNet(const std::vector<float>& inputs)
{
	float total = 0;
	for (int i = 0; i < inputs.size(); i++)
	{
		total += (inputs[i] * weights[i]);
	}
	return total;
}
