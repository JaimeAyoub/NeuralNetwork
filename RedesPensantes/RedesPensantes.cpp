#include "RedNeuron.h"

int main()
{
	RedNeuron neuraln(2, 2, 2);
	std::vector <float> inValues{ 0.05f,0.1f };
	std::vector <float> outValues{ 0.01f, 0.99f };
	neuraln.Train(inValues, outValues);

	return 0;
}