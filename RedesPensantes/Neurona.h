#pragma once
#include <vector>
class Neurona
{
public:
	Neurona() = default;
	~Neurona() = default;

	float CalcOut(const std::vector<float> &inputs);
	float CalcNet(const std::vector<float> &inputs);

	std::vector<float>& getPesos() { return weights; }

	std::vector<float> weights;


private:

};

