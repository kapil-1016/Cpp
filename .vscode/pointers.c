// pointers are datatypes which stores arress of anothern data.
// why we need pointers?
// we can call any data-type using thier addresses-->two types of addresses
// local n permanent addresses.
/*#include<stdio.h>
int main(){
    int x;
    x=10;
    int *p;
    p=&x;
    printf("address of x is:%p",&p);
    return 0;
}
// pointer is one of the important componentn of c language,
// the use of pointers allows low level memory access, dynamic memory allocation.
*/

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("krishna.txt","w");
    fclose(fptr);
    fprintf(fptr,"hellow world");
    return 0;
}