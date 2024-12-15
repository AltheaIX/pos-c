//
// Created by Malik on 15/12/2024.
//

#ifndef FILE_H
#define FILE_H

#include "cjson/cJSON.h"
#include "errors.h"

void writeToFile(Error *error, const char* jsonString, const char* fileName);
FILE* readFromFile(Error *error, const char* fileName);

#endif //FILE_H
