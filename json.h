//
// Created by Malik on 15/12/2024.
//

#ifndef JSON_H
#define JSON_H
#include "errors.h"
#include "cjson/cJSON.h"

cJSON* parseJsonFromFile(Error *error, const char* fileName);
void addObjectToArray(cJSON* json, cJSON* array);

#endif //JSON_H
