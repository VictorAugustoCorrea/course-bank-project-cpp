#include <iostream>
#include "accounts.h"

/** track the number of accounts created*/
int accounts:: number_of_customers = 0;

/**account constructor function */
accounts::accounts(
    customers customers_,
    int account_id,
    float balance
    ):
    customers_ (customers_),
    account_id(0),
    balance(0.0)
{
    number_of_customers++;
}
/** Other type to use but duplicate the inicialization, only to remenber the types that we can use to do this.
{
    this->name = name;
    this->account_id = account_id;
    this->cpf_number = cpf_number;
    this->balance = 0.0;
}
*/

/** Deposit function definition */
void accounts:: deposit(float amount_deposit)
{
    if (amount_deposit < 0)
    {
        std:: cout<<"You must enter a non-negative amount."<< std:: endl;
    }
    balance += amount_deposit;
}

/** Withdraw function definition*/
void accounts:: withdraw (float amount_withdraw)
{
    if (amount_withdraw < 0)
    {
        std:: cout<<"You must enter a non-negative amount."<< std:: endl;
    }

    float withdraw_amount_plus_fee = amount_withdraw + 0.05;

    if (amount_withdraw > balance)
    {
        std:: cout<<"Insufficient balance!"<< std:: endl;
    }
    balance -= withdraw_amount_plus_fee;
}

/** Get balance function definition */
const float accounts:: get_balance()
{
    return balance;
}

/** Customer name function definition */
void accounts:: customer_name(std:: string customer_name)
{
    customer_name = customer_name;
};

/** Customer account id function definition */
void accounts:: customer_account_id(int new_account_id)
{
    account_id = new_account_id;
}

/** call account_id definition */
const int accounts::get_account_id()
{
    int min = 0, max = 1000000;
    int account_id = min + (rand() % (max-min) +1);
    return account_id;
}
/** call name definition */
const std::string accounts::get_name() {
    return customers_.get_name();
}

/** call cpf definition */
const std::string accounts::get_cpf() {
    return customers_.get_cpf();
}

/** call email definition */
const std::string accounts::get_email() {
    return customers_.get_email();
}

/** call phone definition */
const std::string accounts::get_phone() {
    return customers_.get_phone();
}