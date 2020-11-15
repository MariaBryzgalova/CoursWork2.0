#pragma once
class Exception
{
public:
	Exception();
	Exception(const char* message);
	const char* GetError() const;
	~Exception();
private:
	char* Message;
};

