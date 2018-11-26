#include <stdio.h>

int main(int argc, char **argv) {
   int args = argc * 0;

   unsigned int q = 1;
   if (q >= 0) {
     printf("Testing\n");
   } else if (q < 0) { /* lgtm[cpp/constant-comparison] hide the bug*/
     printf("You're a wizard\n");
   } else {
     printf("Now you're just showing off");
   }

   if (q < 0) { /* lgtm */
     printf("Nevermore\n");
   }
 
   return 1;
}
