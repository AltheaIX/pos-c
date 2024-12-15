//
// Created by Malik on 15/12/2024.
//

#include "json.h"

#include <stdio.h>

#include "errors.h"
#include "cjson/cJSON.h"

void writeToFile(Error *error, const char* jsonString, const char* fileName) {
    FILE* file = fopen(fileName, "w");
    if (file == NULL) {
        fclose(file);
        *error = setError(ERROR_FILE_OPEN, "Failed to open file.");
        return;
    }
    fputs(jsonString, file);
    fclose(file);
}

FILE* readFromFile(Error *error, const char* fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        fclose(file);
        *error = setError(ERROR_FILE_OPEN, "Failed to open file.");
        return NULL;
    }

    return file;
}
