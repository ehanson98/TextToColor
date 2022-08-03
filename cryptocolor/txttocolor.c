#include <stdio.h>
#include <stdlib.h>

// AUTHOR: ELLIOT HANSON
// CONCEPT: CONVERT TEXT FILE TO AN ARRAY OF RGB VALUE PAIRS (n,m)
// Generate a PGM Image of the array of values

#define BLACK     1
#define LIGHTGREY 2
#define DARKGREY  3
#define WHITE     4
#define YELLOW    5
#define UMBER     6
#define ORANGE    7
#define PINK      8
#define RED       9
#define PLUM      10
#define PURPLE    11
#define LAVANDER  12
#define BLUE      13
#define TEAL      14
#define GREEN     15
#define OLIVE     16
//Make definitions for encrytion algorythms.
//or encryption keys????
//keys names after the keys of solomon

//Takes an integer value 1-16 and returns a cooresponding RGB array
int *getrgb(int colorin) 
{
    switch(colorin) {
        case 0 :
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 :
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 10 :
        case 11 :
        case 12 :
        case 13 :
        case 14 :
        case 15 :
    }
}


int width;
int height;



int arrcolor[2];
int * colortuple(char char_in){
    int intval = char_in;
    int a = (intval / 16);
    int b = (intval % 16);
    arrcolor[0] =a;
    arrcolor[1] =b;
    return(arrcolor);
}



int main(int argc, char * argv[]){
    //Initializing and opening file from initial arguments.
    int c;
    FILE *fp;
    fp = fopen("./test.txt","r+");
    
    //While loop to run through all the lines of the file.
    //for loop should be nested inside to index throught tha chars
    if(fp){
        while((c = getc(fp)) != EOF)
            printf("%c -> %d , %d \n", c,colortuple(c)[0],colortuple(c)[1]);
        fclose(fp);
    }
/*
    char * filename = argv[1];
    for(int i = 0; filename[i] != NULL; i++){
        printf("%c -> ", filename[i]);
        int *clrarr = colortuple(filename[i]);
        printf("(%d , %d)\n", clrarr[0], clrarr[1] );
    } 
*/    
    

}
