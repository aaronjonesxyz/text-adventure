#include <stdio.h>
#include <string.h>

/* Commands:
    move,
    inspect,
    pickup,
    interact,
    attack,
    inventory
*/

/* Global Variables */

typedef int (*Operation)( int index );

struct Options 
{
    char name[20];
    int index;
    Operation func;
};

struct blockData
{
    /* world data */
};

struct itemObject
{
    char name[30];
    int * stat[2];
    int statEffect[2];
    int equippable;
};

struct Commands 
{
    char name[20];
    struct Options options[];
};

struct playerData
{
    struct blockData * currentBlock;
    struct itemObject inventory[10];
    /* player data */
};

/* Function Prototypes */
int istrcomp( const char*, const char* );
int playerMove( int );
int mainPrompt();
char * processInput( char * );

int main(){

}

int istrcomp(const char* a, const char* b){ // Case insensitive string comparison
    unsigned int size1 = strlen(a);
    if (strlen(b) != size1)
        return 0;
    for (unsigned int i = 0; i < size1; i++)
        if (tolower(a[i]) != tolower(b[i]))
            return 0;
    return 1;
}

int mainPrompt(){
    char command[30];
    puts( "Enter: " );
    fgets( command, 21, stdin );
    
}

char * processInput( char * string[30] ){
    int iindex;
    int oindexindex = 0;
    int oindex[3];
    char output[3][10];

    for( iindex=0; iindex<=30; iindex++ ){
        if( string[iindex] == ' ' ){
            oindexindex++;
        } else if( string[iindex] == '\0' ){
            output[oindexindex][oindex] = '\0';
            return output;
        } else {
            output[oindexindex][oindex] = string[iindex];
        }
    }
    return (char *)output;
}