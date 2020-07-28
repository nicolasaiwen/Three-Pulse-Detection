#ifndef __MXLOCAL_H
#define __MXLOCAL_H

struct PeriodParam{
	//时间指标
	double t;
	double t2;
	double t1;
	double t4;
	double t5;
	double w;
	//波幅指标
	double h1;
	double h3;
	double h4;
	double h5;
	//角度指标 以角度为单位
	double alpha;
	double theta;
	//面积指标
	double Aa;
	double Ab;
	double AT;
	double As;
	double Ad;
	//比值指标
	double h1_t1;
	double h3_h1;
	double h4_h1;
	double h5_h1;
	double w_t;	
	//用于计算主波角的参数，设W与脉图左右交于M、N点，从C点引垂线交MN于L，以下参数分别记录时间ML和LN
	double ML;
	double LN;
	int pressure;//目前的压力梯度
	double t_d;//各个周期的方差
	int isCorrectPulse;//是否是正确的脉象
};

struct BCDEPoints
{//该结构体用于储存各个特征点的指针变量
	int* B;
	int* C;
	int BLength;
	int CLength;
	int* D;
	int* E;
	int* F;
	int* G;

};


/*******************************全局变量声明 不要操作*******************************/
//extern unsigned long* pData_3N;//内部保留采样数据
//extern struct Position* head;//链表头

/******************************
平滑函数
pData：被处理数据	cCount：数据个数	N：实现N点平滑
*******************************/
void PingHua_N(unsigned long* pData,unsigned int nCount,unsigned int N);


/*******************************
对采样数据做3阶平滑预处理，处理结果保留在pData_3N中，做为后续后处的数据
*******************************/
//void Filter(unsigned long* pData,unsigned int nCount);
void Filter(unsigned long** pData_3N, unsigned long* pData,unsigned int nCount);

/*******************************
寻找BC点。
pData:采样数据	nCount:采样数据个数	self：用于存放结果的链表头
*******************************/
void FindBCPos(unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);

/*******************************
寻找DEFG点。
pData:采样数据	nCount:采样数据个数	self：用于存放结果的链表头
*******************************/
void FindDEFGPos(unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);



/*******************************
计算各值的平均值
返回值：周期参数结构
*******************************/
//struct PeriodParam GetAvgParam();
struct PeriodParam GetAvgParam(struct ConfigParam config,unsigned long* pData,unsigned int nCount,struct BCDEPoints *points);



/*******************************
释放所有资源，包括释放参数及位置链表，释放全局数据指针
当开始一个新的检测之前，必须调用此函数
*******************************/
//void ReleaseAll();
void ReleaseAll(unsigned long** pData_3N,struct BCDEPoints **head );


/***********************************调试函数***********************************/
//unsigned long sampleVAL(char* buf);
//void GetData(unsigned long* buf,unsigned int nCount);
//void VALtoChar(char* buf,unsigned int* start,unsigned long t);
//void PutData(unsigned long* buf,unsigned nCount);

#endif