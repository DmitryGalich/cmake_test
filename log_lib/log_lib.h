#pragma once

#include "log_lib_internal.h"

#define LOG(kText) write_log(kText + std::string(" ") + __PRETTY_FUNCTION__);
