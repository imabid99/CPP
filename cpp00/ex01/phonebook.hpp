#include "contact.hpp"

class Phonebook{
    private:
    Contact contact[8];
    int nbr_contact;

    public:
    static int phb_nbr;
    void    index_print();
    void    print_contact();
    void    add_contact();
};