# Simple Product Management System in C

## Overview

This C program provides a basic product management system featuring functionalities for entering product information, displaying receipts, and finalizing transactions. The system is designed for simplicity, making it suitable for educational purposes or as a starting point for more advanced point-of-sale systems.

## Features

- **Input Product:**
  - Users can input product details, including the product name, quantity, and unit price.
  - The program calculates the total amount for each product and appends the information to a file named "receipt.txt."

- **Display Receipt:**
  - Users can view a running receipt summarizing the products entered during the session.
  - The receipt includes columns for the product name, quantity, unit price, and total amount.

- **Finish Transaction:**
  - Finalizes the transaction by displaying a comprehensive receipt with additional details.
  - The final receipt includes the date of the transaction, a breakdown of individual products, a subtotal, VAT (Value Added Tax), and the net total.
  - After displaying the final receipt, the program clears the transaction history by emptying the "receipt.txt" file.

## Getting Started

1. **Compile:**
   - Compile the program using a C compiler (e.g., gcc).
     ```bash
     gcc -o product_management_system product_management_system.c
     ```

2. **Run:**
   - Execute the compiled binary.
     ```bash
     ./product_management_system
     ```

3. **Usage:**
   - Follow the on-screen menu to input products, display receipts, and finish transactions.

4. **Exit:**
   - To exit the program, choose the "Exit" option from the menu.

## File Structure

- **product_management_system.c:**
  - Main source code for the product management system.

- **receipt.txt:**
  - Stores transaction details, including product information and totals.

## Additional Notes

- Ensure that you have appropriate permissions to read and write to the "receipt.txt" file.

## Example Output

```plaintext
1. Input product
2. DISPLAY
3. Finish
0. Exit
Enter your choice : 1

Enter Product Name : Laptop
Enter Quantity : 2
Enter unit : 800.00

1. Input product
2. DISPLAY
3. Finish
0. Exit
Enter your choice : 1

Enter Product Name : Mouse
Enter Quantity : 5
Enter unit : 15.00

1. Input product
2. DISPLAY
3. Finish
0. Exit
Enter your choice : 2

                          RECEIPT                              
-------------------------------------------------------------------
name           Quantity       unit      amount
-------------------------------------------------------------------
Laptop         2              800.00    1600.00
Mouse          5              15.00     75.00
-------------------------------------------------------------------

1. Input product
2. DISPLAY
3. Finish
0. Exit
Enter your choice : 3

                     -----RECEIPT-----                         
                      DATE 2023-11-24                         
-------------------------------------------------------------------
name           Quantity       unit      amount
-------------------------------------------------------------------
Laptop         2              800.00    1600.00
Mouse          5              15.00     75.00
-------------------------------------------------------------------
                                         Sub Total = 1792.25
                                         V.A.T = 117.25
                                         NETTOTAL = 1675

1. Input product
2. DISPLAY
3. Finish
0. Exit
Enter your choice : 0
