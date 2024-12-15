//
// Created by Malik on 15/12/2024.
//

#include "json.h"

#include <stdio.h>

#include "errors.h"
#include "file.h"

cJSON* parseJsonFromFile(Error *error, const char* fileName) {
    FILE* fp = readFromFile(error, fileName);
    if (error->code != ERROR_NONE) {
        return NULL;
    }

    char buffer[1024];
    int len = fread(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    cJSON *root = cJSON_Parse(buffer);
    if (root == NULL) {
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL) {
            *error = setError(ERROR_JSON_PARSE, error_ptr);
        }
        cJSON_Delete(root);
        return NULL;
    }

    return root;
}
