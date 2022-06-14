#include<stdio.h>
#include<inttypes.h>
#define SUIT_MASK 0x30   //   38  00110000
#define NUM_MASK 0x0F   //    15  00001111

uint8_t array[5];
uint8_t card1, card2;

int sameSuit(uint8_t card1, uint8_t card2)
{
    char a = (card1^card2)&SUIT_MASK;
    return a == 0;
}
int greaterValue(uint8_t card1, uint8_t card2)
{
    return (unsigned char)(card1&NUM_MASK)>(unsigned char)(card2&NUM_MASK);
}
//      00100101
//      00111001
//      00001111

int main()
{

    return 0;
}


