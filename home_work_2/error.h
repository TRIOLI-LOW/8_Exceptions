#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdexcept>
class Error : public std::exception {
private:
		std::string err = "1 11 1";
public:
	Error(std::string error) ;
	virtual const char* what() const;
	
	
};