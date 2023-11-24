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
