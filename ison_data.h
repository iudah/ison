#ifndef ISON_DATA_H
#define ISON_DATA_H

#include "ison.h"
#include <inttypes.h>

struct map_value {
  union {
    char *string;
    int integer;
    void *ptr;
    double number;
    bool boolean;
  } value;
  map_value_type type;
};

#endif