#include "email.h"
#include <iostream>
bool CompWhoDateSubject::operator()(const Email& left, const Email& right)
{
	if (left.from != right.from)
		return left.from < right.from;
	if (left.date != right.date)
		return left.date < right.date;
	return left.subject < right.subject;
}

bool CompDateWhoSubject::operator()(const Email& left, const Email& right)
{
	if (left.date != right.date)
		return left.date < right.date;
	if (left.from != right.from)
		return left.from < right.from;
	return left.subject < right.subject;
}

bool CompSubjectWhoDate::operator()(const Email& left, const Email& right)
{
	if (left.subject != right.subject)
		return left.subject < right.subject;
	if (left.from != right.from)
		return left.from < right.from;
	return left.date < right.date;
}

Email::Email(const std::string& from, const std::string& date, const std::string& subject) : from(from), date(date), subject(subject)
{
}

std::ostream& operator<<(std::ostream& print, const Email& mail)
{
	print << "From: " + mail.from + "\nDate: " + mail.date + "\nSubject: " + mail.subject + "\n";
	return print;
}
