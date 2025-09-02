#include <stdio.h>
int main(){
int mt01[2][2]={
    {1,2},
    {3,4}
};
int mt02[2][2]={
    {1,2},
    {3,4}
};
int mtsoma[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            mtsoma[i][j]= mt01[i][j] + mt02[i][j];
            printf("Soma da matriz[%d][%d]=%d\n", i, j, mtsoma[i][j]);
        }
        printf("\n");
    }

return 0; 
}