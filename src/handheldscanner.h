#ifndef HANDHELDSCANNER_H
#define HANDHELDSCANNER_H

#include "scanner.h"

class HandheldScanner : public Scanner
{
public:
    HandheldScanner(Scanner *parent = nullptr);
};

#endif // HANDHELDSCANNER_H
