// cannyTestConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "glog\logging.h"

#pragma comment(lib, "glogd.lib")

#define GLOG_NO_ABBREVIATED_SEVERITIES 

int main(int argc, char* argv[])
{
	FLAGS_log_dir = "D:\\LOGs";
	google::InitGoogleLogging(argv[0]);
	google::SetLogDestination(google::GLOG_INFO, "D:\\LOGs\\INFO_");
	google::SetLogDestination(google::GLOG_WARNING, "D:\\LOGs\\WARNING_");
	google::SetLogDestination(google::GLOG_ERROR, "D:\\LOGs\\ERROR_");
	google::SetStderrLogging(google::GLOG_FATAL);//设置控制台回显级别
	google::SetLogFilenameExtension("log_");
	FLAGS_colorlogtostderr = true;  // Set log color  
	FLAGS_logbufsecs = 0;  // Set log output speed(s)  
	FLAGS_max_log_size = 1024;  // Set max log file size  
	FLAGS_stop_logging_if_full_disk = true;  // If disk is full  
	LOG(INFO) << "info test" << " " << "hello log!";  //输出一个Info日志
	printf("info test \n");
	LOG(WARNING) << "warning test";  //输出一个Warning日志  
	LOG(ERROR) << "error test";  //输出一个Error日志  
	google::ShutdownGoogleLogging();
    return 0;
}

