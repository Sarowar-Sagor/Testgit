#include<stdio.h>
struct s{
int id;
  char name[10];
  float gpa;

}sv;
union u{
  int id;
  char name[10];
  float gpa;

//char st[33];
}uv;
int main()
{
    int struct_size,union_size;
    struct_size=sizeof(sv);
    union_size=sizeof(uv);
    printf("Structure variable took %d bytes\n",struct_size);
    printf("Union variable took %d bytes\n",union_size);

}
