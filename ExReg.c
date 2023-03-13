#include <stdio.h>
#include <math.h>

struct Usuarios{
    int numero;
    char nome[21];
    float espaco_ocupado;
};


int main() {
    int i,x;
    float sum = 0;
    struct Usuarios usuario[6] = {
        {1, "alexandre", 456123789},
        {2,"anderson", 1245698456},
        {3, "antonio", 123456456},
        {3, "carlos", 91257581},
        {4, "cesar", 987458},
        {4, "rosemary", 789456125}
        
    };
    
    
    printf("Nr.  Usuario        Espaço utilizado           %% de uso");
    printf("--------------------------------------------------------");
    
    for(x = 0; x < 6; x++){
        sum += usuario[x].espaco_ocupado;
    }
    for(i = 0; i < 6; i++){
        printf("\n%-5d %-15s %10.2f MB          %.2f%%",usuario[i].numero, usuario[i].nome, usuario[i].espaco_ocupado/pow(1024,2), usuario[i].espaco_ocupado/sum*100);
    }
    printf("\n\n");
    
    printf("Espaço total ocupado: %.2f MB\n", sum / 1024 / 1024);
    printf("Espaço médio ocupado: %.2f MB\n", sum/6 / 1024 / 1024);

}
