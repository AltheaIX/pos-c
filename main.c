#include <stdio.h>

#include "errors.h"
#include "file.h"
#include "json.h"
#include "cjson/cJSON.h"

int main(void) {
    Error error = {ERROR_NONE, NULL};

    cJSON *json = parseJsonFromFile(&error, "data.json");
    if (error.code != ERROR_NONE) {
        printf("Error message: %s\n", getErrorMessage(&error));
        return error.code;
    }


    cJSON *electronics = cJSON_GetObjectItem(json, "electronics");
    if (electronics == NULL) {
        printf("No electronics found\n");
        return ERROR_JSON_GET_OBJECT;
    }

    cJSON *electronic2 = cJSON_CreateObject();
    cJSON_AddNumberToObject(electronic2, "id", 10);
    cJSON_AddStringToObject(electronic2, "name", "Test");
    cJSON_AddItemToArray(electronics, electronic2);

    char *json_str = cJSON_Print(json);
    writeToFile(&error ,json_str, "data.json");
    if (error.code != ERROR_NONE) {
        printf("Error message: %s\n", getErrorMessage(&error));
        return error.code;
    }


    /*cJSON *electronic = cJSON_GetArrayItem(electronics, 0);
    if (electronic == NULL) {
        printf("No electronics found\n");
        return ERROR_JSON_GET_ARRAY;
    }

    cJSON *id = cJSON_GetObjectItem(electronic, "id");
    printf("ID: %d\n", id->valueint);*/

    return ERROR_NONE;
}