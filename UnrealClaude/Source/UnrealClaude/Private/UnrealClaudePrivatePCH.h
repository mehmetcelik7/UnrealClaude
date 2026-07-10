#pragma once

#include "CoreMinimal.h"

// Apple Clang 21 diagnoses an intentional first-element JSON lookup that
// exits a range loop with `break` as unreachable loop increment code. The
// module is built with warnings-as-errors by UE 5.8's Mac toolchain.
#if PLATFORM_MAC
#pragma clang diagnostic ignored "-Wunreachable-code-loop-increment"
#endif
