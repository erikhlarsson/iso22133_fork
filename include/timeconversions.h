#pragma once
#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>
#if defined __linux || defined __APPLE__
#include <sys/time.h>
#else
#include "winsock.h"
#endif

// Time functions
int8_t setToGPStime(struct timeval *time, const uint16_t GPSweek, const uint32_t GPSqmsOfWeek);
int32_t getAsGPSWeek(const struct timeval *time);
int64_t getAsGPSQuarterMillisecondOfWeek(const struct timeval *time);
uint64_t getAsGPSms(const struct timeval *time);
#ifdef __cplusplus
}
#endif