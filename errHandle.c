/************************************************************************/
/*文件名称：ErrorHandling.c
* 文件版本：V1.00
* 功能说明：错误处理模块用于在IO或者控制命令出现错误时的处理
* 创建日期：2013-3-22
* 作    者：何巨玮
/************************************************************************/

#include <ntddk.h>
#include <stdio.h>
#include <stdarg.h>
#include <ntstrsafe.h>
#include "dsm.h"
#include "huzeDsm.h"
#include "wmi.h"


