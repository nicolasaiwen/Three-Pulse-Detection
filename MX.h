#ifndef __MX_H
#define __MX_H

#include "MX_Local.h"

#include "stdio.h"
#include "string.h"

struct ConfigParam{
	unsigned long SampleRate;//采样率
	double K_ADP;//压力 对于 AD 的斜率
	double D_ADP;//压力对于 AD  的截距
	double Lambada;//压力系数
	double PtoPerMM;//1mm对应的压力值
	unsigned long MMtoPerSec;//1s时间对应的毫米值 25
};

/*struct FaZhiConf{
	double fangcha_t;//周期方差阀值,大于此阀值：脉率不齐。
	double fangcha_t_juedui;//周期方差阀值2,大于此阀值,脉率绝对不齐
};*/

//extern struct ConfigParam config;//全局配置结构体
//extern struct FaZhiConf fazhi;
//extern unsigned long BCValve;//确定BC点时用于限定所找到的极大极小值在一个周期内的阀值，一般可设为一个周期的估计
//extern unsigned long FGValve;//在“导数”中找到FG中点，从该中点在一个范围内向左右搜索F G两点。该阀值用于限定搜索范围。

/*******************************
系统配置函数
*******************************/
extern "C" _declspec(dllexport)void _stdcall SysConfig(struct ConfigParam *config, unsigned long SampleRate,double K_ADP,double D_ADP,double Lambada,double PtoPerMM,unsigned long MMtoPerSec);

/*******************************
阀值配置函数
*******************************/
//extern "C" _declspec(dllexport)void _stdcall FaZhiConfig(struct FaZhiConf *fazhi, double fangcha_t,double fangcha_t_juedui);

/*******************************
计算脉率
pData:采样数据	nCount:采样数据个数
返回值：脉率（次/分）
*******************************/
//extern "C" _declspec(dllexport)double _stdcall GetMaiLv(struct ConfigParam *config, unsigned long* pData,unsigned int nCount);

/*******************************
计算脉象参数
pData:采样数据	nCount:采样数据个数 periodparam:用于返回最后的参数结构体
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangCanShu(unsigned long* pData,unsigned int nCount,PeriodParam* periodparam);
//extern "C" _declspec(dllexport) void _stdcall MaiXiangCanShu(struct ConfigParam *config, unsigned long** pData_3N, struct Position** head, unsigned long* pData,unsigned int nCount,PeriodParam* periodparam);

/*******************************
脉象分类
pData:采样数据	nCount:采样数据个数	pressure:静压
返回值：脉象类别
*******************************/
//extern "C" _declspec(dllexport)unsigned long _stdcall MaiXiangFenLei(unsigned long* pData,unsigned int nCount,unsigned long pressure);
//extern "C" _declspec(dllexport)unsigned long _stdcall MaiXiangFenLei(struct ConfigParam *config, struct FaZhiConf *fazhi, unsigned long** pData_3N, struct Position** head, struct PeriodParam *AvgParam, unsigned long* pData, unsigned int nCount, unsigned long pressure);

/*******************************
脉象周期
返回值：Array:存放脉象周期的数组
        ArrayCount:脉象周期数组的元素个数
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangZhouQi(double* Array,unsigned int* ArrayCount);

/*******************************
脉象特征点位置
返回值：Array:存放脉象特征点的位置的数组
        ArrayCount:数组元素个数
*******************************/
//extern "C" _declspec(dllexport)void _stdcall MaiXiangPoints(unsigned long* Array,unsigned int* ArrayCount);

/*******************************
标定函数
输入：data1/data2:标定采样数组
      nCount1/nCount2:标定采样数组长度
	  m1/m2:标定砝码质量
输出：K:斜率
      D:截距
返回值：0：调用失败，（原因是下降沿之前的数据太少，至少为20点以上）
        1：调用成功
*******************************/
//extern "C" _declspec(dllexport)long _stdcall  BiaoDing(unsigned long* data1,unsigned int nCount1,unsigned long* data2,unsigned int nCount2,double m1,double m2,long* K,long* D);

//extern "C" _declspec(dllexport)int _stdcall AnalysisMXData(unsigned long pressure, unsigned long SampleRate,double K_ADP,double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec, unsigned long *pluse, int nCount, PeriodParam* periodparam, int *iMXType, double *dblMailv);
/*******************************
调用DLL接口
输入：const char *fileadress：脉象txt文件位置, 
char *pluseresult：返回脉象结果
double* canshu：返回时域特征参数
unsigned long pressure,：当前梯度压力
硬件参数：unsigned long SampleRate, double K_ADP, double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec：采样率，斜率，截距，放大倍数，克力转毫米，毫米转时间。
返回值：0：调用失败，（原因是下降沿之前的数据太少，至少为20点以上）
1：调用成功
*******************************/
extern "C" _declspec(dllexport)int _stdcall AnalysisMX(const char *fileadress, char *pluseresult, double* canshu,unsigned long pressure, unsigned long SampleRate, double K_ADP, double D_ADP, double Lambada, double PtoPerMM, unsigned long MMtoPerSec);


/*******************************
字符串拼接接口
输入；所有梯度H1，所有梯度压力值，所有梯度脉象结果（以逗号隔开），最佳取脉压力，脉象结论
返回值：0：调用失败
1：调用成功
*******************************/
//extern "C" _declspec(dllexport)int _stdcall GetPulseFinalResult(double*AllH1,double*Pressure,int number,char *result,char*pulseResult);

#endif