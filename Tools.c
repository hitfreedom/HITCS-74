/************************************************************************/
/*�ļ����ƣ�Tools.c
* �ļ��汾��V1.00
* ����˵�����������ܵ�ʵ�֣�Ϊ����ģ���ṩ�������񣬰�������ϵͳע���ȡ�
* �������ڣ�2012-3-22
* ��    �ߣ��ξ���
* ������־��1. 0
/************************************************************************/
#include <Ntifs.h>
#include <ntddk.h>
#include <stdarg.h>
#include <ntstrsafe.h>
#include <scsi.h>


#include "dsm.h"
#include "huzeDsm.h"

/************************************************************************
*�������ƣ�DsmGetKeyValueFromParamters
*��    �ߣ��ξ���
*����˵������DSM�����Parameters���µ��ض�����ȡֵ��
*����˵����[IN] UNICODE_STRING keyValue������
*          [IN/OUT] UCHAR** data, �洢��ֵ�Ŀؼ����ڲ����䣬��Ҫ�������ͷ�
*          [OUT] ULONG* dataLen, ���ߵĳ���
*          [OUT] ��ֵ�����ͣ����ַ���������
*����˵����NTSTATUS ����
*ʵ��������
*************************************************************************/
NTSTATUS DsmGetKeyValueFromParamters(UNICODE_STRING keyValue, UCHAR** data, ULONG* dataLen, ULONG* type)
{
	
	return 0;
}


/************************************************************************
*�������ƣ�DsmOpenLoadBalanceSettingsKey
*��    �ߣ��ξ���
*����˵������ע����д��豸�ؼ��֣�Ҫ��������ͷž����
*����˵����[IN] ACCESS_MASK AccessMask,�򿪹ؼ�����������
*          [OUT] PDSM_LOAD_BALANCE_TYPE LoadBalanceType ���ؾ�������
*����˵����
*ʵ��������
*************************************************************************/
NTSTATUS DsmGetLoadBalanceSettings(ACCESS_MASK AccessMask, 
									   OUT PDSM_LOAD_BALANCE_TYPE LoadBalanceType)
{
	return 0;
	
}



/************************************************************************
*�������ƣ�DsmpGetDeviceList
*��    �ߣ��ξ���
*����˵������ע���ļ�ֵ"inspurdsm\Parameters\SupportedDeviceList"�в���
*          ֧�ֵ��豸�б���������䵽DSM�����ĵ����С�
*����˵����[IN] PDSM_CONTEXT Context  DSM��������Ϣ��
*����˵����
*ʵ��������
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
