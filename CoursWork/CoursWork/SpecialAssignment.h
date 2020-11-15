#pragma once
#include "Applications.h"
class SpecialAssignment : public Applications
{
public:
    SpecialAssignment();
    SpecialAssignment(const SpecialAssignment& soft);
    void PrintAllInformation() override;
    void SetSALastV(char* saLastV);
    char* GetSALastV() const;
    void SetLicence(char* licence);
    char* GetLicence() const;
    SpecialAssignment& operator=(const SpecialAssignment& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~SpecialAssignment();
protected:
    char* SALastV;
    char* Licence;
};

