#include "mailbox.h"
#include "email.h"
#include <iostream>
template<class T>
void show(const std::vector<T>& vector) {
	for (const auto& item : vector) {
		std::cout << item << std::endl;
	}
}
int main() {
	Mailbox box;
	box.insert(Email("Andre", "2020-01-01", "test"));
	box.insert(Email("Andre", "2020-01-02", "test2"));
	box.insert(Email("Andre", "2020-01-03", "test3"));
	box.insert(Email("Andre", "2020-01-04", "test5"));
	box.insert(Email("Andre", "2020-01-04", "test4"));
	box.sortDate();
	show(box.getEmails());
	return 0;
}