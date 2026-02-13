#include <string.h>
#include <stdlib.h>

char * sortSentence(char * s){
    char *ans[9] = {NULL, }; 
    int total_len = strlen(s);
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        int l = strlen(token);
        int pos = token[l-1] - '1';

        ans[pos] = (char *)malloc(strlen(token) + 1);
        strncpy(ans[pos], token, l-1);
        ans[pos][l-1] = '\0';

        token = strtok(NULL, " ");
        count++;
    }
    char * ret = (char *)malloc(total_len + 1);
    ret[0] = '\0';
    for (int i = 0; i < count; i++) {
        if (i < count - 1) strcat(ans[i], " ");
        strcat(ret, ans[i]);
        free(ans[i]);
    }
    return ret;
}