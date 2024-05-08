#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //alocação de espaço no disco
#include <locale.h> //alocação de linguagem regional

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Teste de caracteres\n\n\t !@#$%¨&*({[]})-=_+´`~^;:<>,./?|"); //não posso usar a "\" (ele acha que vai ser um comando)
}
