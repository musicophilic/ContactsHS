/* 
 * File:   contacts.hpp
 * Author: mayur
 *
 * Created on 4 June, 2016, 7:32 PM
 */

#ifndef CONTACTS_HPP
#define	CONTACTS_HPP

#include<set>
using namespace std;

int addName(string firstName, string lastName);
void searchName(string name, set<string>& results);


struct contact{
    string firstName;
    string lastName;
    struct contact *fnext;
    struct contact *lnext;
}typedef contact_t;

struct contactHead{
    struct contact *first;
}typedef contacthead_t;

#endif	/* CONTACTS_HPP */

