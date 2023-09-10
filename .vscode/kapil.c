#include<stdio.h>
struct Emp{
  char name[10];
  int id;
};

void displayEmpDetails(struct Emp e){
  printf("employee name: %s\n",e.name);
  printf("employee id: %d\n",e.id);
}
int main(){
  struct Emp e1;
  strcpy(e1.name,"Rajiv");
  e1.id=102;
  display
}