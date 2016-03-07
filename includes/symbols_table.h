typedef enum TYPE {
  INT,
  FUN
} TYPE;

typedef struct Symbol {
	char* name;
  TYPE type;
	int addr;
	int init;
  int constant;
  int depth;
  struct Symbol* next;
} Symbol;

typedef struct Table{
	Symbol* symbols;
  int height;
} Table;

void init_symbols_table();
void add_symbol(char* name, TYPE type, int depth);

void remove_symbol(int depth);
