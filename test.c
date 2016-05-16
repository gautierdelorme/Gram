int f() {
  int a = 2;
  printf(a);
}
int g() {
  int a = 2;
  printf(a);
}
// lol
/* a COMMENT
 * multi lines
 */
int main () {
  int b[2];
  b[0] = 22;
  b[1] = 33;
  int a = b[0];
  while (a < 44) {
    if (a < 33) {
      a = a+2;
    } else {
      if (a > 42) {
        a = a+3;
      } else {
        a = a+1;
      }
    }
    printf(a);
  }
  *b = 555;
  a = b[0];
  printf(a);
  a = b[1];
  printf(a);
  /* call
    f
  */
  f();
}
