#pragma once
#include "Software.h"
class Basic : public Software
{
public:
    Basic();
    Basic(const Basic& soft);
    void PrintAllInformation() override;
    void SetBLastV(char* bLastV);
    char* GetBLastV() const;
    Basic& operator=(const Basic& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~Basic();
protected:
    char* BLastV;
};

