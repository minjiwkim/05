#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int input;
     
    printf("���� �ϳ��� �Է��Ͻÿ� :");
    scanf("%d", &input);
    
    if ( input>0 )
    printf("����Դϴ�.\n");
    
    else if ( input<0 )
    printf("�����Դϴ�.\n");
    
    else
    printf("0�Դϴ�.\n");


  system("PAUSE");	
  return 0;
}
