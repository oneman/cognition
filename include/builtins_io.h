#ifndef BUILTINS_IO_H_
#define BUILTINS_IO_H_

#include <cognition.h>

/*! @brief prints the entire stack */
void cog_questionmark(value_t *v);

/*! @brief pops first value off of the stack and prints it */
void cog_period(value_t *v);

/*! @brief */
void cog_fwrite(value_t *v);

/*! @brief reads stdin into string */
void cog_read(value_t *v);

#endif // BUILTINS_IO_H_