#ifndef WOLF_H_
#define WOLF_H_

#include <iostream>
#include <string>

class Wolf
{
public: 
	Wolf (int32_t id, const std::string& name);

	int32_t GetId () const;
	void SetId (int32_t newId);
	std::string GetName () const;

	friend std::ostream& operator<< (std::ostream& out, const Wolf& wolf);

private: 
	int32_t id;
	std::string name;
};

#endif