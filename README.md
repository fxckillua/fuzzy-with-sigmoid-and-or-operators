Neural Network Activation Function Simulation

Este projeto implementa uma simulação básica de uma função de ativação de redes neurais utilizando a linguagem C. Ele utiliza entradas ponderadas e uma função sigmoide para calcular a saída de um neurônio simples. O programa solicita ao usuário os valores das entradas (I1, I2) e dos pesos (W1, W2), e com base nesses valores, calcula a saída do neurônio (O1) após aplicar uma função de ativação sigmoide.
Funcionalidades

    Permite a entrada de dois valores de entrada (I1, I2) e dois pesos correspondentes (W1, W2).
    Calcula a soma ponderada das entradas.
    Aplica uma função de ativação sigmoide ao valor da soma ponderada, ajustada por um valor threshold adaptativo (T).
    Exibe todos os valores intermediários, incluindo as entradas, pesos, soma ponderada, threshold e a saída final (O1).

Objetivo

Este programa tem o objetivo de ilustrar o funcionamento de um único neurônio em uma rede neural artificial, mostrando como as entradas e os pesos influenciam a saída final através de uma função de ativação.
Como usar

    Execute o programa.
    Insira os valores solicitados para as entradas (I1 e I2) e os pesos (W1 e W2).
    O programa exibirá os resultados intermediários e a saída calculada pelo neurônio.

Exemplo de uso

bash

Digite I1: 0.5
Digite I2: 0.8
Digite W1: 1.2
Digite W2: 0.9

I1: 0.50
I2: 0.80
W1: 1.20
W2: 0.90
T : 2.20
Soma : 1.68
O1 : 0.06

Compilação

Para compilar o programa, use o seguinte comando no terminal:

bash

gcc -o neural_network neural_network.c -lm

Aqui, o flag -lm é utilizado para ligar a biblioteca matemática necessária para a função exp().
Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests para melhorias ou novas funcionalidades.
