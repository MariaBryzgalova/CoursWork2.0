#pragma once
#include "Software.h"

class Applications : public Software
{
public:
    Applications();
    Applications(const Applications& soft);
    void PrintAllInformation() override;
    void SetAppArea(char* appArea);
    char* GetAppArea() const;
    void SetAppType(char* appType);
    char* GetAppType() const;
    Applications& operator=(const  Applications& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~Applications();
protected:
    char* AppArea;
    char* AppType;
};

