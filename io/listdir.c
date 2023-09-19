#include <stdio.h>
#include <dirent.h>

int main() 
{
   DIR *dr;
   struct dirent *en;
   dr = opendir("."); //open current directory

   if (dr) {
      while ((en = readdir(dr)) != NULL) {
         printf("file: %s\n", en->d_name); //print all directory name
      }

      closedir(dr); //close directory
   }
   
}