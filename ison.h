#ifndef ISON_H
#define ISON_H

#include <inttypes.h>

typedef struct map_value map_value;
typedef enum map_value_type map_value_type;
typedef map_value json_value;

enum map_value_type {
  UNKNOWN,
  DICT,
  LIST,
  TEXT,
  POINTER,
  INTEGERS,
  FLOATS,
  BOOLEANS,
  NULLS
};

#endif