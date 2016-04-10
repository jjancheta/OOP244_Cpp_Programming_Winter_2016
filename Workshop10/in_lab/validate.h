// OOP244 Workshop 10: Function Templates
// File: Validate.h
// Version: 1.0
// Date: 2016/04/4
// Author: ANCHETA, Jesus Jr
// ID# : 017 433 152
// Email: jjancheta@myseneca.ca

#ifndef SICT_VALIDATE_H_
#define SICT_VALIDATE_H_
namespace sict{
	template <typename Type>
	bool validate(Type min, Type max, Type testValue[], int x, bool* result){
		int i;
		int count = 0;
		for (i = 0; i < x; i++){
			result[i] = (testValue[i] >= min && max >= testValue[i]);
			if (result[i]){
				count++;
			}
		}
		return count == x;
	}
}
#endif