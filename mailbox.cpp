#include "mailbox.h"
#include <algorithm>
Mailbox::Mailbox(size_t size) : allEmails(std::vector<Email>(size))
{
}

void Mailbox::insert(const Email& mail)
{
	allEmails.push_back(mail);
}

std::vector<Email> Mailbox::getEmails() const
{
	return allEmails;
}

void Mailbox::sortWho()
{
	std::sort(allEmails.begin(), allEmails.end(), CompWhoDateSubject());
}

void Mailbox::sortDate()
{
	std::sort(allEmails.begin(), allEmails.end(), CompDateWhoSubject());
}

void Mailbox::sortSubject()
{
	std::sort(allEmails.begin(), allEmails.end(), CompSubjectWhoDate());
}
