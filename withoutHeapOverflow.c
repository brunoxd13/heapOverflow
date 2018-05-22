#include <stdio.h>
#include <string.h>

void main(void){
    char buff[15];
    
    printf("\n Digite a senha: \n");
    
    scanf(buff);
    
    if(strcmp(buff, "segredo") == 0 ){
        printf ("\n Senha correta! \n");
    }else{
        printf ("\n Senha incorreta! \n");
    }
}
