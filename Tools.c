/************************************************************************/
/*文件名称：Tools.c
* 文件版本：V1.00
* 功能说明：基础功能的实现，为其他模块提供基本服务，包括访问系统注册表等。
* 创建日期：2012-3-22
* 作    者：何巨玮
* 更改日志：1. 0
/************************************************************************/
#include <Ntifs.h>
#include <ntddk.h>
#include <stdarg.h>
#include <ntstrsafe.h>
#include <scsi.h>


#include "dsm.h"
#include "huzeDsm.h"

/************************************************************************
*函数名称：DsmGetKeyValueFromParamters
*作    者：何巨玮
*功能说明：从DSM服务的Parameters项下的特定键获取值。
*参数说明：[IN] UNICODE_STRING keyValue，键名
*          [IN/OUT] UCHAR** data, 存储键值的控件，内部分配，需要调用者释放
*          [OUT] ULONG* dataLen, 上者的长度
*          [OUT] 键值的类型，如字符，整数等
*返回说明：NTSTATUS 类型
*实现描述：
*************************************************************************/
NTSTATUS DsmGetKeyValueFromParamters(UNICODE_STRING keyValue, UCHAR** data, ULONG* dataLen, ULONG* type)
{
	
	return 0;
}


/************************************************************************
*函数名称：DsmOpenLoadBalanceSettingsKey
*作    者：何巨玮
*功能说明：从注册表中打开设备关键字，要求调用者释放句柄。
*参数说明：[IN] ACCESS_MASK AccessMask,打开关键字所需的入口
*          [OUT] PDSM_LOAD_BALANCE_TYPE LoadBalanceType 负载均衡类型
*返回说明：
*实现描述：
*************************************************************************/
NTSTATUS DsmGetLoadBalanceSettings(ACCESS_MASK AccessMask, 
									   OUT PDSM_LOAD_BALANCE_TYPE LoadBalanceType)
{
	return 0;
	
}



/************************************************************************
*函数名称：DsmpGetDeviceList
*作    者：何巨玮
*功能说明：从注册表的键值"inspurdsm\Parameters\SupportedDeviceList"中查找
*          支持的设备列表，并将其填充到DSM上下文的域中。
*参数说明：[IN] PDSM_CONTEXT Context  DSM上下文信息。
*返回说明：
*实现描述：
*************************************************************************/
NTSTATUS
DsmGetDeviceList(
				  IN PDSM_CONTEXT Context
				  )
{

	return 0;
}







void DsmDebugPrint(ULONG DebugPrintLevel, 
					PCCHAR DebugMessage, ...) 
{
	va_list ap;
	va_start(ap, DebugMessage);

	vDbgPrintEx(DPFLTR_IHVDRIVER_ID, DebugPrintLevel, DebugMessage, ap);

	va_end(ap);
}
