#include<stdio.h>
#include<string.h>

int main(){
    //Programa com metodo bubble sort
 //vamos verificar o valor de 10 produtos de supermercado e organizar
 //crescente e decrescente.

 //Array com 10 strings
 char*produtos[10]={"Arroz","Macarrao","Azeite","wisky","Removedor","prato","Queijo","vinho","esmalte","algodao"};
//variavel float para numeros reais(com virgulas,casa  decimal)
 float preco[]={20.99, 6.99,79.68 , 288.00, 3.49 ,33.89 ,54.48 ,189.00 ,5.79 ,2.00};
 int i, j;//variavel inteira
 char*troca;
float trocapreco;
 
printf("--------------------------------------\n");
printf("Ola seja bem vindo ao Mercado Minas");//inicio e apresentação do programa
printf("\nAqui temos uma tabela com alguns produtos na promocao, confira os precos a seguir: \n");

//ORDEM NORMAL DOS PREÇOS

for( i=0; i<10; i++){
    printf("%d. produto: %-10s R$ %.2f\n",i+1 , produtos[i], preco[i]);  
 }
 
 //ORDEM CRESCENTE
 for(i=0; i <9; i++){
   for(j =0; j<9 -i; j++){//percorre comparando cada elemento
      if(preco[j]>preco[j+1]){//compara os preços
        //troca o preco
      trocapreco=preco[j];
      preco[j]=preco[j+1];
      preco[j+1]=trocapreco;
 // troca dos produtos correspondente ao preço
    troca=produtos[j];
    produtos[j]=produtos[j+1];
    produtos[j+1]=troca;
   
      }
   }
 }
   printf("\nPrecos em ordem crescente:  \n");//imprime o resultado
    printf("\n");

   for(i=0; i<10 ;i++){
      printf("%d.produto: %-10s R$%.2f\n", i+1, produtos[i], preco[i]);
   }

//ORDEM DECRESCENTE
for(i=0; i<9; i++){//percorre o array ate o pnultimo elemento
  for(j=0; j<9-i; j++){//controla quantas vezes o vetor vai percorrer
   if(preco[j] <preco[j+1]){//compara os preços
      trocapreco =preco[j]; //[j]guarda o preço temporariamente
      preco[j]= preco[j+1];
       preco[j+1]=trocapreco;//coloca o preço guardado na posição seguinte
 
       //troca dos produtos correspondente ao preço.
      
      troca= produtos[j];
       produtos[j]=produtos[j+1];
       produtos[j+1]= troca;

   }
  }
}
 printf("\n Precos em ordem decrescente: \n");//imprime o resultado na tela
  printf("\n");

 for( i=0; i<10; i++){//percorre os 10 produtos ja ordenanos
    printf("%d. produto: %-10s R$ %.2f\n",i+1 , produtos[i], preco[i]);  
 }
  printf("\nObrigado por por ser nosso cliente\n volte sempre!!");//final do programa e frase de agradecimento.
   return 0;
 }

