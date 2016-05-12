int f() {
  int a = 2;
  printf(a);
}

int main () {
  int b[1];
  b[0] = 22;
  int a = b[0];
  printf(a);
  *b = 555;
  a = b[0];
  printf(a);
  f();
}
