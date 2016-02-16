typedef enum TYPE {
  INT
  FUN
} TYPE;

typedef struct Symbol {
	char* name;
  TYPE type;
	int addr;
	int init;
  int constant;
  int deph;
} Symbol;

typedef struct Table{
	Symbol* symbols;
} Table;


void init_symbols_table();
