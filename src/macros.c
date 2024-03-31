#include<stdio.h>

int main(int argc, char **argv){
    /* To print the 5 macro names defined in C */
    printf("Line of this statement: %d\n",__LINE__);
    printf("File name when compiled: %s\n",__FILE__);
    printf("Date of compilation: %s\n",__DATE__);
    printf("Time of compilation: %s\n",__TIME__);
    printf("Standard C: %d\n",__STDC__);

}
