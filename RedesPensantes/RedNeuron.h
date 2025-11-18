#pragma once
#include "CapaNeuron.h"
#include <vector>

class RedNeuron
{
public:
	RedNeuron(int numInputs, int numHidden, int numOutputs);
	~RedNeuron() = default;

	CapaNeuron capaOculta;
	CapaNeuron capaOutPut;
	int inputs;

	void InitPesosToHidden();
	void InitPesosToOutput();

	std::vector<float> FeedForward(const std::vector<float>& input);

	void Train(const std::vector<float>& input, const std::vector<float>& output);

	float calculateError(float out, float target);

	void BackPropagation(const std::vector<float>& input, const std::vector<float>& targetOutput, float learningRate = 0.5f);
private:
};

