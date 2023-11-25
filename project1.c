// Online C compiler to run C program online
#include <stdio.h>
#define max 1000
#include<math.h>
// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[100], i = 0;
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
 
 
// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int d = 0, base = 1,remainder,i;
    while (binary > 0) {
        int remainder = binary % 10;
        d += remainder * pow(2,i);
        binary /= 10;
    }
    return d;
}
 
// Function to convert decimal to octal
void dToOctal(int decimal) {
    int octal[100], i = 0;
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
// Function to convert binary to hexadecimal
void binaryToHexadecimal(int binary) {
    char hexadecimal[100];
    int i = 0, decimal = 0, remainder, base=1;
 
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        i++;
        base *= 2;
    }
 
    i = 0;
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        decimal /= 16;
        i++;
    }
 
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
}
 
int main()
{
     int decimal;
      printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToOctal(decimal);
//to conver octal to hexal   
     char octal[100];
    printf("Enter an octal number: ");
    scanf("%s", octal);
    
    // Convert the octal string to decimal
    decimal = strtol(octal, NULL, 8);
    printf("Hexadecimal equivalent: %X", decimal);
    
     
     
     char binarynum[max];
    char hexa[max];
    long int i=0;
    printf("\nEnter the value for hexadecimal:  ");
    scanf("%s", hexa);
    printf("\n equivalent binary value: ");
    while(hexa[i]){
        switch(hexa[i]){
            case '0':
               printf("0000");
               break;
            case '1': 
               printf("0001");
               break;
            case '2':
               printf("0010");
               break;
            case '3':
               printf("0011");
               break;
            case '4':
               printf("0100");
               break;
            case '5':
               printf("0101");
               break;
            case '6':
               printf("0110");
               break;
            case '7':
               printf("0111");
               break;
            case '8':
               printf("1000");
               break;
            case '9':
               printf("1001");
               break;
            case 'A':
               printf("1010");
               break;
            case 'B':
               printf("1011");
               break;
            case 'C':
               printf("1100");
               break;
            case 'D':
               printf("1101");
               break;
            case 'E':
               printf("1110");
               break;
            case 'F':
               printf("1111");
               break;
               default:
               printf("\n invalid hexa digit %c", hexa[i]);
           return 0;
        }
    i++;
     }
    
     int binary;
    printf("\nEnter a binary number: ");
    scanf("%d", &binary);
 
    int d = binaryToDecimal(binary);
    printf("Decimal: %d\n", decimal);
 
   printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToOctal(decimal);
 
    
    binaryToHexadecimal(binary);
 
    return 0;
}
 
