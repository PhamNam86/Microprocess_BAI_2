#include <16f887.h> 
#device *=16 ADC=8 // Khai bao during con tro 16-bt 
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock=8000000) // Khai bao su ðung Thach Anh 8 - Mhz

int i;
const char led7[] = {0x3f,0x06, 0x5b, 0x4f,0x66,0x6d, 0x7d, 0x07,0x7f,0x6f};
void main()
{
set_tris_a(0x00); 
set_tris_b(0x00); 

//output_a(0x07);
//OUTPUT_B(0x00);
output_a(0x08); 
while(TRUE)
{
for(i=1;i<10;i)
{

output_b(~led7[i]);
i=i+2;
delay_ms(500);
}

}
}
