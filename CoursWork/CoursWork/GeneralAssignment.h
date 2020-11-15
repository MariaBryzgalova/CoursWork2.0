#pragma once
#include "Applications.h"
class GeneralAssignment : public Applications
{
public:
    GeneralAssignment();
    GeneralAssignment(const GeneralAssignment& soft);
    void PrintAllInformation() override;
    void SetGAType(char* gaType);
    char* GetGAType() const;
    GeneralAssignment& operator=(const GeneralAssignment& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~GeneralAssignment();
protected:
    char* GAType;
};

