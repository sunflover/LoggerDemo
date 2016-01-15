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
