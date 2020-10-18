#include <stdio.h>
#include <string.h>
                           //FUNCAO MAIN//

int main(){
     char nome[80][50];
     int i;
     int ndenomes = 0;
     int add(char[][50],int);
     int remov(char[][50]);
     int lista(char[80][50],int);

                         //MENU//
   
  while(i!=4){
                         

     printf("\nSelecione 1 para digitar um nome\n");

     printf("\nSelecione 2 para remover nome\n");

     printf("\nSelecione 3 para listar os nomes\n");

     printf("\nSelecione 4 para sair\n");

       scanf("%d", &i);
           
          switch(i)
             {
          case 1:
               ndenomes = add(nome,ndenomes);
               break;
                             
          case 2:         
                  remov(nome);
                break;

          case 3:
           lista(nome,ndenomes);
                break;    

          case 4:
                break;    
                        }
         
                }

                return 0;
                
}
                 //CHAMADA DAS FUNÇÕES//
                               
        
    int add(char nom[][50], int j){
        printf("\nDigite o nome a ser adicionado\n");
        scanf("%s", nom[j]);
        return ++j;
    }
    
     int remov(char nome[][50]){
        int z=0;
        printf("\nEscolha qual posicao remover\n");
        scanf("%d", &z);

        strcpy(nome[z-1], "removido com sucesso");
    }


    int lista(char k[80][50], int j){
        int v;
      for(v=0;v<j;v++)
                      
            printf("\n%s", k[v]);
           
        }
       
    

   

