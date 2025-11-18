#include "RedNeuron.h"
#include "Neurona.h"
#include <iostream>

int main()
{
	std::vector <Neurona> misNeuronas;
	std::vector <float> pesosNeuronas;
	RedNeuron neuraln(2, 2, 2);
	std::vector <float> inValues{ 0.05f,0.1f };
	std::vector <float> outValues{ 0.01f, 0.99f };
	neuraln.Train(inValues, outValues);
	misNeuronas = neuraln.capaOculta.GetNeuronas();

	/*for (size_t i = 0; i < misNeuronas.size(); ++i) {
		auto& pesos = misNeuronas[i].getPesos();
		std::cout << "Neurona " << i << " pesos: ";
		for (float w : pesos) {
			std::cout << w << ' ';
		}
		std::cout << '\n';
	}*/

	
	return 0;
}