#define TYPE delta
#define DEVICE kossel_pro

#include "macros.h"
#include "boards.h"

#if ENABLED(USE_AUTOMATIC_VERSIONING)
  #include "_Version.h"
#else
  #include "Default_Version.h"
#endif

#include <config_macro.h>
#include "Conditionals.h"
#include <config_macro_adv.h>
#include "Conditionals.h"
#include "thermistortables.h"
#include "SanityCheck.h"

