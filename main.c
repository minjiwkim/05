#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int input;
     
    printf("정수 하나를 입력하시오 :");
    scanf("%d", &input);
    
    if ( input>0 )
    printf("양수입니다.\n");
    
    else if ( input<0 )
    printf("음수입니다.\n");
    
    else
    printf("0입니다.\n");


  system("PAUSE");	
  return 0;
}
