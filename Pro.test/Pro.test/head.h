#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <conio.h> //��������
struct yezhu
{ 
  //ҵ���ṹ��
  char id[100];
  char name[20];
  int age;
  int family_num;
  int floor_num;
  char room_num[100];
  float lost;
  int area;
  char rz_time[20];
  struct yezhu *next;
};
struct wuye
{ //��ҵ��Ϣ�ṹ��
  char ID[100];
  int last_year;
  int last_month;
  float money;
  int to_time;
  struct wuye *link;
};
struct Foreign_personnel
{ 
  //������Ա�ṹ��
  char id[100];
  char name[20];
  int age;
  char car_License_plate[100];//���ƺ�
  int Parking_space_num;//ͣ��λ��
  char come_time[20];
  char leave_time[20];
  struct Foreign_personnel *next;
};
struct Equipment_record
{ 
  //�豸���޽ṹ��
  char name[20]; 
  char room_num[100];
  int floor_num;
  char time[20];//ά��ʱ��
  char Whether_deal_with[100];//�Ƿ���д���
  struct Equipment_record *next;
};
struct yezhu *phead; //ҵ��ͷ���
struct wuye *pHead;  //��ҵͷ���
struct Foreign_personnel *phead_Foreign;  //������Աͷ���
struct Equipment_record *phead_Equipment_record;  //�豸ά�޹���ͷ���