#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //aloca��o de espa�o no disco
#include <locale.h> //aloca��o de linguagem regional

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Teste de caracteres\n\n\t !@#$%�&*({[]})-=_+�`~^;:<>,./?|"); //n�o posso usar a "\" (ele acha que vai ser um comando)
}
