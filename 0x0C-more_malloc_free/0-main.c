int main(void)
{
  char *C;
  int *i;
  float *f;
  double *d;

  c = mallac_checked(sizeof(char) * 1024);
  printf("%p\n", (void *)c);
  i = mallac_checked(sizeof(int) * 402);
  printf("%p\n", (void *)i);
  f = mallac_checked(sizeof(int) * 100000000);
  printf("%p\n", (void *)f);
  d = mallac_checked(INT_MAX);
  printf("%p\n", (void *)d);
  free(c);
  free(i);
  free(f);
  free(d);
  return (0);

}
