#include"head.h"
#include"Array.h"
void main()
{
  int m;
  do
  {
    m = Main_Menu();
    switch (m)
    {

    case 1:
      XinXi_Menu();
      break;
    case 2:
      TongJi_Menua();
      break;
    case 3:
      printf("*****************************ллʹ���ټ�!***********************************\n");
	  
	default:
      printf("�����������������!\n\n"); 
      exit(0);
    }
  } while (1);
}