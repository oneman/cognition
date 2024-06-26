#ifndef BUILTINS_MATH_H_
#define BUILTINS_MATH_H_

#include <cognition.h>

/* negates a number */
void cog_neg(value_t *v);

/* REMOVE cog_inv: inverses a number, reason: just do 1/n */

/*! @brief adds two numbers together, pushes result on the stack */
/*! call in stem with num1 num2 + => num */
void cog_add(value_t *v);

/*! @brief subtracts two numbers together, pushes result on the stack */
/*! call in stem with num1 num2 - => num */
void cog_subtract(value_t *v);

/*! @brief multiplies two numbers together, pushes result on the stack */
/*! call in cognition with num1 num2 * => num */
void cog_multiply(value_t *v);

/*! @brief divides two numbers together, pushes result on the stack */
/*! call in stem with num1 num2 / => num */
void cog_divide(value_t *v);

void cog_real(value_t *v);
void cog_imaginary(value_t *v);

void cog_sqrt(value_t *v);

/*! @brief takes first number to the power of the second, pushes result on the
 * stack */
void cog_pow(value_t *v);

/*! @brief takes exp of first value on the stack */
void cog_exp(value_t *v);

/*! @brief takes sine of first value on the stack */
void cog_sin(value_t *v);

/*! @brief takes cosine of first value on the stack */
void cog_cos(value_t *v);

/*! @brief takes ln of first value on the stack */
void cog_ln(value_t *v);

/*! @brief takes floor function of first value on the stack */
void cog_floor(value_t *v);

/*! @brief takes ceiling function of first value on the stack */
void cog_ceil(value_t *v);

/*! @brief turns float value into int */
void cog_ip(value_t *v);

/* gets the mantissa from a float */
void cog_fp(value_t *v);

/*! @brief polymorphic equals; arguments cannot be quotes */
void cog_equals(value_t *v);

/*! @brief polymorphic not equals; arguments cannot be quotes */
void cog_neq(value_t *v);

/*! @brief greater than or equals */
void cog_geq(value_t *v);

/*! @brief less than or equals */
void cog_leq(value_t *v);

/*! @brief greater than */
void cog_gthan(value_t *v);

/*! @brief less than */
void cog_lthan(value_t *v);

void cog_and(value_t *v);

void cog_or(value_t *v);

void cog_not(value_t *v);

void cog_isfloat(value_t *v);

void cog_isint(value_t *v);

/* takes a function giving the coefficient of a taylor series
 * and computes the series to arbitrary precision */
void cog_taylor(value_t *v);

/* similar for chebyshev approximations */
void cog_chebyshev(value_t *v);

/* adds math fuctions to flit */
void add_funcs_math(ht_t *flit);

#endif // BUILTINS_MATH_H_
