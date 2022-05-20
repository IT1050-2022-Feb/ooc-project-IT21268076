#pragma once
class Contact
{
private:
	char customerID[20];
	char email[30];
public:
	Contact();
	void setContactDetails(const char pcustomerID[], const char pemail[]);
	~Contact();

};

