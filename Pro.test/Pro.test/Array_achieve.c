#include"head.h"
#include"Array.h"

//���˵�
int Main_Menu()     
{

  int n;
  system("cls");
 printf("**************************��ӭ����С����ҵ����ϵͳ***************************\n"); 
 printf("-----------------------------------------------------------------------------\n");  
 printf("����ҵ��Ϣϵͳ�� \n");  
 printf("��ͳ�Ʋ�ѯϵͳ�� \n"); 
 printf("���˳�����\n"); 
 printf("��������ѡ��:"); 
 scanf("%d",&n); 
 return n;
}
//��ҵ��Ϣ�˵���ʾ
void XinXi_Menu()
{
  int choose;
  system("cls");
  do
  {
  printf("*****************************��ҵ��Ϣϵͳ************************************\n");  
  printf("-----------------------------------------------------------------------------\n");  
  printf("1.������Ϣ����\n");    
  printf("2.��ҵ�շѹ���\n");  
  printf("3.���ͷ��ʹ���\n");  
  printf("4.�豸���޹���\n");  
  printf("5.�������˵�\n");  
  printf("��������ѡ��:"); 
 scanf("%d",&choose);  
  switch(choose)  
   {
    case 1:
      YeZhu_Menu();
      break;
    case 2:
      WuYe_Menu();
	   break;
	case 3:
	  Foreign_personnel();
      break;
	case 4:
	  Equipment_record();
      break;
    case 5:
      return;
    default:
      printf("�����������������\n"); 
   }
  } while (1);
}
//ͳ�Ʋ�ѯ�˵���ʾ
void TongJi_Menua() 
{
  int choose;
   system("cls");
  do
  {
  printf("******************************ͳ�Ʋ�ѯϵͳ***********************************\n"); 
  printf("-----------------------------------------------------------------------------\n");  
  printf("����ѯ�ɷ���Ϣ��\n"); 
  printf("��Ƿ������һ����\n");    
  printf("���������˵� \n"); 
  printf("��������ѡ��:"); 
  scanf("%d",&choose); 
  switch(choose)  
   {
    case 1:
      myfind();
      break;
    case 2:
      Arrears_List();
      break;
    case 3:
      return;
    default:
      printf("�����������������!\n\n"); 
   }
  } while (1);
}
//ҵ���˵�����
void YeZhu_Menu() 
{
  int choose;
    system("cls");
  do
  {
  printf("********************************ҵ����Ϣ�༭ϵͳ******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("��ҵ����Ϣ¼�몿 \n");  
  printf("��ҵ����Ϣ�޸� \n"); 
  printf("��ҵ����Ϣɾ��\n"); 
  printf("��ҵ����Ϣ����� \n"); 
  printf("�������ϼ��˵�\n"); 
  printf("������ѡ��:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Owner();
      break;
    case 2:
      MyReplace1_Owner();
      break;
    case 3:
      MyDelete1_Owner();
      break;
    case 4:
      Display1();
      break;
    case 5:
      return;
    default:
      printf("�����������������\n"); 
   }
  } while (1);
}
//¼��ҵ����Ϣ
void MyAdd1_Owner() 
{
  struct yezhu *p;
  p = (struct yezhu *)malloc(sizeof(struct yezhu));
  printf("��¼��ҵ����Ϣ\n");
  printf("ID:");
  scanf("%s", p->id);
  printf("����:");
  scanf("%s", p->name);
  printf("����");
  scanf("%d", &p->age);
  printf("��ͥ��Ա��");
  scanf("%d", &p->family_num);
  printf("����¥��");
  scanf("%d", &p -> floor_num);
  printf("��Ԫ�����:");
  scanf("%s", p->room_num);
  printf("סլ���:");
  scanf("%d", &p->area);
  printf("��סʱ��");
  scanf("%s", p->rz_time);
  myAdd3(p);
  save1(p);
  printf("¼��ɹ�!\n");
}
//���ҵ����Ϣ���
struct yezhu *myAdd3(struct yezhu *p) 
{
  struct yezhu *t;
  if (phead == NULL)
  {
    phead = p;
    p->next = NULL;
  }
  else
  {
    t = phead;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead;

  }
}
//�޸�ҵ����Ϣ
void MyReplace1_Owner() 
{
  struct yezhu *k;
  char id[100];
  printf("������Ҫ�޸ĵ�ҵ��ID:");
  scanf("%s", id);
  k = find1(id);
  if (k != NULL)
  {
    printf("������Ҫ�޸ĵ�ҵ����Ϣ\n");
    printf("ID:");
    scanf("%s", k->id);
    printf("����:");
    scanf("%s", k->name);
    printf("����");
    scanf("%d", &k->age);
    printf("��ͥ��Ա��");
    scanf("%d", &k->family_num);
    printf("����¥��");
    scanf("%d", &k->floor_num);
    printf("��Ԫ�����:");
    scanf("%s", k->room_num);
    printf("סլ���:");
    scanf("%d", &k->area);
    printf("��סʱ��");
    scanf("%s", k->rz_time);
    save1(k);
    printf("�޸ĳɹ�!\n");
  }
  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
}
//ͨ��ID����ҵ����Ϣ
struct yezhu *find1(char *id) 
{
  struct yezhu *p;
  p = phead;
  while (p != NULL)
  {
    if (strcmp(p->id, id) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}
struct Foreign_personnel *Foreign_personnel_find(char *id) 
{
  struct Foreign_personnel *p;
  p = phead_Foreign;
  while (p != NULL)
  {
    if (strcmp(p->id, id) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}

struct Equipment_record *Equipment_record_find(char *name) 
{
  struct Equipment_record *p;
  p = phead_Equipment_record;
  while (p != NULL)
  {
    if (strcmp(p->name, name) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}

void Display1()
{
  struct yezhu *p;
  p = phead;
  while (p != NULL)
  {
    printf("\n\n");
    printf("ID:%s\n", p->id);
    printf("����:%s\n", p -> name);
    printf("����%d\n", p->age);
    printf("��ͥ��Ա��%d\n", p->family_num);
    printf("����¥��%d\n", p->floor_num);
    printf("��Ԫ�����:%s\n", p->room_num);
    printf("סլ���:%d\n", p->area);
    printf("��סʱ��%s\n", p->rz_time);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Owner()
{
  struct yezhu *p, *pp;
  struct wuye *k, *kk;
  char id[100];
  pp = phead;
  kk = pHead;
  printf("������Ҫɾ���˵�ID:");
  scanf("%s", id);
  p = find1(id);
  k = find2(id);
  if (p != NULL)
  {
    if (p == phead)
    {
      phead = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("�޴�ҵ��ID!\n");
    return;
  }
  printf("ɾ��ҵ����Ϣ�ɹ�!\n");
  save1(p);
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
  printf("ɾ����ҵ��Ϣ�ɹ�!\n");
  save2(k);
}

void save1(struct yezhu *p)
{
  FILE *fp;

  fp = fopen("yezhu.dat", "wb");
  p = phead;
  while (p != NULL)
  {
    fwrite(p, sizeof(struct yezhu), 1, fp);
    p = p->next;
  }
  fclose(fp);
}

void Read1()
{
  FILE *fp;
  struct yezhu *p;
  fp = fopen("yezhu.dat", "rb");
  while (1)
  {
    p = (struct yezhu *)malloc(sizeof(struct yezhu));
    if (feof(fp))
    {

      break;
    }
    if (fread(p, sizeof(struct yezhu), 1, fp))
    {
      myAdd3(p);
    }
  }
  fclose(fp);
}

void WuYe_Menu()
{
  int choose = 0;
    system("cls");
  do
  {
	printf("*********************************��ҵ���ù���ϵͳ************************\n"); 
	printf("-------------------------------------------------------------------------\n"); 
	printf("����ҵ��Ϣ¼�몿 \n");     
	printf("����ҵ��Ϣ�޸Ī� \n"); 
	printf("����ҵ��Ϣɾ���� \n"); 
	printf("����ҵ��Ϣ����� \n");
	printf("�������ϼ��˵�\n");
	printf("������ѡ��");  
	scanf("%d",&choose); 
 switch(choose)  
  {
    case 1:
      MyAdd2_Property();
      break;
    case 2:
      MyReplace2_Property();
      break;
    case 3:
      MyDelete2_Property();
      break;
    case 4:
      Display2();
      break;
    case 5:
      return;
    default:
      printf("�����������������\n"); 
  }
  } while (1);
}

void MyAdd2_Property() //¼����ҵ��Ϣ//
{
  struct wuye *p;
  struct yezhu *t;
  int x;
  p = (struct wuye *)malloc(sizeof(struct wuye));
  printf("��¼����ҵ��Ϣ\n");
  printf("ID:");
  scanf("%s", p->ID);
  t = find1(p->ID);
  if (t != NULL)
  {
    printf("��һ�νɷ����");
    scanf("%d", &p->last_year);
    printf("�·�");
    scanf("%d", &p->last_month);
    printf("�ɷѽ��");

    scanf("%f", &p->money);
    x = p->money / (0.4 * t->area);

    p->to_time = (int)x;
    myAdd4(p);
    save2(p);
    printf("¼��ɹ�!\n");
  }

  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
}

struct wuye *myAdd4(struct wuye *p) //�����ҵ��Ϣ���//
{

  struct wuye *t;
  if (pHead == NULL)
  {
    pHead = p;
    p->link = NULL;
  }
  else
  {
    t = pHead;
    while (t->link != NULL)
      t = t->link;
    t->link = p;
    p->link = NULL;
  }
  return pHead;
}

struct wuye *find2(char *id) //ͨ���������ҽɷ���Ϣ
{
  struct wuye *p;
  p = pHead;
  while (p != NULL)
  {
    if (strcmp(p->ID, id) == 0)
      return p;
    p = p->link;
  }
  return NULL;
}

void myfind()
{
  struct wuye *p;
  char a[100];
 printf("������Ҫ���ҵ�ҵ��id"); 
 scanf("%s",a); 
 p=find2(a); 
 if(p!=NULL) 
  {
    printf("ҵ���Ѿ����!\n"); 
  }
 
 else  
  {
    printf("ҵ����û�����Ϣ!\n");
    return; 
  } 
 
 Display(p);
}

void MyReplace2_Property() 
{
  char id[20];
  int x;
  struct wuye *k;
  struct yezhu *t;
  printf("������Ҫ�޸ĵ�ҵ��ID:");
  scanf("%s", id);
  if (k != NULL)
  {
    printf("��Ҫ�޸ĵ���ϢΪ\n");
    printf("�������µ���Ϣ\n");
    printf("ID:");
    scanf("%s", k->ID);
    printf("��һ�νɷ����");
    scanf("%d", &k->last_year);
    printf("�·�");
    scanf("%d", &k->last_month);
    printf("�ɷѽ��");
    scanf("%f", &k->money);
    t = find1(k->ID);
    x = (int)k->money / (0.4 * t->area);
    k->to_time = (int)x;

    myAdd4(k);
    save2(k);
   printf("�޸ĳɹ�!\n"); 
  }
  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
}

void MyDelete2_Property() 
{
  struct wuye *p, *pp;
  char id[100];
  pp = pHead;
  printf("������Ҫɾ���˵�ID:");
  scanf("%s", id);
  p = find2(id);
  if (p != NULL)
  {
    if (p == pHead)
    {
      pHead = p->link;
      free(p);
    }
    else
    {
      while (pp->link != p)
        pp = pp->link;
      pp->link = p->link;
      free(p);
    }
  }
  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
  save2(p);
  printf("ɾ���ɹ�!\n");
}

void Display2()    
{
  struct wuye *p;
  p = pHead;
  while (p != NULL)
  {
    printf("ID:%s\n", p->ID);
   printf("���һ�νɷ�����%d��%d��\n",p->last_year,p->last_month);  
   printf("�ɷѽ��:%fԪ\n",p->money); 
   printf("������Ч��%d����\n",p->to_time); 
   printf("\n\n\n");  
   p=p->link;
  }
}

void Display(struct wuye *p)
{
  printf("ҵ��ID:%s\n", p->ID);
 printf("���һ�νɷ�����%d��%d��\n",p->last_year,p->last_month); 
 printf("���һ�νɷѽ��%f\n",p->money); 
 printf("������Ч��%d����\n",p->to_time);
}

void Read2()
{
  FILE *fp;
  struct wuye *p;
  fp = fopen("wuye.dat", "rb");
  while (1)
  {
    p = (struct wuye *)malloc(sizeof(struct wuye));
    if (feof(fp))
      break;
    if (fread(p, sizeof(struct wuye), 1, fp))
      myAdd4(p);
  }
  fclose(fp);
}

void save2(struct wuye *p)
{
  FILE *fp;
  fp = fopen("wuye.dat", "wb");
  p = pHead;
  while (p != NULL)
  {

    fwrite(p, sizeof(struct wuye), 1, fp);
    p = p->link;
  }
  fclose(fp);
}

void Arrears_List()
{
  int year, month;
  struct wuye *k;
  struct yezhu *l;
  k = pHead;
  l = phead;
  printf("�����뵱ǰ���");
  scanf("%d", &year);
  printf("�����뵱ǰ�·�");
  scanf("%d", &month);
  while (k != NULL)
  {
    if (year > k->last_year)
    {
      l = find1(k->ID);

      l->lost = (float)(month + 12 - k->to_time - k->last_month) * (0.4 * l->area);
      if (l->lost > 0)
      {
        printf("ҵ��ID*:%s\n", l->id);
        printf("ҵ������*:%s\n", l->name);
        printf("���һ�νɷ�����%d��%d��\n",k->last_year,k->last_month);
        printf("Ƿ�ѽ��*%f\n",l->lost); 
        printf("\n\n");
      }
    }
    if (year == k->last_year)
    {
      l = find1(k->ID);

      l->lost = (float)(month - k->to_time - k->last_month) * (0.4 * l->area);
      if (l->lost > 0)
      {
        printf("ҵ��ID:%s\n", l->id);

        printf("ҵ������%s\n", l->name);
        printf("���һ�νɷ�����%d��%d��\n", k->last_year, k->last_month);
        printf("Ƿ�ѽ��%f\n", l->lost);
        printf("\n\n");
      }
    }

    k = k->link;
  }

}

void Foreign_personnel() 
{
  int choose;
   system("cls");
  do
  {
  printf("********************************������Ա�Ǽ���Ϣ******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("��������Ա¼�몿 \n");  
  printf("��������Ա�޸� \n"); 
  printf("��������Աɾ��\n"); 
  printf("��������Ա����� \n"); 
  printf("�������ϼ��˵�\n"); 
  printf("������ѡ��:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Foreign_personnel();
      break;
    case 2:
      MyReplace1_Foreign_personnel();
      break;
     case 3:
      MyDelete1_Foreign_personnel();
      break;
    case 4:
      Display_Foreign_personnel();
      break;
    case 5:
      return;
    default:
      printf("�����������������\n"); 
   }
  } while (1);
}
//¼��������Ա��Ϣ
void MyAdd1_Foreign_personnel() 
{
  struct Foreign_personnel *p;
  p = (struct Foreign_personnel*)malloc(sizeof(struct Foreign_personnel));
  printf("��¼������Ա��Ϣ\n");
  printf("ID:");
  scanf("%s", p->id);
  printf("����:");
  scanf("%s", p->name);
  printf("����");
  scanf("%d", &p->age);
  printf("���복�ƺţ�");
  scanf("%s", p->car_License_plate);
  printf("����ͣ��λ�ţ�");
  scanf("%d", &p-> Parking_space_num);
  printf("�������ʱ�䣺");
  scanf("%s", p->come_time);
  printf("�����뿪ʱ�䣺");
  scanf("%s", p->leave_time);

  myAdd_Foreign_personnel(p);
  //save1_Foreign_personnel(p);
  printf("¼��ɹ�!\n");
}

//���������Ա��Ϣ���
struct Foreign_personnel *myAdd_Foreign_personnel(struct Foreign_personnel *p) 
{
  struct Foreign_personnel *t;
  if (phead_Foreign == NULL)
  {
    phead_Foreign = p;
    p->next = NULL;
  }
  else
  {
    t = phead_Foreign;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead_Foreign;

  }
}

//�޸�������Ա��Ϣ
void MyReplace1_Foreign_personnel() 
{
  struct  Foreign_personnel *k;
  char id[100];
  printf("������Ҫ�޸ĵ�ҵ��ID:");
  scanf("%s", id);
  k = Foreign_personnel_find(id);
  if (k != NULL)
  {
    printf("������Ҫ�޸ĵ�������Ա��Ϣ\n");
    printf("ID:");
    scanf("%s", k->id);
    printf("����:");
	scanf("%s", k->name);
	printf("����");
	scanf("%d", &k->age);
	printf("���복�ƺţ�");
	scanf("%s", k->car_License_plate);
	printf("����ͣ��λ�ţ�");
	scanf("%d", &k-> Parking_space_num);
	printf("�������ʱ�䣺");
	scanf("%s", k->come_time);
	printf("�����뿪ʱ�䣺");
	scanf("%s", k->leave_time);
    printf("�޸ĳɹ�!\n");
  }
  else
  {
    printf("�޴�ҵ��ID!\n");
    return;
  }
}

void Display_Foreign_personnel()
{
  struct Foreign_personnel *p;
  p = phead_Foreign;
  while (p != NULL)
  {
    printf("\n\n");
    printf("ID:%s\t\n", p->id);
    printf("����:%s\t\n", p -> name);
    printf("����:%d\t\n", p->age);
	printf("���ƺţ�%s\t\n",p->car_License_plate);
	printf("ͣ��λ�ţ�%d�ų�λ\t\n",p->Parking_space_num);
	printf("�ó�����ʱ��:%s\t\n",p->come_time);
	printf("�ó��뿪ʱ��:%s\t\n",p->leave_time);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Foreign_personnel()
{
  struct Foreign_personnel *p, *pp;
  struct wuye *k, *kk;
  char id[100];
  pp = phead_Foreign;
  kk = pHead;
  printf("������Ҫɾ���˵�ID:");
  scanf("%s", id);
  p = Foreign_personnel_find(id);
  k = find2(id);
  if (p != NULL)
  {
    if (p == phead_Foreign)
    {
      phead_Foreign = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("�޴�������ԱID!\n");
    return;
  }
  printf("ɾ����������Ա��Ϣ�ɹ�!\n");
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
}


void Equipment_record() 
{
  int choose;
  system("cls");
  do
  {
  printf("********************************�豸���޵Ǽ���Ϣ******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("���豸������Ϣ¼�몿 \n");  
  printf("���豸������Ϣ�޸� \n"); 
  printf("���豸������Ϣɾ��\n"); 
  printf("���豸������Ϣ�����\n"); 
  printf("�������ϼ��˵�\n"); 
  printf("������ѡ��:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Equipment_record();
      break;
    case 2:
      MyReplace1_Equipment_record();
      break;
     case 3:
      MyDelete1_Equipment_record();
      break;
    case 4:
      Display_Equipment_record();
      break;
    case 5:
      return;
    default:
      printf("�����������������\n"); 
   }
  } while (1);
}

//¼���豸��Ϣ
void MyAdd1_Equipment_record() 
{
  struct Equipment_record *p;
  p = (struct Equipment_record*)malloc(sizeof(struct Equipment_record));
  printf("��¼���豸������Ϣ\n");
  printf("�����豸����:");
  scanf("%s",p->name);
  printf("��ͥ���ƺţ�");
  scanf("%s", p->room_num);
  printf("����¥�㣺");
  scanf("%d", &p->floor_num);
  printf("������һ��ά�޵�ʱ�䣺");
  scanf("%s",p->time );
  printf("�Ƿ���д���yes/no \n");
  scanf("%s",p->Whether_deal_with);

  myAdd_Equipment_record(p);
  //save1_Foreign_personnel(p);
  printf("¼��ɹ�!\n");
}

//����豸������Ϣ���
struct Equipment_record *myAdd_Equipment_record(struct  Equipment_record *p) 
{
  struct Equipment_record *t;
  if (phead_Equipment_record == NULL)
  {
    phead_Equipment_record = p;
    p->next = NULL;
  }
  else
  {
    t = phead_Equipment_record;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead_Equipment_record;

  }
}

//�޸��豸������Ϣ
void MyReplace1_Equipment_record() 
{
  struct  Equipment_record *k;
  char name[100];
  printf("������Ҫ�޸ĵ��豸������:");
  scanf("%s", name);
  k = Equipment_record_find(name);
  if (k != NULL)
  {
	  printf("��¼���豸������Ϣ\n");
	  printf("�����豸����:");
	  scanf("%s",k->name);
	  printf("��ͥ���ƺţ�");
	  scanf("%d", k->room_num);
	  printf("����¥�㣺");
	  scanf("%d", &k->floor_num);
	  printf("������һ��ά�޵�ʱ�䣺");
	  scanf("%s",k->time );
	  printf("�Ƿ���д���yes/no");
	  scanf("%s",k->Whether_deal_with);
      printf("�޸ĳɹ�!\n");
  }
  else
  {
    printf("�޴��豸����!\n");
    return;
  }
}

void Display_Equipment_record()
{
  struct Equipment_record *p;
  p = phead_Equipment_record;
  while (p != NULL)
  {
    printf("\n\n");
    printf("�豸����:%s\t\n", p -> name);
	printf("��ͥ���ƺţ�%s\t\n",p->room_num);
	printf("����¥�㣺%d\t\n",p->floor_num);
	printf("��һ��ά�޵�ʱ�䣺%s\t\n",p->time);
	printf("�Ƿ���д���: %s\t\n",p->Whether_deal_with);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Equipment_record()
{
  struct Equipment_record *p, *pp;
  struct wuye *k, *kk;
  char name[100];
  pp = phead_Equipment_record;
  kk = pHead;
  printf("������Ҫɾ���豸������:");
  scanf("%s", name);
  p = Equipment_record_find(name);
  k = find2(name);
  if (p != NULL)
  {
    if (p == phead_Equipment_record)
    {
      phead_Equipment_record = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("�޴��豸ID!\n");
    return;
  }
  printf("ɾ�����豸�ɹ�!\n");
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
}
