#ifndef __MX_H
#define __MX_H

#include "MX_Local.h"

#include "stdio.h"
#include "string.h"

struct ConfigParam{
	unsigned long SampleRate;//������
	double K_ADP;//ѹ�� ���� AD ��б��
	double D_ADP;//ѹ������ AD  �Ľؾ�
	double Lambada;//ѹ��ϵ��
	double PtoPerMM;//1mm��Ӧ��ѹ��ֵ
	unsigned long MMtoPerSec;//1sʱ���Ӧ�ĺ���ֵ 25
};

/*struct FaZhiConf{
	double fangcha_t;//���ڷ��ֵ,���ڴ˷�ֵ�����ʲ��롣
	double fangcha_t_juedui;//���ڷ��ֵ2,���ڴ˷�ֵ,���ʾ��Բ���
};*/

//extern struct ConfigParam config;//ȫ�����ýṹ��
//extern struct FaZhiConf fazhi;
//extern unsigned long BCValve;//ȷ��BC��ʱ�����޶����ҵ��ļ���Сֵ��һ�������ڵķ�ֵ��һ�����Ϊһ�����ڵĹ���
//extern unsigned long FGValve;//�ڡ����������ҵ�FG�е㣬�Ӹ��е���һ����Χ������������F G���㡣�÷�ֵ�����޶�������Χ��

/*******************************
ϵͳ���ú���
*******************************/
extern "C" _declspec(dllexport)void _stdcall SysConfig(struct ConfigParam *config, unsigned long SampleRate,double K_ADP,double D_ADP,double Lambada,double PtoPerMM,unsigned long MMtoPerSec);

/*******************************
��ֵ���ú���
*******************************/
//extern "C" _declspec(dllexport)void _stdcall FaZhiConfig(struct FaZhiConf *fazhi, double fangcha_t,double fangcha_t_juedui);

/*******************************
��������
pData:��������	nCount:�������ݸ���
����ֵ�����ʣ���/�֣�
*******************************/
//extern "C" _declspec(dllexport)double _stdcall GetMaiLv(struct ConfigParam *config, unsigned long* pData,unsigned int nCount);

/*******************************
�����������
pData:��������	nCount:�������ݸ��� periodparam:���ڷ������Ĳ����ṹ��
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangCanShu(unsigned long* pData,unsigned int nCount,PeriodParam* periodparam);
//extern "C" _declspec(dllexport) void _stdcall MaiXiangCanShu(struct ConfigParam *config, unsigned long** pData_3N, struct Position** head, unsigned long* pData,unsigned int nCount,PeriodParam* periodparam);

/*******************************
�������
pData:��������	nCount:�������ݸ���	pressure:��ѹ
����ֵ���������
*******************************/
//extern "C" _declspec(dllexport)unsigned long _stdcall MaiXiangFenLei(unsigned long* pData,unsigned int nCount,unsigned long pressure);
//extern "C" _declspec(dllexport)unsigned long _stdcall MaiXiangFenLei(struct ConfigParam *config, struct FaZhiConf *fazhi, unsigned long** pData_3N, struct Position** head, struct PeriodParam *AvgParam, unsigned long* pData, unsigned int nCount, unsigned long pressure);

/*******************************
��������
����ֵ��Array:����������ڵ�����
        ArrayCount:�������������Ԫ�ظ���
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangZhouQi(double* Array,unsigned int* ArrayCount);

/*******************************
����������λ��
����ֵ��Array:��������������λ�õ�����
        ArrayCount:����Ԫ�ظ���
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangPoints(unsigned long* Array,unsigned int* ArrayCount);

/*******************************
�궨����
���룺data1/data2:�궨��������
      nCount1/nCount2:�궨�������鳤��
	  m1/m2:�궨��������
�����K:б��
      D:�ؾ�
����ֵ��0������ʧ�ܣ���ԭ�����½���֮ǰ������̫�٣�����Ϊ20�����ϣ�
        1�����óɹ�
*******************************/
//extern "C" _declspec(dllexport)long _stdcall  BiaoDing(unsigned long* data1,unsigned int nCount1,unsigned long* data2,unsigned int nCount2,double m1,double m2,long* K,long* D);

//extern "C" _declspec(dllexport)int _stdcall AnalysisMXData(unsigned long pressure, unsigned long SampleRate,double K_ADP,double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec, unsigned long *pluse, int nCount, PeriodParam* periodparam, int *iMXType, double *dblMailv);
/*******************************
����DLL�ӿ�
���룺const char *fileadress������txt�ļ�λ��, 
char *pluseresult������������
double* canshu������ʱ����������
unsigned long pressure,����ǰ�ݶ�ѹ��
Ӳ��������unsigned long SampleRate, double K_ADP, double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec�������ʣ�б�ʣ��ؾ࣬�Ŵ���������ת���ף�����תʱ�䡣
����ֵ��0������ʧ�ܣ���ԭ�����½���֮ǰ������̫�٣�����Ϊ20�����ϣ�
1�����óɹ�
*******************************/
extern "C" _declspec(dllexport)int _stdcall AnalysisMX(const char *fileadress, char *pluseresult, double* canshu,unsigned long pressure, unsigned long SampleRate, double K_ADP, double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec);


/*******************************
�ַ���ƴ�ӽӿ�
���룻�����ݶ�H1�������ݶ�ѹ��ֵ�������ݶ����������Զ��Ÿ����������ȡ��ѹ�����������
����ֵ��0������ʧ��
1�����óɹ�
*******************************/
//extern "C" _declspec(dllexport)int _stdcall GetPulseFinalResult(double*AllH1,double*Pressure,int number,char *result,char*pulseResult);

#endif