/*#include <cstddef>*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <dirent.h>



int main(){

    DIR *dir = opendir(".");
     if (dir == NULL) {
         perror("opendir");
         return 1;
    }


    struct dirent *aux ;

    while ((aux = readdir(dir)) != NULL){

        printf("%s\n", aux->d_name);
        
    }

    closedir(dir);
    return 0;
}



