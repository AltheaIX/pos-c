//
// Created by Malik on 15/12/2024.
//

#include "errors.h"

#include <stddef.h>

Error setError(ErrorCode code, const char *message) {
    Error error;
    error.code = code;
    error.message = message;
    return error;
}

const char *getErrorMessage(const Error *error) {
    if (error != NULL) {
        return error->message;
    }

    return NULL;
}