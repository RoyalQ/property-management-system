int Main_Menu();    //���˵�
void XinXi_Menu();  //��ҵ��Ϣ�˵�
void TongJi_Menua(); //ͳ�Ʋ�ѯ�˵�
void Arrears_List(); //Ƿ������
void YeZhu_Menu();  //ҵ���˵�
void WuYe_Menu();   //��ҵ�˵�
void Foreign_personnel();//������Ա�Ǽǲ˵�
void Equipment_record();//�豸���޹���
void MyAdd1_Owner();     //¼��ҵ����Ϣ
void MyAdd2_Property();     //¼����ҵ��Ϣ
void MyAdd1_Foreign_personnel(); //¼��������Ա��Ϣ
void MyAdd1_Equipment_record();//¼���豸������Ϣ
void MyDelete1_Owner();  //ɾ��ҵ����Ϣ
void MyDelete2_Property();  //ɾ����ҵ��Ϣ
void MyDelete1_Foreign_personnel(); //ɾ��������Ա��Ϣ
void MyDelete1_Equipment_record();
void MyReplace1_Owner(); //�޸�ҵ����Ϣ
void MyReplace2_Property(); //�޸���ҵ��Ϣ
void MyReplace1_Foreign_personnel();//�޸�������Ա��Ϣ
void MyReplace1_Equipment_record();
void Display1();   //���ҵ����Ϣ
void Display2();   //�����ҵ��Ϣ
void Display_Foreign_personnel();//���������Ա��Ϣ
void Display_Equipment_record();
void myfind();     //��ѯ�ɷ�
void Display(struct wuye *p);
void Read1();
void Read2();
void save1(struct yezhu *p);   //����ҵ����Ϣ���ļ�
void save2(struct wuye *p);    //������ҵ��Ϣ���ļ�
struct yezhu *find1(char *id); //����ҵ����Ϣ
struct wuye *find2(char *id);  //������ҵ��Ϣ`
struct yezhu *myAdd3(struct yezhu *p); //���ҵ����Ϣ
struct wuye *myAdd4(struct wuye *p);
struct Foreign_personnel *myAdd_Foreign_personnel(struct Foreign_personnel *p); 
struct Equipment_record *myAdd_Equipment_record(struct Foreign_personnel *p);