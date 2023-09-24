#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  unsigned char a;
  int bit;            //Coloquei na opção 1 para que seja 
  int menu;           //um número binário 0, e na segunda opção um número aleatório.
                      //Também coloquei o %08b pra facilitar a visualização do número em binário
    while(1){

  puts("Digite: \n(1) Para ocupar armário \n(2) Para liberar armário \n(3) Sair");
  scanf("%d", &menu);

  switch(menu){
    case 1:
      a = 0;
      
      printf("Armário: %08b\n", a);
     
      
      a |= 1 << rand() % 8;
      
      printf("Armário: %08b\n", a);
      
    break;
    
    case 2:
      a = rand() % 256;
      int b = a;
        
      printf("Armário: %08b\n", a);
        scanf("%d", &bit);
      
      a &= ~(1 << bit);
      
      for(;;){
        
      if(a == b){
        printf("Vc só pode desocupar armários já ocupados, digite novamente\n");
        
       printf("Armário: %08b\n", a);
          scanf("%d", &bit);
        
        a &= ~(1 << bit);
        
      } else {
        break;
      }
      }
      
      printf("Armário: %08b\n", a);
      
    break;
    
    default:
      return 0;
    break;
  }
  }
  return 0;
}