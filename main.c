#include <stdio.h>
#include <math.h>
 
void conversion(int array[], int tamanho){
    int value = 0;
    int potencia = tamanho-1;

    for (int i = 0; i <= tamanho-1; i++){
        if (array[i] == 1){
            value += pow(2, potencia);
        }
        potencia--;
    }
    printf("%d",value);
}

int main(){

    int array[] = {0, 0, 0, 1, 0, 1, 0, 0};
    int tamanho = (sizeof(array) / sizeof(array[0]));

    conversion(array, tamanho);

    return 0;
}