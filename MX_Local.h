#ifndef __MXLOCAL_H
#define __MXLOCAL_H

struct PeriodParam{
	//ʱ��ָ��
	double t;
	double t2;
	double t1;
	double t4;
	double t5;
	double w;
	//����ָ��
	double h1;
	double h3;
	double h4;
	double h5;
	//�Ƕ�ָ�� �ԽǶ�Ϊ��λ
	double alpha;
	double theta;
	//���ָ��
	double Aa;
	double Ab;
	double AT;
	double As;
	double Ad;
	//��ֵָ��
	double h1_t1;
	double h3_h1;
	double h4_h1;
	double h5_h1;
	double w_t;	
	//���ڼ��������ǵĲ�������W����ͼ���ҽ���M��N�㣬��C�������߽�MN��L�����²����ֱ��¼ʱ��ML��LN
	double ML;
	double LN;
	int pressure;//Ŀǰ��ѹ���ݶ�
	double t_d;//�������ڵķ���
	int isCorrectPulse;//�Ƿ�����ȷ������
};

struct BCDEPoints
{//�ýṹ�����ڴ�������������ָ�����
	int* B;
	int* C;
	int BLength;
	int CLength;
	int* D;
	int* E;
	int* F;
	int* G;

};


/*******************************ȫ�ֱ������� ��Ҫ����*******************************/
//extern unsigned long* pData_3N;//�ڲ�������������
//extern struct Position* head;//����ͷ

/******************************
ƽ������
pData������������	cCount�����ݸ���	N��ʵ��N��ƽ��
*******************************/
void PingHua_N(unsigned long* pData,unsigned int nCount,unsigned int N);


/*******************************
�Բ���������3��ƽ��Ԥ����������������pData_3N�У���Ϊ�����󴦵�����
*******************************/
//void Filter(unsigned long* pData,unsigned int nCount);
void Filter(unsigned long** pData_3N, unsigned long* pData,unsigned int nCount);

/*******************************
Ѱ��BC�㡣
pData:��������	nCount:�������ݸ���	self�����ڴ�Ž��������ͷ
*******************************/
void FindBCPos(unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);

/*******************************
Ѱ��DEFG�㡣
pData:��������	nCount:�������ݸ���	self�����ڴ�Ž��������ͷ
*******************************/
void FindDEFGPos(unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);



/*******************************
�����ֵ��ƽ��ֵ
����ֵ�����ڲ����ṹ
*******************************/
//struct PeriodParam GetAvgParam();
struct PeriodParam GetAvgParam(struct ConfigParam config,unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);



/*******************************
�ͷ�������Դ�������ͷŲ�����λ�������ͷ�ȫ������ָ��
����ʼһ���µļ��֮ǰ��������ô˺���
*******************************/
//void ReleaseAll();
void ReleaseAll(unsigned long** pData_3N,struct BCDEPoints **head );


/***********************************���Ժ���***********************************/
//unsigned long sampleVAL(char* buf);
//void GetData(unsigned long* buf,unsigned int nCount);
//void VALtoChar(char* buf,unsigned int* start,unsigned long t);
//void PutData(unsigned long* buf,unsigned nCount);

#endif