#pragma once
#include "Interface.h"

class Software :public Interface
{
public:
    Software();
    Software(const Software& soft);
    void PrintAllInformation() override;
    char* GetName() const override;
    char* GetDeveloper() const override;
    void SetName(char* name) override;
    void SetDeveloper(char* developer) override;
    char* GetData() const;
    void SetData(char* data) override;
    double GetPrice() const;
    void SetPrice(double price);
    Software& operator=(const Software& soft);
    void WriteToFile(char* File) override;
    void ReadFromFile(char* File) override;
    ~Software();
protected:
    char* Name;
    char* Developer;
    char* Data;
    double Price;
};



