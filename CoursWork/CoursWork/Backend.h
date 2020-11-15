#pragma once
#include "Basic.h"
class Backend : public Basic
{
public:
    Backend();
    Backend(const Backend& soft);
    void PrintAllInformation() override;
    void SetBeType(char* betype);
    char* GetBeType() const;
    Backend& operator=(const Backend& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~Backend();
protected:
    char* BeType;
};

