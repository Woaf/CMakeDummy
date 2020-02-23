#include "Gem_Headers/Wolf.hpp"

Wolf::Wolf (int32_t id, const std::string & name) : 
	id (id), 
	name (name)
{
}

int32_t Wolf::GetId () const
{
	return id;
}

void Wolf::SetId (int32_t newId)
{
	id = newId;
}

std::string Wolf::GetName () const
{
	return name;
}

std::ostream & operator<<(std::ostream & out, const Wolf & wolf)
{
	out << wolf.id << ": " << wolf.name;
	return out;
}
