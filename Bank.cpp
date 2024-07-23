BankAccount account(name, initial_balance);

int choice;

do
{

    cout << "1.Deposit Money\n2.Withdraw Money\n3.Check Balance\n4.Exit\n";

    cin >> choice;

    switch (choice)
    {

    case 1:

        double amt;

        cout << "Enter amount to be deposited: ";

        cin >> amt;

        account.deposit(amt);

        break;

    case 2:
    {

        double amount;

        cout << "Enter amount to withdraw: ";

        cin >> amount;

        account.withdraw(amt);

        break;
    }

    case 3:

        account.checkBalance();

        break;

    case 4:

        cout << "Exiting program." << std::endl;

        break;

    default:

        cout << "Invalid choice. Please try again." << std::endl;

        break;
    }

} while (choice != 4);

return 0;
