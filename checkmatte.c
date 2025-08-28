#include <stdio.h>

// bispo recursivo (diagonal pra cima direita)
void bispo(int x,int y,int casas){
    if(casas==0) return; // condição de parada
    printf("Bispo em (%d,%d)\n",x,y);
    bispo(x+1,y+1,casas-1);
}

// torre recursiva (direita)
void torre(int x,int casas){
    if(casas==0) return;
    printf("Torre em (%d,0)\n",x);
    torre(x+1,casas-1);
}

// rainha recursiva (esquerda)
void rainha(int x,int casas){
    if(casas==0) return;
    printf("Rainha em (%d,0)\n",x);
    rainha(x-1,casas-1);
}

// cavalo com loop e condições extras
void cavalo(int px,int py){
    int mov[8][2]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
    printf("Movimento do Cavalo:\n");
    for(int i=0;i<8;i++){
        int nx=px+mov[i][0];
        int ny=py+mov[i][1];
        if(nx<0||ny<0||nx>7||ny>7){
            continue; // ignora fora do tabuleiro
        }
        printf("Cavalo pode ir (%d,%d)\n",nx,ny);
        if(nx==7 && ny==7){
            printf("Cavalo chegou no canto!\n");
            break; // exemplo de break
        }
    }
}

int main(){
    printf("=== Nivel Mestre MateCheck ===\n\n");

    printf("Bispo:\n");
    bispo(0,0,5);

    printf("\nTorre:\n");
    torre(0,5);

    printf("\nRainha:\n");
    rainha(7,8);

    printf("\nCavalo:\n");
    cavalo(3,3);

    printf("\nFim!\n");
    return 0;
}
