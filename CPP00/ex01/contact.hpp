#ifndef CPP00_CONTACT_HPP__
# define CPP00_CONTACT_HPP__

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

public:

    Contact(void);
    ~Contact(void);
    void getInfo(void);
    void setInfo(void);
    std::string getName();
    int getIndex();
    void setIndex(int index);
    void displayContact(void);
    void displayContactDetails(void);


private:
    int			_index;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _ph_number;
    std::string _secret;
};

# endif
