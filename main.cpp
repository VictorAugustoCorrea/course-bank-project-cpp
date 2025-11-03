#include <iostream>
#include "accounts.h"
#include <chrono>

using namespace std;
using namespace chrono;

/** Account infos output */
void account_info(accounts& myAccount)
{
    cout << "Name: "    << myAccount.get_name() << endl;
    cout << "Cpf: "     << myAccount.get_cpf() << endl;
    cout << "Acc_id: "  << myAccount.get_account_id() << endl;
    cout << "E-mail: "  << myAccount.get_email() << endl;
    cout << "Phone: "   << myAccount.get_phone() << endl;
    cout << "Balance: " << myAccount.get_balance() << endl;
    cout << "# Users: " << myAccount.number_of_customers << endl;
    cout << "-------------------------------------------------" << endl;
}

int main() {
    auto start = high_resolution_clock::now();

    /** Example to create a account */
    accounts first_account(
        customers("Victor", "abcd_1238@icloud.com", "(11) 9 8795-5635","012.345.678-90", 1),
        0.0);

    accounts  second_account(
        customers("Joaozinho","123_abcd@gmail.com", "(11) 9 7895-5632", "987.654.321-00", 1),
        0.0);

    first_account.deposit(6000), second_account.deposit(10000);
    first_account.withdraw(100), second_account.withdraw(100);

    account_info(first_account),  account_info(second_account);

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << duration.count() << " microsseconds" << endl;
    return 0;
}
