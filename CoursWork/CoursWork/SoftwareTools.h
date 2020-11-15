#pragma once
#include "Software.h"
class SoftwareTools : public Software
{
public:
    SoftwareTools();
    SoftwareTools(const SoftwareTools& soft);
    void PrintAllInformation() override;
    void SetSWLastV(char* swLastV);
    char* GetSWLastV() const;
    SoftwareTools& operator=(const  SoftwareTools& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~SoftwareTools();
protected:
    char* SWLastV;
};

