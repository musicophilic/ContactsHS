#include<string>
#include<set>

#include "contacts.hpp"
#include "trie.hpp"
using namespace std;

contact_t* addContact(string firstName, string lastName){
    int err = 0;
    contact_t *contactToInsert = new contact_t;
    contactToInsert->firstName = firstName;
    contactToInsert->lastName = lastName;
    contactToInsert->fnext = NULL;
    contactToInsert->lnext = NULL;
    return contactToInsert;
}

void searchName(string name, set<string>& results){
    
}