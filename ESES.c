\\Note to self: Put through a beautifer: http://www.gnu.org/software/indent/
#include <stdio.h>
int main (void) {
char user;
char pass;
char pass2;
char str [80];
float f;
FILE * pFile;

printf ("ESES Loading...\n\nLicensed under the Creative Commons Attribution-ShareAlike 4.0 International license.\n\nSee license file for more information\n\n");
scanf ("%c", &user);
  if (user == 'd') {
    printf ("You have entered %c as your username. Please enter your password \n\n", user);
  } else {
    printf ("You have failed to pass the first step of authorization.\n\n");
    
  }
scanf ("%c", &pass);
  if (pass == 'c') {
    printf ("You have entered %c as your username. Please enter your password \n\n", pass);
  } else {
    printf ("You have failed the second step of authorization. \n\n");
  }
  if (pass2 == 'cx2') {
    printf ("Access granted");
    printf ("Your top secret data is loading...\n For extra security, you may not store more than one top secret data in this program \n\n");
    pFile = fopen ("topsecret.txt","w+");
    fprintf (pFile, "%f %s", 3.1416, "PI");
    rewind (pFile);
    fscanf (pFile, "%f", &f);
    fscanf (pFile, "%s", str);
    fclose (pFile);
    printf ("TOP SECRET DATA BY ORDER OF USER: %f and %s \n",f,str);

  } else {
    printf ("You have failed the third step of authorization. \n\n");
  }
  return 0;
}
