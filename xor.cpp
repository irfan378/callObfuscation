#include<stdio.h>

int main(){
    char shellcode_payload[] = "VirtualProtect";


char key[]="mysecretkey";
 int j=0;
 for (int i = 0; i < sizeof(shellcode_payload); i++)
 {  
      if(j==sizeof(key)-1){
            j=0;
        }
    printf("0x%02x, ",shellcode_payload[i]^key[j]);
        j++;

 }
 
}