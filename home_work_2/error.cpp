#pragma once
#include <string>
#include "error.h"
Error::Error(std::string error) : err(error) {

};
const char* Error::what() const{
	return err.c_str();
	
}