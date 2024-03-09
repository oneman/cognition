#include <builtins/io.h>
#include <stdio.h>
#include <macros.h>

extern stack_t *STACK;

void print_value(value_t *v, const char *end) {
  custom_t *c;
  switch (v->type) {
    case VWORD:
      printf("'");
      for (int i = 0; i < v->str_word->length; i++) {
        if (v->str_word->value[i] == '\n') {
          printf("\\n");
        }
        else printf("%c", v->str_word->value[i]);
      }
      printf("'");
      break;
    case VSTACK:
      printf("[ ");
      for (int i = 0; i < v->container->stack->size; i++) {
        print_value(v->container->stack->items[i], " ");
      }
      printf("]");
      break;
    case VERR:
      printf("%sERROR%s: %s", RED, COLOR_RESET, v->str_word->value);
      break;
    case VCUSTOM:
      c = ht_get(ot_get(), v->str_word);
      c->printfunc(v->custom);
      break;
    case VCLIB:
      printf("CLIB_FUNC");
  }
  printf("%s", end);
}

void cog_questionmark(value_t *v) {
  contain_t *cur = stack_peek(STACK);
  printf("%sSTACK:%s\n", GRN, COLOR_RESET);
  for (int i = 0; i < cur->stack->size; i++) {
    print_value(cur->stack->items[i], "\n");
  }
  printf("\n");
}

void cog_period(value_t *v) {
  contain_t *cur = stack_peek(STACK);
  value_t *elt = stack_pop(cur->stack);
  print_value(elt, "\n");
  value_free(elt);
}

void add_funcs_io(ht_t* flit) {
  add_func(flit, cog_questionmark, "?");
  add_func(flit, cog_period, ".");
}