/*
 * This file is for a modified HTK for my
 * research.
 * You input a string like "N50" or "N60"
 * or "<s>". This function will return 
 * float 50.0 or 60.0 or -1.0
 */
#include <string.h>
#include <stdlib.h>
#include <get_bias.h>
/*
#include <stdio.h>
*/
float get_bias(char *modelName){
    if (modelName == NULL){
        return -1.0;
    }
    if ((strcmp(modelName, "<s>") == 0)
            || (strcmp(modelName, "</s>") == 0)
            || (strcmp(modelName, "N0") == 0)){
        return 0.0;
    }
    float result = 0;
    result = 10 * (modelName[1] - '0') + modelName[2] - '0';
    return result;
}

/*
int main(){
    printf("N0\'s bias is %f\n", get_bias("N0"));
    printf("N52\'s bias is %f\n", get_bias("N64"));
    return 0;
}
*/


