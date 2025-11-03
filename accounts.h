#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>
#include <string>

#include "cmake-build-debug/customers.h"

// Forward declaration of operator<< for customers
std::ostream& operator<<(std::ostream& os, const customers& c);

class  accounts {
private:
    /** Private account infos definition */
    customers customers_;
    int account_id;
    float balance;

public:
    /** Constructor accounts */
    accounts(
    customers customers_,
    int account_id,
    float balance = 0.0
    );
    /** call functions */
    void deposit(float amount_deposit);
    virtual void withdraw(float amount_withdraw);
    void customer_name(std::string customer_name);
    customers customer_cpf(std::string customer_cpf);
    void customer_account_id(int customer_account_id);
    customers customer_phone(std:: string customer_phone);
    customers customer_email(std::string customer_email);


    /** Recover results */
    const std::string get_name();
    const float get_balance();
    const std::string get_cpf();
    const int get_account_id();
    const std::string get_phone();
    const std::string get_email();

    /** Some variables to help track the code*/
    static int number_of_customers;
};
#endif //ACCOUNTS_H