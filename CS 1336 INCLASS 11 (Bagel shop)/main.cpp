/*
1. Declare constants and variables to hold the choice, count, charges, and prices,.
2. Initialize all totals

3. In the do while loop:
3A. Display the menu
3B. Validate the user's choice.
3C. Use switch statements to calculate total for the choices.

4. Calculate the total of all choices.
5. Display the total to the customer.
*/


// Program to calculate the amount a customer should pay for
// his purchases in a bagel shop based on his menu selection.

#include <iostream>
#include <iomanip>

using namespace std ;

    // Declare the constant variables to hold the prices.
const float EVERY_BAGEL_COST = 1.99 ;  // Everything bagel cost.
const float BLUE_BAGEL_COST = 1.99 ;  // blueberry bagel cost.
const float GARLIC_BAGEL_COST = 1.99 ; // garlic bagel cost.
const float CREAM_CHEESE_COST = 2.99 ;  // cream cheese cost.
const float COFFEE_COST = 3.99 ;  // coffee cost.

int main()
{
    // Declare the variables.
    char choice ;  // user's choice
    int cnt;  // user's count
    double total_charges = 0.0 ;  // total charges
    double charges_every = 0.0 ;  // everything bagel charges.
    double charges_blueberry = 0.0 ;  // blueberry bagel charges.
    double charges_garlic = 0.0 ;  // garlic bagel charges
    double charges_cream = 0.0 ;  // cream cheese charges
    double charges_coffee = 0.0 ;  // coffee charges

    // Set the desired output formatting for numbers.
    cout << fixed << showpoint << setprecision(2);

        // Run the menu and perform calculations at
        // least once then continue until 'f' is entered.
    do
    {
            // Display the menu and the values for identifying each item.

        cout << "Please pick one item from the menu:" << endl << endl;
        cout << "Enter A for Everything Bagel" << endl;
        cout << "Enter B for Blueberry Bagel" << endl;
        cout << "Enter C for Garlic Bagel" << endl;
        cout << "Enter D for Cream Cheese" << endl;
        cout << "Enter E for Coffee" << endl;
        cout << "Enter F for quit" << endl << endl;
        cout << "Please enter your choice of food: ";

            // get the user's choice.
        cin >> choice ;
        cout << endl ;


        // Display the results for each case to the user.

        switch (choice)
        {
            case 'a' :
            case 'A' :      // Get the number of everything bagels and display the price.
                        cout << "Enter the count = " ;
                        cin >> cnt ;

                        charges_every = cnt * EVERY_BAGEL_COST ;

                            // Update the total charges.
                        total_charges += charges_every ;

                        cout << "Everything bagel: $" << charges_every << endl << endl ;
                        break ;

            case 'b' :
            case 'B' :      // Get the number of blueberry bagels and display the price.
                        cout << "Enter the count = " ;
                        cin >> cnt ;

                        charges_blueberry = cnt * BLUE_BAGEL_COST ;

                            // Update the total charges.
                        total_charges += charges_blueberry ;

                        cout << "Blueberry Bagel: $" << charges_blueberry << endl << endl ;
                        break ;

            case 'c' :
            case 'C' :      // Get the number of garlic bagels and display the price.
                        cout << "Enter the count = " ;
                        cin >> cnt ;

                        charges_garlic = cnt * GARLIC_BAGEL_COST ;

                            // Update the total charges.
                        total_charges += charges_garlic ;

                        cout << "Garlic Bagel: $" << charges_garlic << endl << endl ;
                        break ;

            case 'd' :
            case 'D' :      // Get the number of cream cheeses and display the price.
                        cout << "Enter the count = " ;
                        cin >> cnt ;

                        charges_cream = cnt * CREAM_CHEESE_COST ;

                            // Update the total charges.
                        total_charges += charges_cream ;

                        cout << "Cream Cheese: $" << charges_cream << endl << endl ;
                        break ;

            case 'e' :
            case 'E' :      // Get the cups of coffee and display the price.
                        cout << "Enter the count = " ;
                        cin >> cnt ;

                        charges_coffee = cnt * COFFEE_COST ;

                            // Update the total charges.
                        total_charges += charges_coffee ;

                        cout << "Cups of coffee: $" << charges_coffee << endl << endl ;
                        break ;

            case 'f' :
            case 'F' :      // Display "quitting" to the user since 'F' was entered.
                        cout << "Quitting..."  << endl;
                        break ;

            default :       // Validate the user's choice.
                        cout << "Please pick a valid menu item." << endl << endl << endl ;
        }

    } while ( choice != 'f' ) ;

    // Display the total charges.
    cout << "\nTotal charges are: $" << total_charges << endl;

    return 0 ;
}
/*

RUN 1: choice = 'A' , count = 5.2 .

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: A

Enter the count = 5.2
Everything bagel: $9.95

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food:
Please pick a valid menu item.

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food:
Please pick a valid menu item.


Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food:


----------------------------------------------------------

RUN 2: choice = 'A', 'c', 's'. count = 7,8.

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: A

Enter the count = 7
Everything bagel: $13.93

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: c

Enter the count = 8
Garlic Bagel: $15.92

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: s

Please pick a valid menu item.


Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food:



---------------------------------------------------------

RUN 3: choice= 'k', 'f'.

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: K

Please pick a valid menu item.


Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: f

Quitting...

Total charges are: $0.00

---------------------------------------------------------------------


RUN 4: choices = 'd','c','a'. count = 4, 5, 7. Then 'f' to quit.

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: d

Enter the count = 4
Cream Cheese: $11.96

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: c

Enter the count = 5
Garlic Bagel: $9.95

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: a

Enter the count = 7
Everything bagel: $13.93

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for Coffee
Enter F for quit

Please enter your choice of food: f

Quitting...

Total charges are: $35.84

-----------------------------------------------------------------

*/
