#ifndef BUILTINS_MISC_H_
#define BUILTINS_MISC_H_

#include <cognition.h>

/* reset everything in stack */
void cog_reset(value_t *v);

/* adds misc fuctions to flit */
void add_funcs_misc(ht_t *flit);

#endif // BUILTINS_MISC_H_
