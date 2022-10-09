/*Essa biblioteca serve para entrada e saida de dados*/
#include <stdio.h>
/* Ja essa biblioteca serve para locação de memoria, então ele utilizar 
a memoria para pode processa sempre que o programa rodar*/
#include <stdlib.h>

/* ja essa biblioteca e importante pra nosso programa,
 ela serve para  trabalhos com medição de tempo*/
#include <time.h>

/* Jogo do dado*/


int main(int argc, char *argv[]) {
	/* inicio do programa */
	
	printf("Jogo do dados\n");
	
	/* A linha de função abaixo, ela inicia o girador aleatório
	do dado para isso ele usar a biblioteca time.h, aparti daqui que ele vai gira aleatoriamente*/
	/* usamos a função srand que serve para esse tipo de comando, */ 
	srand(time(NULL));
	
	/* Aqui ja esta locado o numero aleatório*/
	/*Aqui  usamos o comando rand porcetagem 6, ele ta dizendo para o programa, que aqui sera porta de saida
	de um numero aleatório do dado entre 0 a 5*/
	/* Como no dados nao tem face 0 e a função rand leva em consideração o zero, colocaremos uma soma de 1 apos %6,
	para resolvemos esse erro*/
	printf("Face: %d\n",rand()%6 + 1);
	/* Aqui ao final colocamos um fim ao sistema, para que pause e finalize*/
	system("pause");
	
	
	
	
	
	return 0;
}