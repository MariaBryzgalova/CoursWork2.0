#pragma once
#include "Basic.h"
class OS : public Basic
{
public:
    OS();
    OS(const OS& soft);
    void PrintAllInformation() override;
    void SetGUI(char* gui);
    char* GetGUI() const;
    OS& operator=(const OS& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~OS();
protected:
    char* GUI;
};

