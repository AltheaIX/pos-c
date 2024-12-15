//
// Created by Malik on 15/12/2024.
//

#ifndef JSON_H
#define JSON_H
#include "errors.h"
#include "cjson/cJSON.h"

cJSON* parseJsonFromFile(Error *error, const char* fileName);

#endif //JSON_H
