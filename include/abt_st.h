/*
 * See COPYRIGHT in top-level directory.
 */
#ifndef ABT_ST_H
#define ABT_ST_H

#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "mapping.h"
#include "load.h"
#include "stream.h"
#include "rebalance.h"


typedef struct abtst_global_struct
{
	abtst_streams streams;
	abtst_loads   loads;
	abtst_mapping mapping;
	abtst_rebalance rebalance;

} abtst_global;

#endif

