//
// Created by Malik on 15/12/2024.
//

#ifndef ERRORS_H
#define ERRORS_H

typedef enum {
    ERROR_NONE = 0,
    ERROR_INVALID_INPUT,
    ERROR_OUT_OF_RANGE,
    ERROR_FILE_NOT_FOUND,
    ERROR_FILE_OPEN,
    ERROR_JSON_PARSE,
    ERROR_JSON_GET_OBJECT,
    ERROR_JSON_GET_ARRAY,
} ErrorCode;

typedef struct {
    ErrorCode code;
    const char *message;
} Error;

Error setError(ErrorCode code, const char *message);
const char* getErrorMessage(const Error *error);

#endif //ERRORS_H
