#include "email.h"
#include <iostream>
bool CompWhoDateSubject::operator()(const Email& left, const Email& right)
{
	if (left.from < right.from) return true;
	else if (left.from > right.from) return false;
	else {
		if (left.date < right.date) return true;
		else if (left.date > right.date) return false;
		else {
			if (left.subject < right.subject) return true;
			else return false;
		}
	}
}

bool CompDateWhoSubject::operator()(const Email& left, const Email& right)
{
	if (left.date < right.date) return true;
	else if (left.date > right.date) return false;
	else {
		if (left.from < right.from) return true;
		else if (left.from > right.from) return false;
		else {
			if (left.subject < right.subject) return true;
			else return false;
		}
	}
}

bool CompSubjectWhoDate::operator()(const Email& left, const Email& right)
{
	if (left.subject < right.subject) return true;
	else if (left.subject > right.subject) return false;
	else {
		if (left.from < right.from) return true;
		else if (left.from > right.from) return false;
		else {
			if (left.date < right.date) return true;
			else return false;
		}
	}
}

Email::Email(const std::string& from, const std::string& date, const std::string& subject) : from(from), date(date), subject(subject)
{
}

std::ostream& operator<<(std::ostream& print, const Email& mail)
{
	print << "From: " + mail.from + "\nDate: " + mail.date + "\nSubject: " + mail.subject + "\n";
	return print;
}
