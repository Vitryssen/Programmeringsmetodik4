#pragma once
#ifndef MAILBOX_H
#define MAILBOX_H
#include <vector>
#include "email.h"
class Mailbox {
private:
	std::vector<Email> allEmails;
public:
	Mailbox(size_t size = 0);
	void insert(const Email& mail);
	std::vector<Email> getEmails() const;
	void sortWho();
	void sortDate();
	void sortSubject();
};
#endif // !MAILBOX_H
