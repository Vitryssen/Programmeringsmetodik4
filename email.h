#pragma once
#ifndef EMAIL_H
#define EMAIL_H
#include <string>
struct CompWhoDateSubject;
struct CompDateWhoSubject;
struct CompSubjectWhoDate;
class Email {
private:
	std::string from;
	std::string date;
	std::string subject;
public:
	Email() = default;
	Email(const std::string& from, const std::string& date, const std::string& subject);
	friend CompWhoDateSubject;
	friend CompDateWhoSubject;
	friend CompSubjectWhoDate;
	friend std::ostream& operator<<(std::ostream& print, const Email& mail);
};
struct CompWhoDateSubject {
	bool operator()(const Email& left, const Email& right);
};
struct CompDateWhoSubject {
	bool operator()(const Email& left, const Email& right);
};
struct CompSubjectWhoDate {
	bool operator()(const Email& left, const Email& right);
};
#endif // !EMAIL_H
