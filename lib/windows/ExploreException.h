#pragma once

#ifndef _MSC_VER
#define NOEXCEPT noexcept
#else
#define NOEXCEPT
#endif

#include "ExploreExceptionConstants.h"
#include <exception>
#include <string>

using namespace std;

// class to throw exception when error occurs
class ExploreException : std::exception
{
private:
	std::string message;

public:
	ExploreException(std::string message) NOEXCEPT
	{
		this->message = message;
	}

	virtual const char* what() const NOEXCEPT
	{
		return message.c_str();
	}
};

// class to throw exception when reading the data from bluetooth buffer occurs
class ExploreReadBufferException : std::exception
{
private:
	std::string message;
public:
	ExploreReadBufferException(std::string message) NOEXCEPT
	{
		this->message = message;

	}

	virtual const char* what() const NOEXCEPT
	{
		return message.c_str();
	}

};

// class to throw exception when socket is closed but read() method is called from Python
class ExploreIOException : std::exception
{
private:
	std::string message;
public:
	ExploreIOException(std::string message) NOEXCEPT
	{
		this->message = message;

	}

	virtual const char* what() const NOEXCEPT
	{
		return message.c_str();
	}

};


