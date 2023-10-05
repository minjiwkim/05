#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int input;
     
    printf("정수 하나를 입력하시오 :");
    scanf("%d", &input);
    
    if ( input>=0 )
    printf("절대값은 %d입니다.\n", input);
    
    else
    printf("절대값은 %d입니다.\n", -input ); 


  system("PAUSE");	
  return 0;
}
