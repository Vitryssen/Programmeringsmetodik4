#include "email.h"

bool CompWhoDateSubject::operator()(const Email& left, const Email& right)
{
	return false;
}

bool CompDateWhoSubject::operator()(const Email& left, const Email& right)
{
	return false;
}

bool CompSubjectWhoDate::operator()(const Email& left, const Email& right)
{
	return false;
}

Email::Email(const std::string& from, const std::string& date, const std::string& subject)
{
}

std::ostream& operator<<(std::ostream& print, const Email& mail)
{
	// TODO: insert return statement here
}
