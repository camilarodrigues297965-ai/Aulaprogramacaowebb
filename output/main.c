#include<stdio.h>

int main(){

    //media de pratos vendidos em uma semana



//array que armazena os dias da semana 
char *dias[7]={"domingo", "segunda-feira", "terca-feira", "quarta-feira", "quinta-feira", "sexta-feira", "sabado"};
 int vendidos; // variavel que vai armazenar a quantidade de pratos vendidos por dia
 int total=0; // A variavel vai armazenar o total de vendas da semana
 float media; //variavel de numeros reais
 int dia;// variavel que representa o dia da semana no loop
    
     printf("---Bem vindo ao programa de registro de vendas semanais!---\n");
    
     printf("\nPor favor responda as nossas perguntas com a quantidade de pratos vendidos nos dias informados:\n");


 for(dia=0; dia<7; dia++){     //inicio de um lopp, sabemos onde o lopp acaba.
    printf("Quantos pratos foram vendidos no dia de %s? ", dias[dia]);
    scanf("%d", &vendidos);
 total= total+vendidos; // calculo total de pratos vendidos na semana
} 
media=(float)total/7;
printf(" \n O total de pratos vendidos na semana foi de %d\n", total);//imprime pro usuario a quantidade de pratos vendidos na semana
printf("A media diaria de pratos foi de %f\n", media);//imprime a quantidade de pratos vendidos no dia
  
if(media>90){//verificamos se o Restaurante bateu a media diaria
    printf("A media diaria foi excelente!"); //se sim

}else{//se não

    printf("A media diaria foi muito baixa, podemos melhorar! \n");
}

printf(" \n -----Obrigada por usar o nosso sistema de registro de vendas-----");
//mensagem de agradecimento.

    return 0;
}


 
 

