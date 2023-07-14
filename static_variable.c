#include <stdio.h>

int runner(){
  int count = 0;
  count++;
  return count;
}


int main(){
  // Static Variable in C Programming

  /*

  What is a static variable?

  By default, variables are local to the scope in which they are defined. Variables can be
  declared as static to increase their scope up to file containing them. As a result, these
  variables can be accessed anywhere inside a file.
 */

  printf("%d ", runner());
  printf("%d ", runner());
  return 0;

}


