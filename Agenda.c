#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        int addnome(char[][50],int);
        int listarnome(char[80][50],int);
        int removernome(char[][50]);

int main(){

     char nome[80][50];
     int i;
     int nronomes = 0;


  while(i!=4){


     printf("Selecione 1 para digitar um nome\n");
     printf("Selecione 2 para listar os nomes\n");
     printf("Selecione 3 para remover nome\n");
     printf("Selecione 4 para sair\n");
       scanf("%d", &i);
           
          switch(i)
             {
          case 1:
          nronomes = addnome( nome, nronomes);
               break;
                             
          case 2:         
          listarnome(nome, nronomes);
                break;

          case 3:    
          removernome(nome);
                break;

          case 4:
                break;    
                        }
         
                }

                return 0;
                
}
  
                               
        
    int addnome(char nom[][50], int j){
        printf("Digite o nome a ser adicionado\n");
        scanf("%s", nom[j]);
        return ++j;
    }
    
    int listarnome(char k[80][50], int j){
        int v;
      for(v=0;v<j;v++)
                      
            printf("%s\n", k[v]);
           
        }
       
    

    int removernome(char nome[][50]){
        int z=0;
        printf("Escolha qual posicao remover\n");
        scanf("%d", &z);

        strcpy(nome[z-1], "removido com sucesso");
    }



