int main () {
  int a = 0, b[5], c;
  while (a < 5) {
    b[a] = a*3;
    a = a+1;
  }
  a = 0;
  while (a < 5) {
    c = b[a];
    printf(c);
    a = a+1;
  }
}
