#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int input;
     
    printf("���� �ϳ��� �Է��Ͻÿ� :");
    scanf("%d", &input);
    
    if ( input>=0 )
    printf("���밪�� %d�Դϴ�.\n", input);
    
    else
    printf("���밪�� %d�Դϴ�.\n", -input ); 


  system("PAUSE");	
  return 0;
}
