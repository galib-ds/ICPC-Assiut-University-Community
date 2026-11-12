#include<stdio.h>

void DecimalToBinary(int n, int binary[32]);
int BinaryToDecimal(int binary[32]);

int main(){
    int number_A, number_B;
    scanf("%d %d", &number_A, &number_B);

    int A[32] = {0};
    DecimalToBinary(number_A, A);

    int B[32] = {0};
    DecimalToBinary(number_B, B);
    
    int sum[32] = {0};
    for(int i = 0; i < 32; i++){
        sum[i] = A[i] + B[i];
        if(sum[i] == 2){
            sum[i] = 0;
        }
    }
 
    printf("%d", BinaryToDecimal(sum));
    
    return 0;
}

void DecimalToBinary(int n, int binary[32]){
    int i = 31;
    while (n > 0){
        binary[i] = n%2;
        n = n/2;
        i--;
    }
}

int BinaryToDecimal(int binary[32]) {
    int decimal = 0;
    for (int i = 0; i < 32; i++) {
        decimal = decimal * 2 + binary[i];
    }
    return decimal;
}