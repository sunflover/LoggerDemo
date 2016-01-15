# LoggerDemo
CLogger Class,Win32
/*
//类名：CLogger

//功能介绍：Win平台日志记录功能，多线程安全，支持写日志级别的设置，日志格式包含日志等级，日志时间，文件名，行号信息

//作者：sunflover 2016-1-15 14:31:27

//使用方法：

1：将logger.h，logger.cpp添加到项目中

2：设置logger.cpp的预编译头选项为“不使用预编译头”

3：使用代码示例：

#include "Logger.h"

LOGGER::CLogger logger;

void main()

{

logger.TraceFatal("TraceFatal %d", 1);

logger.TraceError("TraceError %s", "sun");

logger.TraceWarning("TraceWarning");

logger.TraceInfo("TraceInfo");

logger.ChangeLogLevel(LOGGER::LogLevel_Error);

logger.TraceFatal("TraceFatal %d", 2);

logger.TraceError("TraceError %s", "sun2");

logger.TraceWarning("TraceWarning");

logger.TraceInfo("TraceInfo");

}
执行结果：20160115142829.log文件内容如下

Fatal	2016-01-15 14:28:29 logger.cpp:91	TraceFatal 1

Error	2016-01-15 14:28:29 logger.cpp:123	TraceError sun

Warning	2016-01-15 14:28:29 logger.cpp:155	TraceWarning

Info	2016-01-15 14:28:29 logger.cpp:188	TraceInfo

Fatal	2016-01-15 14:28:29 logger.cpp:91	TraceFatal 2

Error	2016-01-15 14:28:29 logger.cpp:123	TraceError sun2

*/
