#include <stdio.h>

#include "errors.h"
#include "file.h"
#include "json.h"
#include "cjson/cJSON.h"

int main(void) {
    Error error = {ERROR_NONE, NULL};

    /*writeToFile(&error ,json_str, "data.json");
    if (error.code != ERROR_NONE) {
        printf("Error message: %s\n", getErrorMessage(&error));
        return error.code;
    }*/

    cJSON *json = parseJsonFromFile(&error, "zxczxcvzxcvzxcv.json");
    if (error.code != ERROR_NONE) {
        printf("Error message: %s\n", getErrorMessage(&error));
        return error.code;
    }


    cJSON *electronics = cJSON_GetObjectItem(json, "electronics");
    if (electronics == NULL) {
        printf("No electronics found\n");
    }

    return ERROR_NONE;
}