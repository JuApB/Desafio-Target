# Desafio-Target

Este repositório contém as soluções de um desafio de um processo seletivo, que incluiu a redação e a resolução de cinco problemas de programação no qual optei por fazer em C.


# *Descrição dos Problemas*

_Problema 1_

Enunciado: Observe o trecho de código abaixo:

	  int INDICE = 13, SOMA = 0, K = 0;
	  
	  Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
	  
	  Imprimir(SOMA);
  
Ao final do processamento, qual será o valor da variável SOMA?

_Problema 2_

	Enunciado: Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor 
	sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
	escreva um programa onde, informado um número, ele calcule a sequência de Fibonacci e
	retorne uma mensagem avisando se o número informado pertence ou não a sequência.

Importante: O número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código.

_Problema 3_

Enunciado: Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa que calcule e retorne:
   
	O menor valor de faturamento ocorrido em um dia do mês;
	
	O maior valor de faturamento ocorrido em um dia do mês;
	
	Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

Importante: a) Usar o JSON ou XML disponível como fonte dos dados do faturamento mensal; 
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média.

_Problema 4_

Enunciado: Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
  
	  SP – R$67.836,43
	  
	  RJ – R$36.678,66
	  
	  MG – R$29.229,88
	  
	  ES – R$27.165,48
	  
	  Outros – R$19.849,53
	  
Escreva um programa onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.

_Problema 5_

	Enunciado: Escreva um programa que inverta os caracteres de uma string.

Importante: a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; 
b) Evite usar funções prontas, como, por exemplo, 'reverse'.


# *Arquivos*

Os códigos para cada problema estão nomeados como segue:

	  questao1.c - Solução para o Problema 1
	  
	  questao2.c - Solução para o Problema 2
	  
	  questao3.c - Solução para o Problema 3
	  
	  questao4.c - Solução para o Problema 4
	  
	  questao5.c - Solução para o Problema 5
  

# *Instruções para Execução*

Para executar cada programa, compile o código em C e execute-o em um ambiente de desenvolvimento compatível. Certifique-se de fornecer as entradas necessárias conforme descrito em cada problema.
