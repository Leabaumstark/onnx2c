#include "aixlog.hpp"
#include <cassert>

#define ONNX2C_ERROR(why)                               \
	do {                                     \
		LOG(FATAL) << why << std::flush; \
		assert(false);                   \
		exit(1);                         \
	} while (0)
