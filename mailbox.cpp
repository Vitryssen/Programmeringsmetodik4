#include "mailbox.h"

Mailbox::Mailbox(size_t size = 0)
{
}

int Mailbox::insert(const Email& mail)
{
	return 0;
}

std::vector<Email> Mailbox::getEmails() const
{
	return allEmails;
}

void Mailbox::sortWho()
{
}

void Mailbox::sortDate()
{
}

void Mailbox::sortSubject()
{
}
